#include <stdio.h>

int main() {
    int units;
    int totalCost = 0;

    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    if (units <= 100 ) {        
        totalCost = units * 20;
    } 

    else if (units >= 101 && units<=200) {
        totalCost = (100 * 20) + ((units - 100) * 25);
    } 
    
    else if (units >=201 && units <=300) {
        totalCost = (100 * 20) + (100 * 25) + ((units - 200) * 30);
    } 
    
    else if (units > 300) {
        totalCost = (100 * 20) + (100 * 25) + (100 * 30) + ((units - 300) + 2000);
    }

    printf("You Bill Is :  %d\n", totalCost);

    return 0;
}
