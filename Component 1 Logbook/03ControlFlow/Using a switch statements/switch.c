
#include <stdio.h>
int main()
{
    char input[100];
    printf("Please enter one of the following characters A,B,C,D,E,F : ");
    fgets(input, 100, stdin);
    char letter = input[0];
    switch(letter)
    {
        case 'A':
            printf("The value of that hexadecimal character is 10\n");
            break;

        case 'B':
            printf("The value of that hexadecimal character is 11\n");
            break;

        case 'C':
            printf("The value of that hexadecimal character is 12\n");
            break;

        case 'D':
            printf("The value of that hexadecimal character is 13\n");
            break;

        case 'E':
            printf("The value of that hexadecimal character is 14\n");
            break;

        case 'F':
            printf("The value of that hexadecimal character is 15\n");
            break;

    }

    return 0;
}