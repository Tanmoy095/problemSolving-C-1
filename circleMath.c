// // 2. The length and height of a rectangle and the radius of a circle are input through the keyboard. Write a program
// to find the area and perimeter of the rectangle and the area and circumference of the circle. 
// solution:


#include<stdio.h>
int main()
{
    double l, h, r, ca, cc, ra, rp;

    //For rectangle
    printf("Enter the length of rectangle: ");
    scanf("%lf", &l);
    printf("Enter the height of rectangle: ");
    scanf("%lf", &h);

    //For circle
    printf("Enter the radius of circle: ");
    scanf("%lf", &r);

    //Calculate area & perimeter of the rectangle...
    ra = l * h;    //Area of Rectangle = Length x Height
    rp = 2 * (l + h);    //Perimeter of Rectangle = 2 x (Length + Height) or addition of all sides

    //Calculate are & circumference of the circle...
    ca = 3.14 * r * r;   //Area of Circle = 2 x Pi x r^2 where Pi = 3.14
    cc = 2 * 3.14 * r;  //Circumference of Circle = 2 x Pi x r

    printf("\nThe area of the rectangle: %0.2f", ra);
    printf("\nThe perimeter of the rectangle: %.2f", rp);
    printf("\n\nThe area of the circle: %.2f", ca);
    printf("\nThe circumference of the circle: %.2f", cc);

    return (0);
}
