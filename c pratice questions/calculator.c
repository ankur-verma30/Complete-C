#include<stdio.h>
#include<math.h>
int main()
{
  int i, a,d,e;
  float c,b,x,y,result;
printf("\nSelect your operation (0 to exit):\n");
  printf("here is your \n");
  printf("the  is capable of basic ulations\n");
  printf(" 1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n");
  printf("5. Square root\n 6. power of any number raised to any power\n 7.recipro of any number");
printf("8. nth root of any number \n 9.factorial\n 10. logirithmic value with base 10\n");
printf("11. Modulus\n 12.sine function\n");
printf(" 13. Cos(X)\n14. Tan(X)\n 15. Cosec(X)\n");
printf("16. Cot(X)\n 17. Sec(X)\n");
  scanf("%d",&a);
  if(a==0)
  {
    printf("no output");
  }
switch (a)
  {
   
    case 1:
    {
    float sum;
     printf("the sum of the two numbers is:\n");
  scanf("%f %f",&c,&b);
    sum=c+b;
     printf("the addition of the two numbers %fand%fis%f",c,b,sum);
     break;
    }
     case 2:
     {
     float diff;
     diff=c-b;
     printf("the difference%fand%fis%f",c,b,diff);
     break;
     } 
     break;
     case 3:
    {  
      float product;
     printf("the multiplication of the two number is:\n");
     scanf("%f %f",&c,&b);
     product=c*b;
     printf(" the product of the two numbers%f",product);
     break;
  }
     case 4:
  {
     float quotient;
     printf("the division of the two number is:\n");
     scanf("%f %f",&c,&b);
     quotient=c/b;
     printf("the quotient of the division is%f",quotient);
     break;
  }
  case 5:
 {
printf("Enter X: ");
scanf("%f", &x);
result = sqrt(x);
printf("\nResult: %f", result);
break;
 }
case 6:
{
printf("Enter X: ");
scanf("%f", &x);
printf("\nEnter Y: ");
scanf("%f", &y);
result = pow(x, y);
printf("\nResult: %f", result);
break;

}
case 7:
{
  printf("Enter X to get the recipro of that number ");
scanf("%f", &x);
result = pow(x, -1);
printf("\nResult: %.4f", result);
break;
}
case 8:
{
printf("Enter Xand Y to get the nth root of that number ");
scanf("%f %f",&x,&y);
result = pow(x, (1/y));
printf("\nResult: %f", result);
break;
}
case 9:
{
  printf("Enter X: ");
scanf("%f", &x);
result = 1;
for(i = 1; i <= x; i++) {
result = result * i;
}
printf("\nResult: %.f", result);
break;
}
case 10:
{
  printf("Enter X: ");
scanf("%f", &x);
result = log10(x);
printf("\nResult: %.2f", result);
break;
}
case 11:
{
  printf("Enter D: andE then ");
scanf("%d %d",&d,&e);
result=d%e;
printf("\nResult: %d",result);
break;
}
case 12:
{
  printf("Enter X: ");
scanf("%f", &x);
result = sin(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
}
case 13:
{
  printf("Enter X: ");
scanf("%f", &x);
result = cos(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
}
case 14:
{
  printf("Enter X: ");
scanf("%f", &x);
result = tan(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
}
case 15:
{
  printf("Enter X: ");
scanf("%f", &x);
result = 1 / (sin(x * 3.14159 / 180));
printf("\nResult: %.2f", result);
break;
}
case 16:
{
  printf("Enter X: ");
scanf("%f", &x);
result = 1 / tan(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
}
case 17:
{
  printf("Enter the reqired value: ");
scanf("%f", &x);
result = 1 / cos(x * 3.14159 / 180);
printf("\nResult: %.2f", result);
break;
}
default:
{
  printf("\nInvalid Choice!\n OR the  is not working.");
}
  }
return 0;
  }










