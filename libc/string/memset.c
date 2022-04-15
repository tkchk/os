#include "../include/string.h"

// This will fill bufptr memory region
// with value byte-by-byte, and limit it by size
void *memset(void *bufptr, int value, size_t size) {
    unsigned char *buf = (unsigned char*)bufptr;

    size_t i;
    for (i = 0; i < size; i++) {
        buf[i] = (unsigned char)value;
    }
    
    return bufptr;
}