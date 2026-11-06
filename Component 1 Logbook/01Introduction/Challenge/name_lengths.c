/*program that stores 5 user entered variables that are usernames
gets the length of each name and stores in a var
prints each input name followed by a colon and the length
calculates the average length of the names and prints it

i can use for loops for this so let's learn yippie
*/

#include <string.h>
#include <stdio.h>

int main()
{

    //4 items stored in array, each with a max of 100 characters
    char names[4][100];

    //the for loop works like this (set i val; the condition; what to do with i after each loop)
    int i;
    for(i = 0; i < 4; i++)
    {

            printf("Enter name %d: ", i + 1);
            //using fgets instead of fget because we are getting it from multidimentional array
            fgets(names[i], sizeof(names[i]), stdin);

            //remove the \n
            names[i][strcspn(names[i], "\n")] = '\0';

            printf("%s\n", names[i]);

    }
    
    //loop the names being printed out makes it easier on my brain
    for (i = 0; i < 4; i++)
    {
        //format like this so it's on each line | strlen returns the length of string
        printf("%s : %zu\n", names[i], strlen(names[i])); 

    }

    return 0;
}

/* ==IMPORTANT==
sizeof counts bytes of the data, so if that was used it would
return 100 because that's how much memory we gave the array

there is also a type known as size_t that uses %zu format
*/