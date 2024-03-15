#include "digit.h"

uint8_t CountDigit(uint32_t num)
{
    uint8_t noOfDigit = 0;
    int rem;

    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        noOfDigit++;
    }
    return noOfDigit;
}

uint16_t RevDigit(uint16_t num)
{
    int rev = 0;
    int rem;
    while(num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}

bool CheckPalindrom(uint16_t num)
{
    if(num == RevDigit(num))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// find the min and max digit in the number
void FindMaxMinDigit(uint16_t num, uint8_t *smaller, uint8_t *greater)
{
    *smaller = 9;
    *greater = 0;
    while(num != 0)
    {
        int digit = num % 10;
        if(digit < *smaller)
        {
            *smaller = digit;
        }

        if(digit > *greater)
        {
            *greater = digit;
        }

        num /= 10;
    }
}
