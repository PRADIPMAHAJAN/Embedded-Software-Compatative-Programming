#include<stdio.h>

struct Person{
    int age;
    char name[20];
    float h;
};


int main()
{
    struct Person obj;
    struct Person *p = &obj;

    obj.age = 34;

    printf("%d", (*p).age);
    return 0;
}





// struct Inverter
// {
//     char ID[10];
//     int packsize;
//     float volt;
// };




// int main()
// {
//     struct Inverter Inv;
//     snprintf(Inv.ID, sizeof(Inv.ID), "%s", "dbjh");
//     Inv.packsize = 34;

//     return 0;
// }

// /*
// #include <stdio.h>

// // Define the Inverter structure
// typedef struct {
//     char ID[50]; // Assuming ID is a character array (string) with a reasonable size
//     int packsize;
// } Inverter;

// int main() {
//     // Declare an instance of the Inverter struct
//     Inverter Inv;

//     // Receive input for ID from the user
//     printf("Enter ID: ");
//     scanf("%s", Inv.ID);

//     // Receive input for packsize from the user
//     printf("Enter packsize: ");
//     scanf("%d", &Inv.packsize);

//     // Display the information
//     printf("Inverter Information:\n");
//     printf("ID: %s\n", Inv.ID);
//     printf("Packsize: %d\n", Inv.packsize);

//     return 0;
// }
// */