#include "../include/string.h"

// Self-explanatory
int isupper(char c) {
    return (c >= 'A' && c <= 'Z');
}

int islower(char c) {
    return (c >= 'a' && c <= 'z');
}

int isalpha(char c) {
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int isspace(char c) {
    return (c == ' ' || c == '\t' || c == '\n' || c == '\12');
}

int isdigit(char c) {
    return (c >= '0' && c <= '9');
}

// Here we trim all space-related
// characters from left side of the srting
char *ltrim(char *s) {
    while (isspace(*s)) s++;
    return s;
}

// Here we do the same, but first, we switch
// to the end of the string. All trimed spaces
// are converted to NULL bytes
char *rtrim(char *s) {
    char *back = s + strlen(s);
    while (isspace(*--back)) {
        *(back + 1) = '\0';
    }
    return s;
}

// Trin from both sides. Left side is
// easier to do.
char *trim(char *s) {
    return rtrim(ltrim(s));
}