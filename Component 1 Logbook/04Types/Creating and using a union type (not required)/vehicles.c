//this isn't exactly necessary said Duncan, but come to this if you really want to

union vehicle_capacity
{
    char seats;
    float max_weight;
    unsigned int max_occupancy;
};

int main()
{
    union vehicle_capacity vehicle1;
    union vehicle_capacity vehicle2;
    union vehicle_capacity vehicle3;

    vehicle1.seats = '4';
    vehicle2.max_weight = 4500.15;
}