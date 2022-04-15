#include "../include/string.h"

// This function will convert a single character
// to a null-terminated string
char *ctos(char s[2], const char c) {
    s[0] = c;
    s[1] = '\0';

    return s;
}