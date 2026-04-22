#include <stdio.h>
#include <stdlib.h>
/* Project: Biomedical Health & Metabolic Rate Calculator
   Author: Sudenaz
   Description: Calculates BMI and BMR based on WHO and Harris-Benedict equations.
*/
int main()
{
    float weight, height, bmi, bmr;
    int age, gender;

    printf("--- Biomedical Health Calculator ---\n\n");

    printf("Please enter your weight (kg): ");
    scanf("%f", &weight);
    printf("Please enter your height (cm): ");
    scanf("%f", &height);
    printf("Please enter your age: ");
    scanf("%d", &age);

    printf("\nPlease select your gender (0 for male and 1 for female): ");
    scanf("%d", &gender);

    float heightInMeters = height / 100;
    bmi = weight / (heightInMeters * heightInMeters);

    printf("\n---RESULTS---\n");
    printf("Your Body Mass Index (BMI): %.2f\n", bmi);

    if (bmi < 18.5)
    {
        printf("Category: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf("Category: Normal Weight (Healthy)\n");
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        printf("Category: Overweight\n");
    }
    else
    {
        printf("Category: Obese\n");
    }

    if (gender == 0)
    {
        bmr = 88.362 + (13.397 * weight) + (4.799 * height) - (5.677 * age);
    } else {
        bmr = 447.593 + (9.247 * weight) + (3.098 * height) - (4.330 * age);
    }

    printf("Basal Metabolic Rate (BMR): %.2f kcal/day\n", bmr);
    printf("-------------------------------\n");

    return 0;
}
