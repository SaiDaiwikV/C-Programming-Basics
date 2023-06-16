#include<stdio.h>

int main()
{
    // in this program we will learn how to swap two numbers :
    // their are three types to swap two numbers;
    // Method - 1 : 

    int num1,num2;

    printf("Enter Two-Numbers to run the program : ");

    scanf("%d %d",&num1,&num2);

    printf("Before Swapping : \n");

    printf("num1 is : %d\n",num1);

    printf("num2 is : %d\n",num2);

    printf("\n");

    printf("After Swapping : \n");

    int temp;

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("num1 is : %d\n",num1);

    printf("num2 is : %d\n",num2);

    return 0;
}