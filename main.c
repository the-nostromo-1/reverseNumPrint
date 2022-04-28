/*
   Make a program that takes a number input by the user and displays it reversed
   04/27/2022
   David J Tinley
   */
#include <stdio.h>

int main()
{
    int num;
    printf("Please enter a number\n");
    scanf("%d", &num);
    const int units = num%10;
    const int tens = (num/10)%10;
    const int hundreds = num/100;
    printf("The reverse of the number is %d%d%d\n", units, tens, hundreds);
    return 0;
}
