#include "../include/string.h"

// This function will compare two memory regions
// limited by size. It will return zero, if regions are equal,
// if not - it will return 1 or -1
// it depends on whatever region
// contains bigger or smaller value
int memcmp(const void *aptr, const void *bptr, size_t size) {
    const unsigned char *a = (const unsigned char*)aptr;
    const unsigned char *b = (const unsigned char*)bptr;

    size_t i;
    for (i = 0; i < size; i++) {
        if (a[i] < b[i]) {
            return -1;
        }
        else if (b[i] < a[i]) {
            return 1;
        }
    }
    return 0;
}