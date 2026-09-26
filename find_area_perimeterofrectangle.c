/*To Find Area and perimeter of rectangle*/

#include<stdio.h>
 int main()

 {
    float area,length,breadth,perimeter;

    printf("Enter length of Rectangle :");
    scanf("%f",&length);
    printf("enter breadth of rectangle :");
    scanf("%f",&breadth);

    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("area of the rectangle is %.2f",area);
    printf("\nperimeter of the rectangle is %.2f",perimeter);

    return 0;

 }