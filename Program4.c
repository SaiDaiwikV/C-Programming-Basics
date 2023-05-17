// In this Progran we will learn all data-types which we will use most in C-Programming, without wasting time we will start our program;

// Import the neccessary header-files which are important to run program : 

#include<stdio.h>

// Start int main() function : 

int main()
{
    int v1 = 10;

    // int --> Integer (4-bytes of space);

    float v2 = 7.43;

   // float --> for decimal value upto only 6-decimal value (4 - bytes of space);

   char v3 = 'S';

    // char --> for character (not for the string and it takes of 1-byte of space);

    double v4 =  5.64;

    // double --> for decimal value which can stores more than 8-decimal value (8 - bytes of space);

    long v5 = 100;

    // long --> for integer value which more value (8 - bytes of space);

    // Now it's time to print the values which are stored in the v1,v2,v3,v4 and v5;

    printf("%d\n",v1);

    // %d --> Integer;

    printf("%f\n",v2);

    // %f --> float;

    printf("%c\n",v3);

    // %c --> character;

    printf("%lf",v4);

    // %lf --> double values;

    printf("%ld",v5);

    // %ld --> long decimal values;

    return 0;
}