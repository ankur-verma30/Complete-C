#include <stdio.h> 


int main()
{
    int city=2,week=7;
    int temp[city][week];
    //using nested loop to store value of 2D array
    for(int i=0;i<city;i++)
    {
        for(int j=0;j<week;j++)
        {
            printf("city %d,day %d =",i+1,j+1);
            scanf("%d",&temp[i][j]);
        }

    }
    printf("Displaying  the values");
    for(int i=0;i<city;i++)
    {
        for(int j=0;j<week;j++)
        {
           
           printf(" city %d,day %d =%d\n",i+1,j+1,temp[i][j]);

        }
    }

    return 0;
}