#include <stdio.h>

int main() {
    float weight, height, BMI;

    printf("Enter weight in Kgs: \n");
    scanf("%f", &weight);
    printf("Enter height in meters: \n");
    scanf("%f", &height);

    BMI = weight / (height * height);

    printf("Your BMI is %2f\n", BMI);

    if (BMI < 15) {
        printf("Starvation");
    }
    else if (BMI >= 15 && BMI < 17.5) {
        printf("Anorexic");
    }
    else if (BMI >= 17.5 && BMI < 18.5) {
        printf("Underweight");
    }
    else if (BMI >= 18.5 && BMI < 25) {
        printf("Ideal");
    }
    else if (BMI >= 25 && BMI < 30) {
        printf("Overweight");
    }
    else if (BMI >= 30 && BMI < 40) {
        printf("Obese");
    }
    else {
        printf("Morbidly Obese");
    }

    return 0;
}