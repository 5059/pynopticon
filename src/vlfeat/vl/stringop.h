/** @file   stringop.h
 ** @author Andrea Vedaldi
 ** @brief  String Operations
 **/

#ifndef VL_STRINGOP_H
#define VL_STRINGOP_H

#include "generic.h"

/** @brief File protocols
 ** @anchor vl-file-protocols
 **
 ** The following is a list of the supported protocols with their
 ** symbolic names:
 **
 ** - ASCII protocol (::VL_PROT_ASCII). Symbolic name: <tt>ascii</tt>.
 ** - Binary protocol (::VL_PROT_BINARY). Symbolic name:  <tt>binary</tt>.
 **/

enum {
  VL_PROT_UNKNOWN = -1, /**< unknown protocol */
  VL_PROT_NONE    =  0, /**< no protocol      */ 
  VL_PROT_ASCII,        /**< ASCII protocol   */
  VL_PROT_BINARY        /**< Binary protocol  */
} ;


int    vl_string_copy             (char *dst, int n, char const *src) ;
int    vl_string_copy_sub         (char *dst, int n, char const *beg, char const *end) ;
char*  vl_string_parse_protocol   (char const *str, int *prot) ;
char const* vl_string_protocol_name (int prot) ;
int    vl_string_basename         (char *dst, int n, char const *src, int n_ext) ;
int    vl_string_replace_wildcard (char *dst, int n, char const *src, char wild, char esc, char const* repl) ;
char*  vl_string_find_char_rev    (char const *beg, char const* end, char c) ;
int    vl_string_length           (char const *str) ;
int    vl_string_casei_cmp        (const char *s1, const char *s2) ;

/* VL_STRINGOP_H */
#endif
