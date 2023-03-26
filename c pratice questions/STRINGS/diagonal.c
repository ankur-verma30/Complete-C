#include <stdio.h> 


int main()
{
    int str[2][2],sum=0,i,j;
    printf("It is a 2-D matrix\n");
  
    
    for(  i=0;i<=2;i++)
    {
        for( j=0;j<=2;j++)
        { 
            scanf("%d",str[i][j]);
            printf("the matrix is\n",str[i][j]);
        }
    }
    for( int i=0;i<=2;i++)
      {
        for(int j=0;j<=2;j++)
        {
            if(i==j)
        
        sum=sum+str[i][j];
        }
      }  
    printf("the sum of the diagonal matrix is %d",sum);
    return 0;
}