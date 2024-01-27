#include <stdio.h>

void print_string()
{
    char str[] = "Dheeraj";
    char *end = str;

    while(*end != '\0')
    {
        printf("%c", *end);
        end++;
    }
}

void Rev_str() {
    
    char str[] = "hello";
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    char *start = str;

    while(start < end)
    {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed: %s\n", str);
}

void print_arr()
{
    int data[5] = {23, 24, 55, 76, 12}; 
    int *p = data;

   for(int i=0; i<sizeof(data)/sizeof(data[0]); i++)
   {
    printf("%d ", *(p+i));
   }
}

int main() {
    
    return 0;
}