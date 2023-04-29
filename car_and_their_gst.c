#include <stdio.h>
#include <string.h>

int main() {
    char type[10];
    float price, fitting_price, total, discount, gst, net;
    
    printf("Enter the type of the car: ");
    scanf("%s", type);
    
    printf("Enter the price of the car: ");
    scanf("%f", &price);
    
    printf("Enter the extra fitting price of the car: ");
    scanf("%f", &fitting_price);
    
    total = price + fitting_price;
    
    if (strcmp(type, "Hatchback") == 0) {
        discount = total * 0.03;
    } else if (strcmp(type, "Sedan") == 0) {
        discount = total * 0.05;
    } else if (strcmp(type, "SUV") == 0) {
        discount = total * 0.1;
    } else if (strcmp(type, "MUV") == 0) {
        discount = total * 0.15;
    } else {
        printf("Invalid Type\n");
        return 0;
    }
    
    gst = (total - discount) * 0.12;
    net = total - discount + gst;
    
    printf("Net amount to be paid: %.2f\n", net);
    
    return 0;
}