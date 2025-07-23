#include "s21_string.h"

void s21_strlen_test();

int main() {
    s21_strlen_test();

    return 0;
}

void s21_strlen_test() {
    char *test_strings[5] = {"hello", "", "a", "   ", "hello World"};
    int test_results[5] = {5, 0, 1, 3, 11};

    for (size_t i = 0; i < 5; i++)
    {
        printf("input %s\n", test_strings[i]);
        int result = s21_strlen(test_strings[i]);
        printf("output %d\n", result);

        if (result == test_results[i])
        {
            printf("SUCCESS\n");
        } else {
            printf("FAIL\n");
        }
    }
}