#include <stdio.h> 


int main()
{
    int rev_num=0,remainder=0,digit,n;
    printf("Input the number of digit\n");
    scanf("%d",&digit);

    printf("Input the given  number\n");
    scanf("%d",&n);
    for(int i=0;i<digit;i++)
    {
        remainder=n%10;
      
        rev_num=rev_num*10+remainder;
          n=n/10;
    }
    printf("Reversed number %d",rev_num);
    return 0;
}