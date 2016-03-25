/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Directory where bannertopdf finds its data files (PDF templates) */
#define BANNERTOPDF_DATADIR "/system/usr/root/share/cups/data"

/* CUPS Version is 1.4 or newer */
#define CUPS_1_4 1

/* acroread binary to use. */
#define CUPS_ACROREAD "acroread"

/* CUPS datadir */
#define CUPS_DATADIR "/system/usr/root/share/cups"

/* "Domain socket of CUPS" */
#define CUPS_DEFAULT_DOMAINSOCKET "/system/usr/root/var/run/cups/cups.sock"

/* Path to CUPS fonts dir */
#define CUPS_FONTPATH "/system/usr/root/share/cups/fonts"

/* gs binary to use */
#define CUPS_GHOSTSCRIPT "/system/usr/root/bin/gs"

/* max resolution used for pdftops when converting images */
#define CUPS_PDFTOPS_MAX_RESOLUTION 1440

/* Define default renderer */
#define CUPS_PDFTOPS_RENDERER HYBRID

/* pdftocairo binary to use. */
#define CUPS_POPPLER_PDFTOCAIRO "/usr/bin/pdftocairo"

/* pdftops binary to use. */
#define CUPS_POPPLER_PDFTOPS "/system/usr/root/bin/pdftops"

/* Path to CUPS binaries dir */
#define CUPS_SERVERBIN "/system/usr/root/lib/cups"

/* CUPS serverroot */
#define CUPS_SERVERROOT "/system/usr/root/etc/cups"

/* Transient run-time state dir of CUPS */
#define CUPS_STATEDIR "/system/usr/root/var/run/cups"

/* Define that we provide acroread. */
/* #undef HAVE_ACROREAD */

/* Define if you have the avahi library */
/* #undef HAVE_AVAHI */

/* Define if you have Poppler's "cpp/poppler-version.h" header file. */
#define HAVE_CPP_POPPLER_VERSION_H /**/

/* Define to 1 if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <endian.h> header file. */
#define HAVE_ENDIAN_H 1

/* Have FreeType2 include files */
#define HAVE_FREETYPE_H 1

/* Define to 1 if you have the `getline' function. */
/* #undef HAVE_GETLINE */

/* Define that we provide ghostscript binary */
#define HAVE_GHOSTSCRIPT /**/

/* gs supports ps2write */
/* #undef HAVE_GHOSTSCRIPT_PS2WRITE */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <jpeglib.h> header file. */
#define HAVE_JPEGLIB_H 1

/* Define if LDAP support should be enabled */
/* #undef HAVE_LDAP */

/* If libldap implements ldap_set_rebind_proc */
/* #undef HAVE_LDAP_REBIND_PROC */

/* If LDAP has SSL/TLS support enabled */
/* #undef HAVE_LDAP_SSL */

/* Define to 1 if you have the <ldap_ssl.h> header file. */
/* #undef HAVE_LDAP_SSL_H */

/* Defines if we provide jpeg library. */
#define HAVE_LIBJPEG /**/

/* Defines if we provide png library. */
#define HAVE_LIBPNG /**/

/* Defines if we provide tiff library. */
#define HAVE_LIBTIFF /**/

/* Define that we use zlib */
#define HAVE_LIBZ /**/

/* Platform supports long long type */
#define HAVE_LONG_LONG /**/

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* If LDAP support is that of Mozilla */
/* #undef HAVE_MOZILLA_LDAP */

/* If LDAP support is that of OpenLDAP */
/* #undef HAVE_OPENLDAP */

/* Define to 1 if you have the `open_memstream' function. */
/* #undef HAVE_OPEN_MEMSTREAM */

/* Define that we provide poppler pdftocairo. */
#define HAVE_POPPLER_PDFTOCAIRO /**/

/* Define that we provide poppler pdftops. */
#define HAVE_POPPLER_PDFTOPS /**/

/* pdftops supports -origpagesizes. */
#define HAVE_POPPLER_PDFTOPS_WITH_ORIGPAGESIZES 

/* pdftops supports -r argument. */
#define HAVE_POPPLER_PDFTOPS_WITH_RESOLUTION 

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasestr' function. */
#define HAVE_STRCASESTR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strlcat' function. */
#define HAVE_STRLCAT 1

/* Define to 1 if you have the `strlcpy' function. */
#define HAVE_STRLCPY 1

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <tiff.h> header file. */
#define HAVE_TIFF_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `wait3' function. */
#define HAVE_WAIT3 1

/* Define to 1 if you have the `waitpid' function. */
#define HAVE_WAITPID 1

/* Define to 1 if you have the <zlib.h> header file. */
#define HAVE_ZLIB_H 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "cups-filters"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "cups-filters"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "cups-filters 1.8.3"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "cups-filters"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.8.3"

/* Needed for pdftopdf filter compilation */
#define PDFTOPDF /**/

/* Path for a modern shell */
#define SHELL "/bin/bash"

/* Define to 1 if you have the ANSI C header files. */
/* #undef STDC_HEADERS */

/* Path to font used in tests */
#define TESTFONT "/usr/share/fonts/dejavu/DejaVuSans.ttf"

/* Defines if use lcms1 */
/* #undef USE_LCMS1 */

/* Version number of package */
#define VERSION "1.8.3"

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */


#ifdef HAVE_LONG_LONG
#  define CUPS_LLFMT   "%lld"
#  define CUPS_LLCAST  (long long)
#else
#  define CUPS_LLFMT   "%ld"
#  define CUPS_LLCAST  (long)
#endif /* HAVE_LONG_LONG */

#ifdef HAVE_ARC4RANDOM
#  define CUPS_RAND() arc4random()
#  define CUPS_SRAND(v) arc4random_stir()
#elif defined(HAVE_RANDOM)
#  define CUPS_RAND() random()
#  define CUPS_SRAND(v) srandom(v)
#elif defined(HAVE_LRAND48)
#  define CUPS_RAND() lrand48()
#  define CUPS_SRAND(v) srand48(v)
#else
#  define CUPS_RAND() rand()
#  define CUPS_SRAND(v) srand(v)
#endif /* HAVE_ARC4RANDOM */

