#include "../include/string.h"

// This function will seek for character c
// in string s. We just loop the string
// pointer and compare it with c character
// If we faced null character in string - 
// that means we have finished the string
// and return zero
char *strchr(const char *s, int c) {
    while (*s != (char)c) {
        if (!*s++) {
            return 0;
        }
    }
    return (char *)s;
}