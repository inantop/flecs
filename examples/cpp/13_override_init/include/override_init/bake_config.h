/*
                                   )
                                  (.)
                                  .|.
                                  | |
                              _.--| |--._
                           .-';  ;`-'& ; `&.
                          \   &  ;    &   &_/
                           |"""---...---"""|
                           \ | | | | | | | /
                            `---.|.|.|.---'

 * This file is generated by bake.lang.c for your convenience. Headers of
 * dependencies will automatically show up in this file. Include bake_config.h
 * in your main project file. Do not edit! */

#ifndef OVERRIDE_INIT_BAKE_CONFIG_H
#define OVERRIDE_INIT_BAKE_CONFIG_H

/* Headers of public dependencies */
#include <flecs.h>

/* Headers of private dependencies */
#ifdef OVERRIDE_INIT_IMPL
/* No dependencies */
#endif

/* Convenience macro for exporting symbols */
#ifndef OVERRIDE_INIT_STATIC
  #if OVERRIDE_INIT_IMPL && (defined(_MSC_VER) || defined(__MINGW32__))
    #define OVERRIDE_INIT_EXPORT __declspec(dllexport)
  #elif OVERRIDE_INIT_IMPL
    #define OVERRIDE_INIT_EXPORT __attribute__((__visibility__("default")))
  #elif defined _MSC_VER
    #define OVERRIDE_INIT_EXPORT __declspec(dllimport)
  #else
    #define OVERRIDE_INIT_EXPORT
  #endif
#else
  #define OVERRIDE_INIT_EXPORT
#endif

#endif
