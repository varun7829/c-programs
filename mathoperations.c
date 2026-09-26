/*program to add,subract,multiply and divide two nums*/

#include<stdio.h>

int main()
{
    float a,b,result;          //variable declaration


    //asks to give input from user
    printf("Enter First Number :");
    scanf("%f",&a);   //store var in 'a'
    printf("Enter Second Number :");
    scanf("%f",&b);   //store var in 'b'
    
    result = a+b;                  //sum of two nums
    printf("\na+b=%.2f",a+b);

    result = a-b;                  //subract of two nums
    printf("\na-b=%.2f",a-b);

    result = a*b;                   //multiply of two nums
    printf("\na*b=%.2f",a*b);

    result = a/b;                   //division of two nums
    printf("\na/b=%.2f",a/b);
    return 0;

}