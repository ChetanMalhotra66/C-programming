#include <stdio.h>

int main() {

    int year, extra_days, Leap_years;
    int days_left;

    printf("Enter year \n");
    scanf("%4d", &year);

    Leap_years = (year/4 - year/100 + year/400);

    printf("Leap years till %d = %d\n", year, Leap_years);
    
    extra_days = year - 1 + Leap_years;

    printf("Total extra days = %d\n", extra_days);

    days_left = extra_days%7;
    
    
    if (days_left == 0) {
        printf("Monday");
    }
    else if (days_left == 1) {
        printf("Tuesday");
    }
    else if (days_left == 2) {
        printf("Wednesday");
    }
    else if (days_left == 3) {
        printf("Thursday");
    }
    else if (days_left == 4) {
        printf("Friday");
    }
    else if (days_left == 5) {
        printf("Saturday");
    }
    else if (days_left == 6) {
        printf("Sunday");
    }

    return 0;
}