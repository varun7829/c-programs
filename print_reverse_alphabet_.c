/*C PROGRAM TO PRINT REVERSE CASE OF AN ALPHABET*/

#include<stdio.h>
 
int main()
{
    char ch,reverse_ch;
    printf("Enter an Alphabet : ");
    scanf("%c",&ch);
    if(ch >= 'A' && ch <= 'Z')
    {
        reverse_ch = ch + 32;
        printf("%c",reverse_ch);

    }
    else if(ch >= 'a' && ch<='z')
    {
        reverse_ch = ch - 32;
        printf("%c",reverse_ch);
    }
    else
    {
        printf("invalid character");
    }
    return 0;
}