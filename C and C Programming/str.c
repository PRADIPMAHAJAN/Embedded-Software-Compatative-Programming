#include <stdio.h>

// find string seperated , comma
void extractSubstrings(char *inputString, char ch) {
    char *ptr = inputString;

    while(*ptr != '\0') {
        char token[50] = {0};
        char *start = ptr;

        while(*ptr != ch && *ptr != '\0') {                    
            ptr++;
        }

        int length = ptr - start;
        if (length > 0) {
            strncpy(token, start, length);
            printf("%s\n", token);
        }

        if (*ptr == ',')
            ptr++;
    }
}

// Extract data once we receive a : then total number of char.
void extractSubs_from_char(char *inputString, char check_char, int num) {
    char *ptr = inputString;
    int colonFound = 0;

    while (*ptr != '\0') {
        if (*ptr == check_char) {
            colonFound = 1;
            ptr++; // Move past the colon
        }

        if (colonFound) {
            char token[11] = {0}; 
            ptr++; //space skip.

            for (int i = 0; i < num && *ptr != ',' && *ptr != '\0'; i++) {
                token[i] = *ptr;
                ptr++;
            }

            printf("%s\n", token);
            colonFound = 0; // Reset flag after processing
        } else {
            ptr++;
        }
    }
}


// Reverse String.
char *Rev_str(char *input_str)
{
    char *end = input_str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    char *start = input_str;
     while(start < end)
     {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
     }

    return input_str;
}

int main()
{
  // char str[] = "shubh";
  // char *resp = Rev_str(str);

  char Resp[] = "AT+GSN,843537282,ABC,933ga, \r\n";
  char char_until_read = ',';
  extractSubstrings(Resp, char_until_read);
  // printf("%s", resp);
  return 0;
}

// palindrom
int check_palindrom()
{
  char str[] = "AABAA";
  int len = strlen(str);

  for (int i = 0; i < len / 2; i++)
  {
    if (str[i] != str[len - i - 1])
    {
      return 1;
    }
  }

  return 0;
}

// Palindrome using pointer
int func()
{
    char str[] = "AABBAA";
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    char *start = str;
     while(start < end)
     {
        if(*start != *end)
        {
            return 1;
        }

        start++;
        end--;
     }


    return 0;
}


// Find a character occurance unique, 2 time or n times.
void Find_char_occurence() {
    char str[] = "abchdabc";

    int count[256] = {0}; // Assuming ASCII characters, so using an array of size 256

    for (int i = 0; str[i] != '\0'; i++) {
        count[(int)str[i]]++;
    }

    // Printing the counts for each character
    for (int i = 0; i < 256; i++) {

        // print all character 
        // if(count[i] > 0)
        // {
        //     printf("Character '%c' occurs %d times\n", (char)i, count[i]);
        // }

        // print unique character only.
        if (count[i] == 1) {
            printf("Character '%c' occurs %d times\n", (char)i, count[i]);
        }

        // // print 2 times character
        // if(count[i] == 2)
        // {
        //     printf("Character '%c' occurs %d times\n", (char)i, count[i]);
        // }
    }

}