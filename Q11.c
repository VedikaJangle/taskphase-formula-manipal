#include <stdio.h>
#include <string.h>


struct Product {
    int product_id;
    char product_name[100];
    int quantity;
    float price;
};

int main() {
    int n;

    printf("number of products = ");
    scanf("%d", &n);
 
    struct Product products[n];

    float total_value = 0;
    struct Product highest_quantity_product, highest_price_product;

    
    highest_quantity_product.quantity = 0;
    highest_price_product.price = 0.0;

    
    for(int a = 0; a < n; a++) {
        printf("\ndetails for product %d =\n", a + 1);
        printf("product id = ");
        scanf("%d", &products[a].product_id);
        printf("product name = ");
        getchar(); 
        fgets(products[a].product_name, 50, stdin);
        products[a].product_name[strcspn(products[a].product_name, "\n")] = '\0';

        printf("quantity = ");
        scanf("%d", &products[a].quantity);
        printf("price = ");
        scanf("%f", &products[a].price);

        
        total_value += products[a].quantity * products[a].price;

        
        if (products[a].quantity > highest_quantity_product.quantity) {
            highest_quantity_product = products[a];
        }

    
        if (products[a].price > highest_price_product.price) {
            highest_price_product = products[a];
        }
    }

    
    printf("\ntotal value of inventory = %.2f\n", total_value);

    
    printf("\nproduct with highest quantity = \n");
    printf("product id = %d\n", highest_quantity_product.product_id);
    printf("product name = %s\n", highest_quantity_product.product_name);
    printf("quantity = %d\n", highest_quantity_product.quantity);
    printf("price = %.2f\n", highest_quantity_product.price);

    
    printf("\nproduct with highest price = \n");
    printf("product id = %d\n", highest_price_product.product_id);
    printf("product Name =  %s\n", highest_price_product.product_name);
    printf("quantity =  %d\n", highest_price_product.quantity);
    printf("price =  %.2f\n", highest_price_product.price);

    return 0;
}
