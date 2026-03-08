#include <stdio.h>
#include "strings_utils.h"

char* createString(const char *str){
    int length = 0;
    
    while(str[length] != '\0'){
        length++;
    }

    String s = (String) malloc((length + 1) * sizeof(char));

    if(s == NULL)   return NULL;

    for(int i = 0; i <= length; i++)
    {
        s[i] = str[i];
    }

    return s;
}

int strLength(const char *str){
    int length = 0;
    while(str[length] != '\0')
    {
        length++;
    }
    return length;
}

void strCopy(char *dest, const char *src){
    int length = strLength(src);

    for(int i = 0;i <= length; i++){
        dest[i] = src[i];
    }
}

void strNCopy(char *dest, const char *src, int n){
    for(int i = 0;i < n; i++){
        dest[i] = src[i];
    }
    dest[n] = '\0';
}

int strCompare(const char *s1, const char *s2){
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0'){
        if(s1[i] != s2[i])  return s1[i] - s2[i];
        i++;
    }

    if(s1[i] == '\0' && s2[i] == '\0') return 0;
    else if(s1[i] == '\0')     return -1;
    else return 1;
}

int strNCompare(const char *s1, const char *s2, int n){
    for(int i = 0; i < n; i++){
        if(s1[i] != '\0' && s2[i] != '\0') 
        {
            if(s1[i] == '\0' && s2[i] == '\0') return 0;
            else if(s1[i] == '\0')     return -1;
            else return 1;
        }
        if(s1[i] == s2[i])  continue;
        else    return s1[i] - s2[i];
    }
}


void strConcat(char *dest, const char *src){
    int dest_length = strLength(dest);
    int i = 0;
    while(src[i] != '\0'){
        dest[i + dest_length] = src[i];
        i++;
    }
    dest[i + dest_length] = '\0';
}

void strNConcat(char *dest, const char *src, int n){
    int dest_length = strLength(dest);
    int i = 0;
    while(i < n && src[i] != '\0'){
        dest[i + dest_length] = src[i];
        i++;
    }
    dest[i + dest_length] = '\0';
}

int strFindChar(const char *str, char c){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == c)
            return i;
        i++;
    }
    return -1;
}

int strFindLastChar(const char *str, char c){
    int length = strLength(str);

    for(int i = length - 1; i >= 0; i--){
        if(str[i] == c)
            return i;
    }
    return -1;
}

int strFindSubstring(const char *str, const char *substr){
    if (substr[0] == '\0') return 0; 
    for (int i = 0; str[i] != '\0'; i++) {
        int j = 0;
        
        while (str[i + j] == substr[j]) {
            if (substr[j + 1] == '\0') {
                return i; 
            }
            
            if (str[i + j + 1] == '\0') {
                return -1;
            }
            j++;
        }
    }

    return -1; 
}

void strReverse(char *str){
    int length = strLength(str);
    int start = 0;
    int end = length - 1;
    while(start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void strToUpper(char *str){
    int i = 0;

    while(str[i] != '\0'){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] + 'A' - 'a';
        i++;
    }
}


void strToLower(char *str){
    int i = 0;

    while(str[i] != '\0'){
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
        i++;
    }
}

void strRemoveNewline(char *str) {
    int read = 0;  
    int write = 0; 
    while (str[read] != '\0') {
        if (str[read] != '\n') {
            str[write] = str[read];
            write++;
        }
        read++;
    }
    
    str[write] = '\0'; 
}

void strTrim(char *str){
    int i = 0;
    int end = 0;
    int offset = 0;
    int start = 1;
    int start_index = 0;
    while(str[i] != '\0'){
        if(start == 1){
            if(str[i] == ' '){
                offset++;
            }
            else{
                str[i - offset] = str[i];
                start = 0;
            }
        }
        else{
            str[i - offset] = str[i];
            if(str[i-offset] != ' ')    end = i-offset;
        }
        i++;
    }
    str[end+1] = '\0';
}

int isPalindrome(const char *str){
    int length = strLength(str);
    int start = 0;
    int end = length-1;
    while(start < end){
        if(str[start] != str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

int isNumeric(const char *str){
    int i = 0;
    while(str[i] != '\0'){
        if(!(str[i] >= '0' && str[i] <= '9')){
            return 0;
        }
        i++;
    }
    return 1;
}

int isAlphabetic(const char *str){
    int i = 0;
    while(str[i] != '\0'){
        if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))){
            return 0;
        }
        i++;
    }
    return 1;    
}

int isAlphaNumeric(const char *str){
        int i = 0;
    while(str[i] != '\0'){
        if(!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))){
            return 0;
        }
        i++;
    }
    return 1; 
}

