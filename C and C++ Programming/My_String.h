#ifndef MY_STRING_H
#define MY_STRING_H
/**
 * @file My_String.h
 * @brief My_String library develop to help of Software developer to use string functions multiple functions available to solve the issues.
 * @author pradip mahajan
 * @date Mar 15, 2024
 */

/// Required Include Libraries
#include<stdbool.h>                 /// For bool return type true and false
#include<stdio.h>                   /// Standard Input/Output library
#include<stdint.h>                  /// used for uint_8, uint16_t datatypes

/// Macros 
#define STRING_SIZE 20              /// Used this size for string operation update as per requirement
#define CONCATE_STR_SIZE 50         /// Concatinating size for string

/// char occurance 2D array Size
#define FIRST_INX 20                /// First coloum for character
#define SECOND_IND 2                /// Second for num of occurance


/// Functions Declarations 

/// @brief Function is used to take a string input
/// @param inpStr passing string
/// @return string return
const char *TakeInpStr(const char *inpStr);

/// @brief calculate the size of the string just like a strlen
/// @param str string for calculate the lenght
/// @return int length of string
uint8_t FindStrLen(const char *str);

/// @brief Function used to reverse the string
/// @param str string to reverse
/// @return return reverse string
const char *RevStr(char *str);

/// @brief Function which is used to check string palindrome
/// @param str string which we have to check palindrome
/// @return bool true - palindrome, false - Not
bool CheckPalindrom(const char *str);

/// @brief concatinate two string in single string
/// @param str1 first string
/// @param str2 second string
/// @param result concanating string result = str1 + str2
/// @return return concatinating string result
const char *ConcatStr(const char *str1, const char *str2, char *result);

/// @brief To check character occurance in the string such as string = "hello" h-1, e-1, l-2, after check updating in 2array
/// @param str string passing
/// @param arr 2D array to store char and occurance in col0 and col1 respectively
/// @return nothing
void *FindCharOccurance(const char *str, char arr[][2]);

/// @brief Function is used to copy one string to another string
/// @param dest destination string where we have to store
/// @param src string which we want to copy sourcw
void StringCopy(char *dest, const char *src);

/// @brief String spliting as per the character. ex. string - hello,this,is,number - char ',' 
/// @param str string for split
/// @param ch character from where we have to split
void StringSplit(char *str, char ch);

/// @brief Function used to extract the string from perticular char ex. string = imei:8678345262516223, start char to extract - ':', upto 15 char
/// @param inputString input string 
/// @param check_char character from where we want to extract
/// @param num upto how many characters
/// @return return extracted string
const char *ExtractFromChar(char *inputString, char check_char, int num);

/// @brief Function is used to find the substring in the main string
/// @param main_str string which contain substring ex. Hello world
/// @param sub_str substring find ex world
/// @return return true - found, false - not found
bool FindSubStr(const char *main_str, const char *sub_str);

#endif



