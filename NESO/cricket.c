#include <stdio.h>

int main(void)
{
  int x, y, t=0, diff = 0;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {

    scanf("%d %d", &x, &y);
    if (y > 50 && x <= 200)
      diff = (x - y);
    printf("%d\n", diff);
  }

  // your code goes here
  return 0;
}