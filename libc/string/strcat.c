#include "../include/string.h"

// This will concatenate 2 strings in very
// peculiar fashion.
char *strcat(char *dest, const char *src) {
    char *tmp = dest;

    // This will scroll our pointer
    // to the latest symbol
    while (*dest) dest++;
    // This will assign 2nd string
    // to the 1st byte-by-byte.
    // cool thing is that the result of assignment
    // will always be equal to rvalue.
    // and, when the value is zero,
    // that means we've reached NULL terminator
    while ((*dest++ = *src++) != 0);

    return tmp;
}