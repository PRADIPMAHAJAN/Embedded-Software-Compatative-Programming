#include <stdio.h>

void find_duplicates() {
    int arr[10] = {23,4,1,54,23,1,4,4,6,8};
    int i, j, count;

    printf("Duplicate numbers and their counts:\n");

    // Checking for duplicates
    for (i = 0; i < 10; i++) {
        count = 1;  // Initialize count for each element
        // Check the rest of the array for duplicates
        for (j = i + 1; j < 10; j++) {
            if (arr[i] == arr[j]) {
                count++;
                // To avoid counting the same duplicate multiple times
                arr[j] = -1;
            }
        }
        // Print if a duplicate is found
        if (count > 1 && arr[i] != -1) {
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
}


int main()
{
    int arr[10] = {23,4,1,54,23,1,4,0,6,8};

    int smaller = arr[0];

    for(int i=0; i<10; i++)
    {
        if(arr[i] < smaller)
        {
            smaller = arr[i];
        }
    }

    printf("%d", smaller);
    return 0;
}

//------------------------------------------------------
#include <stdio.h>

void Find_char_occurence() {
    int arr[] = {1, 2, 3, 2, 4, 5, 4, 6, 7, 8, 9, 9, 10};
    int count[256] = {0}; // Assuming ASCII characters, so using an array of size 256

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        count[arr[i]]++;
    }

    // Printing the unique characters
    printf("Unique characters in the array: ");
    for (int i = 0; i < sizeof(count) / sizeof(count[0]); i++) {
        if (count[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    Find_char_occurence();
    return 0;
}
