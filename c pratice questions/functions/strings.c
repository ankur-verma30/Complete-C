#include <stdio.h>

int main()
{
    char name[4];
    float price[4];
    int pages[4], i;
    printf("enter the values ");
    for (i = 0; i <3; ++i)
        scanf("%c %f %d\n", &name[i], &price[i], &pages[i]);
        printf("Dispaly the values");
    for (i = 0; i <3; ++i)
        printf("%c %f %d\n", name[i], price[i], pages[i]);
    return 0;
}