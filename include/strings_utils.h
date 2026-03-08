/*
 * strings_utils.h
 *
 * A custom string utility library implementing common
 * string operations such as copying, searching,
 * modification, validation, and conversion.
 *
 * Author: Shashank Sarth Verma
 */
#include <stdlib.h>


#ifndef STRINGS_UTILS_H
#define STRINGS_UTILS_H
typedef char* String;


//Create/Initializing a String
char* createString(const char *str);

// Returns the length of the string (number of characters before '\0')
int strLength(const char *str);

// Copies the source string into the destination buffer
void strCopy(char *dest, const char *src);

// Copies at most n characters from source to destination
void strNCopy(char *dest, const char *src, int n);

// Compares two strings lexicographically
// Returns 0 if equal, negative if s1 < s2, positive if s1 > s2
int strCompare(const char *s1, const char *s2);

// Compares the first n characters of two strings
// Returns 0 if equal, negative if s1 < s2, positive if s1 > s2
int strNCompare(const char *s1, const char *s2, int n);

// Appends the source string to the end of the destination string
void strConcat(char *dest, const char *src);

// Appends at most n characters of the source string to destination
void strNConcat(char *dest, const char *src, int n);

// Returns the index of the first occurrence of character c in the string
// Returns -1 if the character is not found
int strFindChar(const char *str, char c);

// Returns the index of the last occurrence of character c in the string
// Returns -1 if the character is not found
int strFindLastChar(const char *str, char c);

// Returns the index of the first occurrence of the substring in the string
// Returns -1 if the substring is not found
int strFindSubstring(const char *str, const char *substr);

// Reverses the characters of the string in place
void strReverse(char *str);

// Converts all alphabetic characters in the string to uppercase
void strToUpper(char *str);

// Converts all alphabetic characters in the string to lowercase
void strToLower(char *str);

// Removes the newline character ('\n') from the string if present
void strRemoveNewline(char *str);

// Removes leading and trailing whitespace characters from the string
void strTrim(char *str);

// Checks if the string is a palindrome
// Returns 1 if palindrome, 0 otherwise
int isPalindrome(const char *str);

// Checks if the string contains only numeric characters (0–9)
// Returns 1 if true, 0 otherwise
int isNumeric(const char *str);

// Checks if the string contains only alphabetic characters
// Returns 1 if true, 0 otherwise
int isAlphabetic(const char *str);

// Checks if the string contains only alphanumeric characters
// Returns 1 if true, 0 otherwise
int isAlphaNumeric(const char *str);

// Counts the number of occurrences of character c in the string
int countChar(const char *str, char c);

// Counts the number of words in the string
// Words are assumed to be separated by spaces
int countWords(const char *str);

// Counts the number of vowels (a, e, i, o, u) in the string
int countVowels(const char *str);

// Removes all occurrences of character c from the string
void removeChar(char *str, char c);

// Removes duplicate characters from the string
void removeDuplicates(char *str);

// Replaces all occurrences of oldChar with newChar in the string
void replaceChar(char *str, char oldChar, char newChar);

// Replaces the first occurrence of a substring with another substring
void replaceSubstring(char *str, const char *oldSub, const char *newSub);

// Splits the string into tokens based on a delimiter
void splitString(char *str, char delimiter);

// Converts a numeric string to an integer value
int strToInt(const char *str);

// Converts an integer value to its string representation
void intToStr(int num, char *str);

// Creates a duplicate copy of the string using dynamic memory allocation
// The caller is responsible for freeing the returned pointer
char* strDuplicate(const char *str);

// Returns the length of the string up to a maximum limit
// Prevents reading beyond maxLen characters
int strSafeLength(const char *str, int maxLen);

#endif
