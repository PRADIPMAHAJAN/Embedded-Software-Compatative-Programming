#include "My_String.h"                  /// Library to access my functions

/// Function Definations
/// Take input string from user function
const char *TakeInpStr(const char *inpStr) {
    printf("Enter the String : ");
    scanf(" %[^\n]", inpStr);           /// %[^\n] reads characters until a newline is encountered
    return inpStr;                      /// string which is taken from user
}

/// Find the string length function
uint8_t FindStrLen(const char *str)
{
    uint8_t count = 0;                  /// Initial count index
    while(str[count] != '\0')           /// traverse untill null character in string
    {
        count++;                        /// post increment
    }
    return count;                       /// return length of the string
}

/// Reverse string function
const char *RevStr(char *str)
{
    uint8_t len = FindStrLen(str);      /// Call function to get length of string
    for(uint8_t i=0; i<len/2; i++)      /// traverse untill middle of the string
    {
        char temp = str[i];             /// swapping starting element with the last element
        str[i] = str[len - i -1];
        str[len - i - 1] = temp;
    }
    return str;                         /// return reversed string
}

/// Function to check palindrome string
bool CheckPalindrom(const char *str)
{
    uint8_t len = FindStrLen(str);      /// Call function to get length of string
    for(uint8_t i=0; i<len/2; i++)      /// traverse untill middle of the string
    {
        if(str[i] != str[len - i -1])   /// compare starting++ char with last-- char
        {
            return false;               /// If any one char not match - string not palindrome
        }
    }
    return true;                        /// after complete string return true - palindrome
}

/// Concating 2 string
const char *ConcatStr(const char *str1, const char *str2, char *result)
{
    int i, j = 0;                       
    for(i=0; str1[i] != '\0'; i++)      /// traverse untill null character in string1
    {
        result[i] = str1[i];            /// store first string 
    }
    for(j=0; str2[j] != '\0'; j++)      /// traverse untill null character in string2
    {
        result[i+j] = str2[j];          /// store second string 
    }
    result[i+j] = '\0';                 /// add null in last
    return result;                      /// return concated string
}

/// Find Characters Occurance in the string
void FindCharOccurrence(const char *str, char arr[][SECOND_IND]) {
    int charCount[256] = {0};           /// Int array for 256 char
    for(int i = 0; str[i]!='\0'; i++)   /// traverse untill null character in string
    {
        charCount[str[i]]++;            /// add character ascii in array
    }
    int index = 0;                      
    for(int i = 0; i < 256; i++) {
        if(charCount[i] > 0) {
            arr[index][0] = i;          /// Store the character
            arr[index][1] = charCount[i]; /// Store its occurrence count
            index++;
        }
    }
}

/// Copy one string to another string
void StringCopy(char *dest, const char *src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';                       /// Null-terminate the destination string
}

void StringSplit(char *str, char ch) {
    char *ptr = str;
    while (*ptr != '\0') {
        char token[50] = {0};
        char *start = ptr;
        while (*ptr != ch && *ptr != '\0') /// Find the next occurrence of the delimiter or the end of the string
        {  
            ptr++;
        }
        int length = ptr - start;       /// Calculate the length of the substring
        int i;                          /// Copy the substring to the token array
        for (i = 0; i < length; i++) {
            token[i] = start[i];
        }
        token[i] = '\0';                /// Null-terminate the substring
        printf("%s\n", token);
        
        if (*ptr != '\0') {             /// Move the pointer to the next character if it's not the end of the string
            ptr++;
        }
    }
}

// Extract data once we receive a : then total number of char.
const char *ExtractFromChar(char *inputString, char check_char, int num) {
    char *output;
    char *ptr = inputString;
    int colonFound = 0;

    while (*ptr != '\0') {
        if (*ptr == check_char) {
            colonFound = 1;
            ptr++; // Move past the colon
        }
        if (colonFound) {
            // ptr++; //space skip.
            for (int i = 0; i < num && *ptr != ',' && *ptr != '\0'; i++) {
                output[i] = *ptr;
                ptr++;
            }
            // printf("%s\n", token);
            return output; /// just for receive starting
            colonFound = 0; // Reset flag after processing
        } else {
            ptr++;
        }
    }
}

bool FindSubStr(const char *main_str, const char *sub_str) {
    int main_len = FindStrLen(main_str);    /// Call function to get length of string
    int sub_len = FindStrLen(sub_str);      /// Call function to get length of string

    for (int i = 0; i <= main_len - sub_len; i++) {
        int j;
        for (j = 0; j < sub_len; j++) {
            if (main_str[i + j] != sub_str[j])
                break;
        }
        if (j == sub_len)
            return true;                    /// Substring found starting at index i
    }
    return false;                           /// Substring not found
}