// code written down during a lesson
#include<stdio.h>
#include<stdlib.h>

void functiony()
{   
    printf("%c\n", rand());
}

int main()
{
    int donkey = 1;
    switch(donkey)
    {
        case 1:
            functiony();
            break;
        case 2:
            functiony();
            break;
        case 3:
            functiony();
            break;
    }

    if (donkey = 3)
    {
        functiony();
    }
    else
    {
        ;
    }

    for(donkey; donkey > 0; donkey--)
    {
        functiony();
    }
    
    donkey = 3;

    while(donkey > 0)
    {
        functiony();
        donkey--;
    }

    return 0;

}