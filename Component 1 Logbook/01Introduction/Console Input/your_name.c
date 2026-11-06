/*
to show how to get user typed information and store as a variable
fgets requires to know the variable, size of the variable array, stdin (not really sure what this is though)
*/

//needs these libraries
#include <stdio.h>
#include <string.h>

int main()
{
    //initialise an empty variable
    char name[100];
    char age[3];

    printf(" Please Enter Your Name: ");

    //read input
    fgets(name, sizeof(name), stdin);

    printf(" Please Enter Your Age: ");
    //to make it better you'd use a loop
    fgets(age, sizeof(age), stdin);

    //removes the \n at the end so there is no new line found it here https://stackoverflow.com/questions/2693776/removing-trailing-newline-character-from-fgets-input
    name[strcspn(name, "\n")] = '\0';


    //display result
    printf("Hello \'%s\', Age, %s, how are you today?", name, age);

    return 0;

}
