//add include statements
#include<repetition.h>
#include<iostream>


//factorial function
int factorial(int num) 
{
    if (num < 0) 
    {
        //invalid input 
        return -1; //returning an error value
    }
    int result = 1;
    for (int i = 2; i <= num; ++i)
    {
        result *= i;
    }
    return result;
}

//gcd function

int gcd(int num1, int num2)
{
    if (num1 == 0 || num2 == 0)
    {
        return 0; 
    } 
    while (num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}