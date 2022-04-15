#include "../include/string.h"

// This will copy one string to another
// using pointers to those strings.
// The move is hacky - every time
// we're while looping, we're moving
// pointers in both strings, and since
// the result of assignment equals
// rvalue, we stop at null character
char *strcpy(char *dest, char *src) {
    char *tmp = dest;

    while ((*dest++ = *src++) != 0);

    return tmp;
}