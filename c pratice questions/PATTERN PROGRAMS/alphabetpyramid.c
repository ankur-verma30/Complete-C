/#include <stdio.h> 
int main()
{
    int i,rows;
    char ch='A';
    printf("enter the number of rows\n");
    scanf("%d",&rows);
    for(i=1;i<=rows;++i)
    {
        for(int j=1;j<=i;++j)
        {
            printf("%c",ch);
        }
        ch=ch+1;
        printf("\n");
    }
    return 0;
}