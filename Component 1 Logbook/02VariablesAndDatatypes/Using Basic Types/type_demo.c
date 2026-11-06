//more wacky data types

int main()
{

    int total = -1;
    double pi = 3.142f;
    char letter = 'M'; //ASCII for M is 77 HAS TO BE SINGLE QUOTES FOR A CHARACTER
    char letter2 = 65; //ASCII for A is 65
    char letter3 = 0x42; //HEX for B is 42
    char name[] = "Shay";

    printf("total %d, pi %.3f, letter %c, letter2 %c, letter3 %c, name %s", total, pi, letter, letter2, letter3, name);

    return 0;

}