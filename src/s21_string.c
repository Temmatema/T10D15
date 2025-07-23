#include "s21_string.h"

size_t s21_strlen(const char* str) {
    if (str == NULL)
    {
        return 0;
    }

    size_t length = 0;

    for (; *str; str++, length++);
    
    return length;
}

int s21_strcmp(const char* str1, const char* str2) {
    if (str1 == NULL && str2 == NULL) {
        return 0;
    }
    if (str1 == NULL) {
        return -1;
    }
    if (str2 == NULL) {
        return 1;
    }

    for (; *str1 && (*str1 == *str2); str1++, str2++);

    return *str1 - *str2;
}