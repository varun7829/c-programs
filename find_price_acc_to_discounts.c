/*finding price acc to discounts using c programs*/

#include<stdio.h>
int main()
{
    float price,discount,discount_price,total_amount;
    printf("Enter price : ");
    scanf("%f",&price);
    if(price >= 10000)
       {
        discount = 30;
       }
    else if(price >= 5000)
        {
            discount = 20;
        }
    else if(price >= 1000)
        {
            discount = 10;
        }
    else
        {
            discount = 0;
        }

    discount_price = price * (discount / 100);
    total_amount = price - discount;
    printf("discount price is %.0f\n",discount_price);
    printf("total amount is %.0f\n",total_amount);
    return 0;
    }