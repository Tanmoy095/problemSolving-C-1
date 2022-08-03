// // 5. Two numbers are input through the keyboard into two locations A and B. Write a program to interchange the
// contents of A and B.
// solution:

#include <stdio.h>

int main()
{
  double A, B,temp;
    printf("Enter the value of A: ");
    scanf_s("%lf", &A);

    printf("Enter the value of B: ");
    scanf("%lf", &B);

    temp = A; //A=30, B=20
    A = B; //B=10, A=30
    B = temp; //A=20
  printf("\nAfter swapping, A = %.2lf\n", A);
  printf("After swapping, B= %.2lf", B);


    return 0;
}
