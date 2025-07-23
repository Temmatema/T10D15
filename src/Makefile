CC = gcc
CFLAGS = -Wextra -Werror -Wall -std=c11
LDFLAGS = -lm

BUILD_FOLDER = ../build
TARGET_QUEST_1 = Quest_1

BUILD_QUEST_1 = $(BUILD_FOLDER)/$(TARGET_QUEST_1)

strlen_tests: $(BUILD_QUEST_1)

$(BUILD_QUEST_1): s21_string_test.o s21_string.o
	$(CC) $(CFLAGS) -o $@ $^

s21_string.o: s21_string.c
	$(CC) $(CFLAGS) -c $< -o $@

s21_string_test.o: s21_string_test.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: strlen_tests