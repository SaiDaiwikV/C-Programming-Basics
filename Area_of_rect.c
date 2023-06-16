#include<stdio.h>

int main()
{
    // this is the program to find the area of the rectangle's area : 

    float length,breadth;

    printf("Enter the length and breadth of the rectangle : ");
    scanf("%F %f",&length,&breadth);

    // to caluclate the area we want tp declare another variable called area;

    float area = (length * breadth);

    printf("The Area of the rectangle is : %.2f",area);

    return 0;
}