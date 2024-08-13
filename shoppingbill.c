#include <stdio.h>

int main() {
    int pcode[20], cost[20], qty[20], amt[20];
    int n, i, total = 0, discount, netamount;

    printf("\nHow many products are there: ");
    scanf("%d", &n);

    printf("\nEnter the shopping details:\n");
    for (i = 0; i < n; i++) {
        printf("Enter the product code: ");
        scanf("%d", &pcode[i]);
        printf("Enter the product cost: ");
        scanf("%d", &cost[i]);
        printf("Enter the product quantity: ");
        scanf("%d", &qty[i]);

        amt[i] = cost[i] * qty[i]; 
    }

    printf("\n-------------------------------------");
    printf("\nPcode\t   Cost\tQuantity\tAmount");
    printf("\n-------------------------------------");
    for (i = 0; i < n; i++) {
        printf("\n%5d\t%7d\t%8d\t%5d", pcode[i], cost[i], qty[i], amt[i]);
        total += amt[i]; 
    }
    printf("\n-------------------------------------");
    printf("\nTotal amount is %d", total);

    // Giving 10% discount
    discount = total * 0.10; 
    netamount = total - discount;  

    printf("\nDiscount: %d", discount);
    printf("\nNet amount to be paid: %d\n", netamount);

    return 0;
}
