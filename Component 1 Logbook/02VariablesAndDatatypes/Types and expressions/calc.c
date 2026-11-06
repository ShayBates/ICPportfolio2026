// shows how int and floats interact with division

int main()
{

    int total = 10;
    float count = 3;
    float average = total/count;
    printf("average = %f\n", average);

    return 0;

}

/*
initially returns 3.000000 because the count is an int not a float
it is probably something to do with that 10/3 is different to 10/3.0000 where the value that is being assigned to average is a float with decimal values
*/