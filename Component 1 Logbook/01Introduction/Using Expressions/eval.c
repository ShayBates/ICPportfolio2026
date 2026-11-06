//using brackets to do maths

int main()
{
    int value1 = (10 + 2) * 100; //12 * 100 = 1200
    int value2 = 10 + 2 + 3 - 4; //already equals 11
    int value3 = 100 / (50 * 2); //100 / 100 = 1
    int value4 = ((60 + 40) / (20 + 30)) * 10;//bit more complex, if 20 then you can do 2 * 10 to make 10 so make the rest equal 2 with divide

    //found out how to do multiline strings you still gotta put \n at the end
    printf("The result of value1 is : %d\n" 
        "The result of value2 is : %d\n"
        "The result of value3 is : %d\n"
        "The result of value4 is : %d\n"
        ,value1, value2, value3, value4);
}

/*
The result of value1 is : 1200
The result of value2 is : 11
The result of value3 is : 1
The result of value4 is : 20
*/