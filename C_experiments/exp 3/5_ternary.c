#include <stdio.h>

int main() {

    int l1 ,b1 ,l2, b2, l3, b3;
    int p1, p2, p3;
    int max;

        printf("Enter length and breadth of rectangle 1 (l1 b1): ");
        scanf("%d %d", &l1, &b1);

        printf("Enter length and breadth of rectangle 2 (l2 b2): ");
        scanf("%d %d", &l2, &b2);

        printf("Enter length and breadth of rectangle 3 (l3 b3): ");
        scanf("%d %d", &l3, &b3);

    p1 = 2*(l1 + b1);
    p2 = 2*(l2 + b2);
    p3 = 2*(l3 + b3);

    max = p1 > p2 ? (p1 > p3 ? p1 :p3) : (p2 > p3 ? p2 : p3);

    if (max == p1) {
        printf (" p1 is the largest perimeter \n");
    }else if (max == p2) {
        printf (" p2 is the largest perimeter \n");
    }else if (max == p3) {
        printf (" p3 is the largest perimeter \n");
    }
    
    
    printf("%d", max);

return 0;
}