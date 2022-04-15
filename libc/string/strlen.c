#include "../include/string.h"

// Here we just loop in string and
// return it's calculated length
// as size_t value
size_t strlen(const char *str) {
    size_t ret = 0;
    while (str[ret] != 0) {
        ret++;
    }
    return ret;
}