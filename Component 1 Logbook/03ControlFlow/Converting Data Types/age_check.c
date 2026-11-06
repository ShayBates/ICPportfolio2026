//converting data types to something else
#include <stdio.h>// you need this for stdin
int main()
{
    char input[100];
    int age = 0;
    printf("Please enter your age : ");
    fgets(input, 100, stdin);
    age = atoi(input);
    if(age < 18)
    {
        printf("you're a minor");
    }
    else
    {
        printf("you're an adult");
    }
}