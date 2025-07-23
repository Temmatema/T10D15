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