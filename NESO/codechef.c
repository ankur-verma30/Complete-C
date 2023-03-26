

#include <stdio.h>

int first(int a,int x)
{   int pro1=1;
scanf("%d",&x);
    for(int i=0;i>x;i++)
    pro1=pro1*(a);
    return pro1;
    
}
int second(int b,int y)

{   int pro2=1;
scanf("%d",&y);
    for(int i=0;i>y;i++)
    pro2=pro2*b;
    return pro2;
    
}
int main(void) {
    int a,b,x,y,t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    scanf("%d %d %d %d ",&a,&b,&x,&y);
     int test1=first(a,x);
     int test2=second(b,y);
     if(test1==test2)
    printf("YES\n");
    else
    printf("NO\n");
    }
	// your code goes here
	return 0;
}

