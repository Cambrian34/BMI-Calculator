#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    //ask for height
    printf("Enter your height in inches: ");
    int height;
    scanf("%d", &height);
    //ask for weight
    printf("Enter your weight: ");
    int weight;
    scanf("%d", &weight);

    //Formula: weight (lbs) / height (in2) x 703
   double bmi = (double)weight / (height * height) * 703;

    //print BMI
    printf("Your BMI is: %.2f\n", bmi);

    //print BMI category
    if(bmi < 18.5){
        printf("You are underweight\n");
    } else if(bmi >= 18.5 && bmi <= 24.9){
        printf("You are normal weight\n");
    } else if(bmi >= 25 && bmi <= 29.9){
        printf("You are overweight\n");
    } else if(bmi >= 30){
        printf("You are obese\n");
    }

    return 0;


}