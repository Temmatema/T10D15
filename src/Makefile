CC = gcc
CFLAGS = -Wextra -Werror -Wall -std=c11
LDFLAGS = -lm

BUILD_FOLDER = ../build
TARGET_QUEST_1 = Quest_1
TARGET_QUEST_2 = Quest_2

BUILD_QUEST_1 = $(BUILD_FOLDER)/$(TARGET_QUEST_1)
BUILD_QUEST_2 = $(BUILD_FOLDER)/$(TARGET_QUEST_2)

strlen_tests: CFLAGS += -DTEST_STRLEN
strlen_tests: $(BUILD_QUEST_1) clean

strcmp_tests: CFLAGS += -DTEST_STRCMP
strcmp_tests: $(BUILD_QUEST_2) clean

$(BUILD_QUEST_1): s21_string_test.o s21_string.o
	$(CC) $(CFLAGS) -o $@ $^

$(BUILD_QUEST_2): s21_string_test.o s21_string.o
	$(CC) $(CFLAGS) -o $@ $^

s21_string.o: s21_string.c
	$(CC) $(CFLAGS) -c $< -o $@

s21_string_test.o: s21_string_test.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del *.o

.PHONY: strlen_tests strcmp_tests clean