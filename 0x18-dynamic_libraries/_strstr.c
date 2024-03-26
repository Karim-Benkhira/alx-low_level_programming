#include "main.h"

char *_strstr(char *haystack, char *needle) {
    char *needle_start;
    char *haystack_ptr;

    if (!*needle) {
        return haystack;
    }

    while (*haystack) {
        needle_start = needle;
        haystack_ptr = haystack;

        while (*needle_start && *haystack_ptr && *needle_start == *haystack_ptr) {
            needle_start++;
            haystack_ptr++;
        }

        if (!*needle_start) {
            return haystack;
        }

        haystack++;
    }

    return NULL;
}
