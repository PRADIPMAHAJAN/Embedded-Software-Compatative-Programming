#include<stdio.h>

#define SET_BIT(value, bit) value |= (1<<bit)
#define CLR_BIT(value, bit) value &=~(1<<bit)
#define READ_BIT(value, bit) (value >> bit) & 1

void Bit_Operation()
{

    unsigned char value = 0b00000001;
    SET_BIT(value, 2);
    printf("%d\n", value);
    SET_BIT(value, 1);
    printf("%d\n", value);
    CLR_BIT(value, 1);
    printf("%d\n", value);

    printf("%d\n", READ_BIT(value, 1));
}

// Check Even and Odd Number using Bit.
int check_Odd_Even_by_Bit() {
   unsigned char v = 100;

   if(READ_BIT(v, 0))
   {
    printf("Odd\n");
    return 1;
   }
   else
   {
    printf("Even\n");
    return 0;
   }
    return 0;
}

int main()
{
    return 0;
}

