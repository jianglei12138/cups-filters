#CUPS-filters

把CUPS成功移植到android后，打印过程你可能需要各种的过滤器。你可以在[这儿](http://www.openprinting.org/download/cups-filters/)获取可能在linux上打印用到的源代码。但是这份代码并不能直接交叉编译来供android使用。具体的编译过程如下：

#### 1.获取源代码

通过git命令来获取源代码，或者使用github的下载功能。

```shell
git clone https://github.com/jianglei12138/cups-filters
```

#### 2.配置环境 

+ 推荐使用NDK导出的交叉编译工具

+ 成功编译cups，需要完整的可执行文件及动态库

+ 编译cups-filters可能需要的各种库，获取动态库。可能需要的动态库列表(都可以在我的仓库中找到在android成功移植的工程)：

  |   需要的动态库   | 简介                                       | 地址                                       |
  | :--------: | ---------------------------------------- | ---------------------------------------- |
  |  libjpeg   | libjpeg是一个完全用C语言编写的库,包含了被广泛使用的JPEG解码、JPEG编码和其他的JPEG功能的实现 | [仓库地址](https://github.com/jianglei12138/jpeg) |
  |  libtiff   | 提供了标签图像文件格式（TIFF）的支持，被广泛用于存储图像数据格式       | [仓库地址](https://github.com/jianglei12138/libtiff) |
  |    glib    | glib库是Linux平台下最常用的C语言函数库，它具有很好的可移植性和实用性。需要glib，gio，gmodule，gobject等动态库 | [glib](https://github.com/jianglei12138/glib) [gmodule](https://github.com/jianglei12138/gmodule) [gio](https://github.com/jianglei12138/gio) [gobject](https://github.com/jianglei12138/gobject) |
  |   lcms2    | 开源的小型彩色管理引擎，特别注重精度和性能。                   | [仓库地址](https://github.com/jianglei12138/libcms2) |
  |  freetype  | FreeType库是一个完全免费（开源）的、高质量的且可移植的字体引擎，它提供统一的接口来访问多种字体格式文件 | [仓库地址](https://github.com/jianglei12138/freetype) |
  | fontconfig | fontconfig 是提供系统范围内字体设置,定制和允许应用程序访问的函数库  | [仓库地址](https://github.com/jianglei12138/fontconfig) |
  |   libijs   | IJS是一个栅格页面图像传输协议。                        | [仓库地址](https://github.com/jianglei12138/ijs) |
  |  poppler   | Poppler 是一个用来生成 PDF 的C++类库,从xpdf 继承而来。   | [仓库地址](https://github.com/jianglei12138/poppler) |
  |  libqpdf   | qpdf是用来处理pdf文件的一个使用C++项目，包含一系列的可执行文件和库   | [仓库地址](https://github.com/jianglei12138/libqpdf) |
  |  ifaddrs   | android获取网络地址的一种实现                       | [仓库地址](https://github.com/jianglei12138/gobject) |


+ 在交叉编译工具里添加编译需要的依赖的各种头文件和动态库

#### 3.编译工程

- configure工程

  ```shell
  ./configure --host=arm-linux-androideabi --prefix=/system/usr/root  --with-cups-config=/system/usr/root/bin/cups-config --disable-dbus --with-gs-path=/system/usr/root/bin/gs --disable-braille  --with-pdftops-path=/system/usr/root/bin/pdftops  --disable-dbus --disable-avahi
  ```

  其中需要指定cups-config的具体路径以及pdftop或者ghostscript的路径。

- make前的修改(使用我提供的代码不需要)
  如果现在make可能会出现各种undefined reference to 的问题，因此需要在make前做一些修改。
  - 修改Makefile文件，放弃编译一些后端程序，如parallel、serial等，查找pkgbackend_PROGRAMS 删除parallel、serial等
  - 修改gio，glib库的使用，搜索GIO_LIBS，GIO_UNIX_LIBS，GLIB_LIBS删除相应的`-2.0`后缀
  - 搜索IJS_LIBS添加 -lijs
  - 搜索FONTCONFIG_LIBS添加 -lfontconfig
  - 搜索FREETYPE_LIBS添加 -lfeetype
  - 搜索LCMS_LIBS添加 -llcms
  - 搜索LIBJPEG_LIBS添加 -ljpeg
  - 搜索LIBPNG_LIBS添加 -lpng12
  - 搜索LIBQPDF_LIBS添加 -lqpdf
  - 搜索LIBTIFF_LIBS添加 -ltiff
  - 搜索POPPLER_LIBS添加 -lpoppler
  - 搜索sbin_PROGRAMS = cups-browsed(EXEEXT)删除cups-browsed(EXEEXT)不编译
- 修改libtool


- make
  make可能会遇到头文件不存在之类的，给NDK交叉编译工具添加上就行

#### 4.测试

cups-filters会与cups安装到相同的文件夹，打包使用
