/*write a c program to find it is vowel or consonent*/
#include<stdio.h>
int main()
{
  char ch;
  printf("Enter an Alphabet : ");
  scanf("%c",&ch);
  if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch<='z') ) //checks the condition first
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
            || ch == 'A' || ch == 'E'|| ch == 'I' || ch == 'O' || ch == 'U')
            {
                printf("it is vowel");
            }
        else
            {
                scanf("%c",&ch); 
                printf("it is a consonent");
            }
    }
  else
     { 
        printf("it is not an alphabet");
     }
  return 0;
}