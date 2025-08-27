
#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the 3 sides of the triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if ((side1 + side2 > side3) &&
        (side2 + side3 > side1) &&
        (side1 + side3 > side2) &&
        (side1 > 0 && side2 > 0 && side3 > 0)) {
        
        printf("Valid Triangle\n");
        
        if (side1 == side2 && side2 == side3) {
            printf("Triangle is equilateral\n");
        }
        else if ((side1 == side2) || (side1 == side3) || (side2 == side3)) {
            printf("Triangle is isosceles\n");
        }
        else {
            printf("Triangle is scalene\n");
        }
    }
    else {
        printf("Invalid Triangle\n");
    }
    
    return 0;    
}