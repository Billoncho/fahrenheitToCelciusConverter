/*
Author: Billy Ridgeway
Purpose: This programs converts Fahrenheit to Celcius.
Date: 21 May, 2022
*/

int main (int argc, char *argv[])
{
    int fahrenheit = 0;
    double celcius = 0;

    // Ask user for input and assign to varible minutes.
    printf("Please enter the temperature in Fahrenheit you would like to convert to Celcius: \n");
    scanf("%d",&fahrenheit);
    printf("You entered: %d\n\n", fahrenheit);

    // Convert Fahrenheit to Celcius.
    celcius = (fahrenheit - 32)/1.8;
    printf("The temperature in Celcius is: %f\n\n", celcius);

    // scanf("%d",&minutes);

    return 0;
}
