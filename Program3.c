// In this Program we will learn how to declare variable and how to intialize it and how many types of intialization;

// Lets us Start our C-Program : 

#include<stdio.h>

// The above header file imports satndard input and output in C - Programming;

// Let us open int main() function to start our logic in the function : 

int main()
{
    // There are many types of data-types which will use in C - programming : 
        // 1. int --> 4 bytes;
        // 2. float --> 4 bytes;
        // 3. char --> 1 byte;
        // 4. double --> 8 bytes;
        // 5.long --> 8 bytes;

    // let us declare a variable which stores an integer value :
    
    int v1;

    // now v1 stores an integer value like 5,10,26,05...etc;

    v1 = 5;

    // Now v1 contains '5' value to show that on the screen we will use printf ;

    printf("%d",v1);

    // we will use '%d' before we use to print v1 beacuse v1 contains an integer value so we use the specifer '%d' to print;

    return 0;

    // Now run the code you will get the output is 5;

}