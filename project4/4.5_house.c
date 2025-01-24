#include <stdio.h>
#include <stdlib.h>

struct House
{
    char address[50];
    char square_feet[50];
    int bedroom_number;
    float bathroom;
    float price;
};

int main(){

    struct House house1 = {"19723 deerlake road", "4000", 5, 3.5,750000};
    struct House house2 = {"1723 blackroom lane", "1200", 2, 1,50000};
    struct House house3 = {"insert other house", "10000", 2, 12,1800000};

    printf("address: %s Squarefeet: %s bedrooms: %d bathrooms: %.1f price: %.2f \n", house1.address, house1.square_feet, house1.bedroom_number, house1.bathroom, house1.price);
    printf("address: %s Squarefeet: %s bedrooms: %d bathrooms: %.1f price: %.2f \n", house2.address, house2.square_feet, house2.bedroom_number, house2.bathroom, house2.price);
    printf("address: %s Squarefeet: %s bedrooms: %d bathrooms: %.1f price: %.2f \n", house3.address, house3.square_feet, house3.bedroom_number, house3.bathroom, house3.price);
    
    return 0;
}