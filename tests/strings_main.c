#include <stdio.h>
#include <stdlib.h>
#include "strings_utils.h"

int main() {

    String s = createString("Hello World");
    printf("Original: %s\n", s);
    printf("Length: %d\n", strLength(s));

    String copy = malloc(strLength(s) + 1);
    strCopy(copy, s);
    printf("Copy: %s\n", copy);

    String ncopy = malloc(20);
    strNCopy(ncopy, s, 5);
    printf("NCopy: %s\n", ncopy);

    printf("Compare Hello vs Hello: %d\n", strCompare("Hello", "Hello"));
    printf("Compare Hello vs World: %d\n", strCompare("Hello", "World"));

    printf("NCompare Hello vs Help (3): %d\n", strNCompare("Hello", "Help", 3));

    String concat = createString("Hello");
    strConcat(concat, " World");
    printf("Concat: %s\n", concat);

    String nconcat = createString("Hello");
    strNConcat(nconcat, "WorldXYZ", 5);
    printf("NConcat: %s\n", nconcat);

    printf("First 'o' index: %d\n", strFindChar(s, 'o'));
    printf("Last 'o' index: %d\n", strFindLastChar(s, 'o'));

    printf("Substring 'World' index: %d\n", strFindSubstring(s, "World"));

    String rev = createString("ABCDE");
    strReverse(rev);
    printf("Reversed: %s\n", rev);

    String upper = createString("hello");
    strToUpper(upper);
    printf("Upper: %s\n", upper);

    String lower = createString("HELLO");
    strToLower(lower);
    printf("Lower: %s\n", lower);

    String newline = createString("Hello\nWorld\n");
    strRemoveNewline(newline);
    printf("Removed newline: %s\n", newline);

    String trim = createString("   Hello World   ");
    strTrim(trim);
    printf("Trimmed: '%s'\n", trim);

    printf("Palindrome 'madam': %d\n", isPalindrome("madam"));
    printf("Palindrome 'hello': %d\n", isPalindrome("hello"));

    printf("Numeric '12345': %d\n", isNumeric("12345"));
    printf("Numeric '123a': %d\n", isNumeric("123a"));

    printf("Alphabetic 'Hello': %d\n", isAlphabetic("Hello"));
    printf("Alphabetic 'Hello123': %d\n", isAlphabetic("Hello123"));

    printf("AlphaNumeric 'Hello123': %d\n", isAlphaNumeric("Hello123"));
    printf("AlphaNumeric 'Hello@': %d\n", isAlphaNumeric("Hello@"));

    printf("Count 'l' in Hello: %d\n", countChar("Hello", 'l'));

    printf("Words in 'One Two Three Four': %d\n", countWords("One Two Three Four"));

    printf("Vowels in 'Hello World': %d\n", countVowels("Hello World"));

    String remove = createString("banana");
    removeChar(remove, 'a');
    printf("Remove 'a' from banana: %s\n", remove);

    String dup = createString("programming");
    removeDuplicates(dup);
    printf("Remove duplicates: %s\n", dup);

    String replace = createString("apple");
    replaceChar(replace, 'p', 'x');
    printf("Replace p with x: %s\n", replace);

    String rsub = createString("I love coding");
    replaceSubstring(rsub, "love", "like");
    printf("Replace substring: %s\n", rsub);

    String split = createString("One,Two,Three,Four");
    printf("Split string:\n");
    splitString(split, ',');
    printf("%s\n", split);

    printf("String to Int '1234': %d\n", strToInt("1234"));

    char numstr[20];
    intToStr(5678, numstr);
    printf("Int to String: %s\n", numstr);

    String dupstr = strDuplicate("Duplicate Me");
    printf("Duplicated: %s\n", dupstr);

    printf("Safe length (max 4) of 'Hello': %d\n", strSafeLength("Hello", 4));

    free(s);
    free(copy);
    free(ncopy);
    free(concat);
    free(nconcat);
    free(rev);
    free(upper);
    free(lower);
    free(newline);
    free(trim);
    free(remove);
    free(dup);
    free(replace);
    free(rsub);
    free(split);
    free(dupstr);

    return 0;
}