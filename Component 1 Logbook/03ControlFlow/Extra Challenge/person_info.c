//challenge is currently on fail

#include <stdio.h>
#include <string.h>

#define MAX_Names 10 //define is like a variable but they can't be changed
#define MAX_NameLen 50

int main()
{
    int i;
    char names[MAX_Names][MAX_NameLen];
    for (i=0; i<10; i++)
    {
        printf("Enter a name (Blank will stop early): ");
        if (fgets(names[i], sizeof(names[i]), stdin) == NULL)
        {
            break;
        }

        printf("%s", names[i]);
    }
}