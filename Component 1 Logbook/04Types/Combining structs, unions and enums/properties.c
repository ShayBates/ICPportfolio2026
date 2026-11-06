char pound = 156; //£ is 156

union council_tax
{
    char band;
    float amount;
    unsigned int rooms;
};

enum tax_type
{
    BANDED,
    DIRECT,
    CAPACITY
};

struct property_item
{
    enum tax_type type;
    union council_tax tax;
    int unique_id;
    unsigned int year_built;
};

typedef struct property_item property_item; //i love typdefs they are so good

float calculate_tax_amount(property_item item)
{
    float discount;
    float bandreturn; //only made this variable because it was saying not every output of switch had a return so i thought it was the switch of BANDED
    if (item.year_built > 1985)
    {
        discount = 0.5;
    }
    else
    {
        discount = 1;
    }
    switch (item.type)
    {
        case BANDED:
            switch (item.tax.band)
            {
                case 'A':
                    bandreturn = 500.0 * discount;
                    break;

                case 'B':
                    bandreturn = 800.0 * discount;
                    break;

                case 'C':
                    bandreturn = 1100.0 * discount;
                    break;

                case 'D':
                    bandreturn = 1500.0 * discount;
                    break;

                default:
                    bandreturn = 0.0; //unknown

            }
            return bandreturn;
            break;

        case DIRECT:
            return item.tax.amount* discount;
            break;

        case CAPACITY:
            return (item.tax.rooms * 300.0) * discount; //the *300 should be done before the discount i mean it doesn't really matter actually but whatever
            break;

        default:
            return 0; //unknown
    }

}

void print_property_details(property_item item)
{
    printf("Property '%d' built in %d, has a council tax amount of %c%.2f\n", item.unique_id, item.year_built, pound, calculate_tax_amount(item));
}

int main()
{
   struct property_item prop1;
   struct property_item prop2;
   struct property_item prop3;
   struct property_item prop4;
   prop1.unique_id = 100;
   prop1.year_built = 1970;
   prop1.type = BANDED;
   prop1.tax.band = 'B';
   prop2.unique_id = 101;
   prop2.year_built = 1982;
   prop2.type = DIRECT;
   prop2.tax.amount = 1020.45f;
   prop3.unique_id = 103;
   prop3.year_built = 1990;
   prop3.type = CAPACITY;
   prop3.tax.rooms = 5;
   prop4.unique_id = 104;
   prop4.year_built = 1984;
   prop4.type = CAPACITY;
   prop4.tax.rooms = 5;
   print_property_details(prop1);
   print_property_details(prop2);
   print_property_details(prop3);
   print_property_details(prop4);
}