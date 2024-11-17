#include <stdio.h>

struct item {
    char item_name[10];
    int qty;
    float price;
    float total_amt;
};

int main() {
    struct item it;
    struct item *pitem = &it;
    printf("\nPractical 27, 04814902024, Apurva Kumar\n");
    printf("Enter Item Name: ");
    scanf("%s", pitem->item_name);
    
    printf("Enter Quantity: ");
    scanf("%d", &pitem->qty);
    
    printf("Enter Price: ");
    scanf("%f", &pitem->price);
    
    pitem->total_amt = pitem->qty * pitem->price;
    
    printf("\nItem Details:\n");
    printf("Item Name: %s\n", pitem->item_name);
    printf("Quantity: %d\n", pitem->qty);
    printf("Price: %.2f\n", pitem->price);
    printf("Total Amount: %.2f\n\n", pitem->total_amt);
    return 0;
}