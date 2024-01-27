#include<stdio.h>

int rev_num(int num)
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

/*

int find_palindrom(int num)
{
    if(num == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
*/

// find the min and max digit in the number
void find_min_max_digit(int num)
{
    int smaller = 9;
    int greater = 0;

    while(num != 0)
    {
        int digit = num % 10;
        if(digit < smaller)
        {
            smaller = digit;
        }

        if(digit > greater)
        {
            greater = digit;
        }

        num /= 10;
    }

    printf("greater : %d \n", greater);
    printf("smaller :%d \n", smaller);
}


int main()
{
    int num = 12343849;
    return 0;
}