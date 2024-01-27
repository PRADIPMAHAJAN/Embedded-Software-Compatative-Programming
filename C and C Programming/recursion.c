#include<stdio.h>

int nsum(int n)
{
    if(n == 0)
    {
        return 0;
    }

    int res = n + nsum(n-1);
    return res;
}

int fact(int n)
{
    int f = 1;
    if(n <= 1)
    {
        return 1;
    }
    else{
        return n * fact(n-1);
    }

    return f;
}

// 0 1 1 2 3 5

void fibonacci(int a, int b)
{
    int c = 0;
    printf("%d ", a);
    printf("%d ", b);

    while(c < 15)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }
}

int main()
{
    printf("%d", nsum(5));
    return 0;
}