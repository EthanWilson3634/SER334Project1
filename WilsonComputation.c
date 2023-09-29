/**
* (This program calculates the sum of the volumes of a collection of cylinders
 * provided by the user.)
*
* Completion time: (45 mins)
*
* @author (Ethan Wilson), (Ruben Acuna)
* @version (8.22.2023)
*/
////////////////////////////////////////////////////////////////////////////////
//INCLUDES
#include <stdio.h>

const double PI = 3.14159265359;

int main(void)
{
    double sum = 0;
    int numCylinders = 0;
    //Add a prompt for the number of cylinders to sum. Make sure to use the control
    //symbol for integers. [2 points]
    printf("How many cylinders would you like to sum?\nEnter and integer: ");
    scanf("%d", &numCylinders);
    //Create a loop based on the number of cylinders the user enters. [2 points]
    // Within the loop, prompt for height and radius parameters (allow floating
    // point numbers), and calculate the volume for that particular cylinder.
    // [4 points]
    for(int i =0; i < numCylinders; i++) {
        double height;
        double radius;

        printf("\nEnter the height of cylinder number %d\n", i + 1);
        scanf("%lf", &height);
        printf("\nEnter the radius of cylinder number %d\n", i + 1);
        scanf("%lf", &radius);

        sum = sum + PI*radius*radius*height;
    }
    //Display the total volume sum back to the user. Make sure to use the right control
    //symbol. [2 points]
    printf("The sum of the volumes of the cylinders entered is: %lf", sum);

    return 0;
}