//knowing what if statements are

int main()
{
    char pound = 156; //pound sign in ascii code
    int hourly_pay = 0;
    if ( hourly_pay < 100 ) //add the curly brackets
    {
        printf("The hourly pay is less than %c100\n"
                "Therefore, you get extra benefits\n", pound);
    }
    else
    {
        printf("THe hourly pay is at least %c100\n", pound);
    }
}