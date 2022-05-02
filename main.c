/*
   Make a program that takes a number input by the user and displays it reversed
   04/27/2022
   David J Tinley
   V2 added 04/29/2022
   */
#include <stdio.h>

int main()
{
    int num;
    printf("Please enter a number\n");
    scanf("%d", &num);
    const int units = num%10; // declairing a constant int variable
    const int tens = (num/10)%10; // declairing a constant int variable
    const int hundreds = num/100; // declairing a constant int variable
    printf("The reverse of the number is %d%d%d\n", units, tens, hundreds); // dispalaying the results
    return 0;
}
