#include "s21_string.h"

void s21_strlen_test();
void s21_strcmp_test();

int main() {
#ifdef TEST_STRLEN
    s21_strlen_test();
#elif defined TEST_STRCMP
    s21_strcmp_test();
#else
    printf("No test defined\n");
#endif

    return 0;
}

void s21_strlen_test() {
    char *test_strings[5] = {"hello", "", "a", "   ", "hello World"};
    int test_results[5] = {5, 0, 1, 3, 11};

    for (int i = 0; i < 5; i++)
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

void s21_strcmp_test() {
    char *string1[5] = {"Hello", "Hello", "Hell", "Hello", "Hello World"};
    char *string2[5] = {"Hello", "World", "Hello", "Hell", "Hello World!"};
    int test_results[5] = {0, -15, -111, 111, -33};

    for (int i = 0; i < 5; i++)
    {
        printf("input %s %s\n", string1[i], string2[i]);
        int result = s21_strcmp(string1[i], string2[i]);
        printf("output %d\n", result);

        if (result == test_results[i])
        {
            printf("SUCCESS\n");
        } else {
            printf("FAIL\n");
        }
    }
    
}