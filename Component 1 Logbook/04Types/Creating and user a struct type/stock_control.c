char pound = 156; //\156 is pound sign in ascii

struct stock_item
{
    int id;
    float price;
    unsigned int stock_level;
};

typedef struct stock_item item;

void print_stock_item(item item_id)
{
    printf("Stock item : %d, price : %c%.2f, Stock level : %d\n", item_id.id, pound, item_id.price, item_id.stock_level); //print information
}

struct stock_item update_stock(struct stock_item item, int amount)
{
    return item = (struct stock_item) {item.id, item.price, amount}; //minimised it to 1 line
}

int main()
{
    item item1;
    item item2;
    item item3;
    item1.id = 10;
    item1.price = 1.56;
    item1.stock_level = 100;
    item2.id = 11;
    item2.price = 10.99;
    item2.stock_level = 150;
    item3.id = 12;
    item3.price = 2.55;
    item3.stock_level = 45;

    print_stock_item(item1);
    print_stock_item(item2);
    print_stock_item(item3);

    item1 = update_stock(item1, 10);
    item2 = update_stock(item2, -20);
    item3 = update_stock(item3, 18);

    print_stock_item(item1);
    print_stock_item(item2);
    print_stock_item(item3);

}