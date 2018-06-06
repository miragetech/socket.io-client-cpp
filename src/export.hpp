#ifndef _SIO_EXPORT_HPP_
#define _SIO_EXPORT_HPP_ 1

#if defined(_MSC_VER) || defined(__CYGWIN__) || defined(__MINGW32__) || defined( __BCPLUSPLUS__)  || defined( __MWERKS__)
#  if defined( USE_STATIC )
#    define SIO_EXPORT
#  elif defined( SIO_LIBRARY )
#    define SIO_EXPORT   __declspec(dllexport)
#  else
#    define SIO_EXPORT   __declspec(dllimport)
#  endif /* SIO_EXPORT */
#else
#  define SIO_EXPORT
#endif 

#endif