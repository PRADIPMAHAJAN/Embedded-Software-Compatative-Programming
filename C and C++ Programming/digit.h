#ifndef DIGIT_H
#define DIGIT_H
/**
 * @file digit.h
 * @brief 
 * @author pradip mahajan
 * @date Mar 15, 2024
 */

/// Libraries includes
#include<stdint.h>
#include<stdio.h>
#include<stdbool.h>

/// @brief Count no of digit in the number
/// @param num passing number
/// @return int length of the num
uint8_t CountDigit(uint32_t num);

/// @brief Function used to reverse the number
/// @param num passing number
/// @return return reverse number
uint16_t RevDigit(uint16_t num);

/// @brief Function is used to check palindrome
/// @param num passing number
/// @return return true - palindrom, false - Not Palindrome
bool CheckPalindrom(uint16_t num);

/// @brief Find minimum and maximum digit in the number
/// @param num passing number
/// @param smaller first parameter to store smaller digit
/// @param greater second parameter to store greater digit
void FindMaxMinDigit(uint16_t num, uint8_t *smaller, uint8_t *greater);

#endif