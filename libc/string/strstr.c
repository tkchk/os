#include "../include/string.h"

// This will seek s2 inside s1
// Out while loop is tricky
// Basicaly, we loop s1 a lot
// of times untill we face s2
// If faced - a pointer to that s2 in s1
// is returned. Otherswise - we return zero
char *strstr(char *s1, const char *s2) {
    size_t n = strlen(s2);
    while (*s1) {
        if (!memcmp(s1++, s2, n)) {
            return s1 - 1;
        }
    }
    return 0;
}