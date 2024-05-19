// problem 1
// printing word numbers,letters,digits,other characters +seperate letters,digits+others
// lab 5/5/23
#include <stdio.h>
#include <string.h>

int main()
{
    printf("Hello, please input some characters:\n");
    char str[50];
    int words = 0, letters = 0, digits = 0, characters = 0;
    fgets(str, 50,
          stdin); // Using fgets instead of gets to avoid buffer overflow
    // for 2nd [part]
    // declare the variable , store them ;
    char sletters[300], sdigits[300], scharacters[300];

    int i = 0;
    while (str[i] != '\0')
    { // Checking for null terminator '\0'
        if (str[i] == ' ' || str[i] == '\n')
        {
            words++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') ||
                 (str[i] >= 'A' && str[i] <= 'Z'))
        {
            sletters[letters++] = str[i];
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            sdigits[digits++] = str[i];
        }
        else
        {
            scharacters[characters++] = str[i];
        }
        i++;
    }
    // Counting the last word if there is no  space or newline
    words++;
    // printing the fisrt section
    printf("words:%d\nletters:%d\ndigits:%d\ncharacters:%d\n", words, letters,
           digits, characters);
    // closing the string using null sign
    sletters[letters] = '\0';
    sdigits[digits] = '\0';
    scharacters[characters] = '\0';
    // printing the second section
    printf("\nletters:%s\ndigits:%s\ncharacters:%s\n", sletters, sdigits,
           scharacters);
    return 0;
}
