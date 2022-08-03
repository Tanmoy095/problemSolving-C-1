// // 3. Rahim’s basic salary is input through the key board. His house rent allowance is 30% of basic salary and medical
// allowance is 5% of basic salary. He gets extra 1000 tk as technical allowance. Write a program to calculate his
// salary and print the result. 
// solution:

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double basic_salary,madical_allowance,house_rent,add_Extra,gross_salary;
    printf("Enter basic salary: ");
    scanf("%lf",&basic_salary);

    madical_allowance=basic_salary-basic_salary*0.05;
    house_rent=basic_salary-basic_salary*0.3;
    add_Extra = 1000;
    gross_salary = basic_salary+madical_allowance+house_rent+add_Extra;

    printf("\n Basic Salary: %lf", basic_salary);
    printf("\n Medical Allowance: %lf", madical_allowance);
    printf("\n House Rent: %lf", house_rent);
    printf("\n technical allowance: %lf", add_Extra);
    printf("\n\n Gross Salary: %lf", gross_salary);



    return (0);
}
