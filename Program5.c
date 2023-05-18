// In this program we will lern about how to give input for a variable at the run-time error;

// Let's Start our program : 

// Import Header file : 

#include<stdio.h>

// Start int main() function : 

int main()
{
    // Declare a varible;

    int v1;

    printf("Enter 'a' value at RUN-TIME : ");

    // let us use some ne key-word called "scanf" : 

    // scanf is used to to take value at the run-time of the program;

    scanf("%d",&v1);

    // untill you entred a number cursor waits;

    // lets us print 'v1' variable on the output screen : 

    printf("%d\n",v1);

    return 0;
}