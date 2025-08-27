#include <stdio.h>

int main() {

    int C, F;
        printf("Enter temp in Celsius: " );
        scanf("%d" , &C);
               
        F = (C*9/5) +32;

    printf("Temp in fahrenheit is:   %d" ,F);
    return 0;
}