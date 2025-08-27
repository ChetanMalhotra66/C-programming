#include <stdio.h>

int main() {

    int a, b, perimeter, area;
        
        printf("enter length: " );
        scanf("%d" , &a);
        printf("enter breadth:   ");
        scanf("%d", &b);
        
        perimeter = 2*(a+b);
        area = a*b ;
    printf("perimeter of the rectangle is:   %d \n" ,perimeter );
    printf("area of the reactangle is:  %d", area);
    return 0;
}