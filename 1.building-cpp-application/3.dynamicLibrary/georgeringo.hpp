#ifndef GEORGERINGO_HPP_INCLUDED
#define GEORGERINGO_HPP_INCLUDED

// define GEORGERINGO_DLL when building libgeorgeringo.dll
# if defined(_WIN32) && !defined(__GNUC__)
#   ifdef GEORGERINGO_DLL
#       define GEORGERINGO_DECL __declspec(dllexport)
#   else
#       define GEORGERINGO_DECL __declspec(dllimport)
#   endif
# endif // WIN32

#ifndef GEORGERINGO_DECL
#define GEORGERINGO_DECL
#endif // !GEORGERINGO_DECL

// prints "George, and Ringo\n"
#ifdef __MWERKS__
#   pragma export on
#endif // __MWERKS__

GEORGERINGO_DECL void georgeringo();
#ifdef __MWERKS__
#   pragma export off
#endif // __MWERKS__

#endif // !GEORGERINGO_HPP_INCLUDED