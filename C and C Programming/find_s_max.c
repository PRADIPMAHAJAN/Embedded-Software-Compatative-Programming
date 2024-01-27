#include<stdio.h>

int find_max_digit()
{
    int num = 23434;

    int greater = 0;

    while(num != 0)
    {
        int d = num % 10;

        if(d > greater)
        {
            greater = d;
        }
        num /= 10;
    }

    return greater;

}

int find_small_digit()
{
    int num = 43135;
    
    int smallest = 9;

    while (num != 0)
    {
        int d = num % 10;

        if(d < smallest)
        {
            smallest = d;
        }
        num /= 10;
    }
    return smallest;

}


int main()
{
    printf("%d", find_max_digit());
    return 0;
}