int countChar(const char *str, char c){
    int i = 0;
    int count = 0;
    while(str[i] != '\0'){
        if(str[i] == c) count++;
        i++;
    }
    return count;
}

int countWords(const char *str){
    int i = 0;
    int count = 0;
    int inWord = 0;

    while(str[i] != '\0'){
        if(str[i] != ' ' && inWord == 0){
            count++;
            inWord = 1;
        }
        else if(str[i] == ' '){
            inWord = 0;
        }
        i++;
    }
    return count;
}

int countVowels(const char *str){
    int i = 0;
    int count = 0;

    while(str[i] != '\0'){
        char c = str[i];

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
            count++;
        }
        i++;
    }

    return count;
}

void removeChar(char *str, char c){
    int read = 0;
    int write = 0;

    while(str[read] != '\0'){
        if(str[read] != c){
            str[write] = str[read];
            write++;
        }
        read++;
    }

    str[write] = '\0';
}

void removeDuplicates(char *str){
    int i = 0;

    while(str[i] != '\0'){
        int j = i + 1;

        while(str[j] != '\0'){
            if(str[i] == str[j]){
                int k = j;
                while(str[k] != '\0'){
                    str[k] = str[k+1];
                    k++;
                }
            }
            else{
                j++;
            }
        }
        i++;
    }
}

void replaceChar(char *str, char oldChar, char newChar){
    int i = 0;

    while(str[i] != '\0'){
        if(str[i] == oldChar){
            str[i] = newChar;
        }
        i++;
    }
}

void replaceSubstring(char *str, const char *oldSub, const char *newSub){
    int i = 0;
    int j = 0;

    while(str[i] != '\0'){
        j = 0;

        while(oldSub[j] != '\0' && str[i+j] == oldSub[j]){
            j++;
        }

        if(oldSub[j] == '\0'){
            int oldLen = 0;
            int newLen = 0;

            while(oldSub[oldLen] != '\0') oldLen++;
            while(newSub[newLen] != '\0') newLen++;

            int k;

            if(newLen > oldLen){
                int shift = newLen - oldLen;
                int end = i + oldLen;

                while(str[end] != '\0') end++;
                while(end >= i + oldLen){
                    str[end + shift] = str[end];
                    end--;
                }
            }
            else if(newLen < oldLen){
                int shift = oldLen - newLen;
                int k2 = i + newLen;

                while(str[k2 + shift] != '\0'){
                    str[k2] = str[k2 + shift];
                    k2++;
                }
                str[k2] = '\0';
            }

            for(k = 0; k < newLen; k++){
                str[i + k] = newSub[k];
            }

            return;
        }

        i++;
    }
}

void splitString(char *str, char delimiter){
    int i = 0;

    while(str[i] != '\0'){
        if(str[i] == delimiter){
            str[i] = '\n';
        }
        i++;
    }
}

int strToInt(const char *str){
    int i = 0;
    int num = 0;
    int sign = 1;

    if(str[i] == '-'){
        sign = -1;
        i++;
    }

    while(str[i] >= '0' && str[i] <= '9'){
        num = num * 10 + (str[i] - '0');
        i++;
    }

    return num * sign;
}


void intToStr(int num, char *str){
    int i = 0;
    int sign = num;

    if(num < 0){
        num = -num;
    }

    do{
        str[i++] = (num % 10) + '0';
        num /= 10;
    }while(num > 0);

    if(sign < 0){
        str[i++] = '-';
    }

    str[i] = '\0';

    int start = 0;
    int end = i - 1;

    while(start < end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

char* strDuplicate(const char *str){
    int len = 0;

    while(str[len] != '\0'){
        len++;
    }

    char *dup = (char*)malloc((len + 1) * sizeof(char));

    int i;
    for(i = 0; i <= len; i++){
        dup[i] = str[i];
    }

    return dup;
}

int strSafeLength(const char *str, int maxLen){
    int i = 0;

    while(i < maxLen && str[i] != '\0'){
        i++;
    }

    return i;
}