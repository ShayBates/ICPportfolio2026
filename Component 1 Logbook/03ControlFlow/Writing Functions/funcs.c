//we are having a bunch of functions in here
#include <stdio.h>
#define _USE_MATH_DEFINES // this along with math.h gives pi
#include <math.h>

float area(float radius)
{
    return 2 * M_PI * radius;
}

int max(int val1, int val2)
{
    if(val1 > val2)
    {
        return val1;
    }
    else
    {
        return val2;
    }
}

int min(int val1 ,int val2, int val3)
{
    if(val1 < val2 && val1 < val3)
    {
        return val1;
    }
    else if(val2 < val1 && val2 < val3)
    {
        return val2;
    }
    else
    {
        return val3;
    }
}

void multi(char message[], int count)
{
    for(count; count > 0; count--)
    {
        printf("%s\n", message);
    }
}

void main()
{
    multi("Stop Crying Your Heart Out", 2); //print over a count
    printf("%d\n", max(2, 10)); //get the higher
    printf("%d\n", min(6, 3, 10)); //get the lower
    printf("%.2f\n", area(60)); //are of circle
}