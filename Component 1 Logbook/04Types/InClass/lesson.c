// what we practiced in class following along

struct point //almost like a class variable, here is used for a vector
{
    int x;
    int y;
    int z;
};

union pay //you can only use 1 of these variables, they get replaced if a different one is initialized
{
    float hourly;
    int yearly;
    float monthly;
};

typedef struct point vector; //essentially making your own variable data type. this means you don't need to use struct point p1; -> vector p1;

enum days_of_the_week //essentially string array easier to use in switches
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THRUSDAY,
    FRIDAY,
    SATURDAY,
};

int main()
{
    struct point p1;

    p1.x = 10;
    p1.y = 20;
    p1.z = -4;

    return 0;
}