/*print increment and decrement values using c program*/

#include<stdio.h>
int main()

{
    int a,b,c;
    a = 15;
    b = 20;

    printf("a = %d b = %d\n",a,b);

    c = ++a + b--;
    printf("c = %d\n",c);
    printf("a = %d b = %d",a,b);
    return 0;
}