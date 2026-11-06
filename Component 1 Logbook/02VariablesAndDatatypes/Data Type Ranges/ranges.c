//what is this

int main()
{

    int counter = 0;
    printf("counter = %d\n", counter);

    printf("counter now = %u\n", counter - 1);


}

/*
pretty sure it's something do to with 00000000 - 1 flips all the values to 1 so it is then 11111111

just googled it it's an usigned integer it can't go below 0 so yes it does flip all zeros to 1

think of it this way in 360 degrees if you had 0 degrees and -1 you now have 359 degrees.

it's 32 bit
*/