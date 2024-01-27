#include<stdio.h>

int myatoi(char *str)
{
    int res = 0;

    for(int i=0; str[i]!='\0'; i++)
    {
        res = res * 10 + str[i]- '0';
    }
    return res;
}

int main()
{

    char data[]= "1234";
    int val = myatoi(data);
    printf("%d", val);

    return 0;
}