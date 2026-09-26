/*assignment operator in c*/

#include<stdio.h>
int main()
{   
    int a, b;
     
    a = 52;
    b = a;

    printf("%d",b);
    
    b = a+7;
    
    printf("\n%d",b);

    b = a+b;
    
    printf("\n%d",b);

    b = a*b;

    printf("\n%d",b);

    return 0;

}