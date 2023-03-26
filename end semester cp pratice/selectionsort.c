#include <stdio.h>  
void selection(int arr[], int n)  {  
    int i, j, min;     
    for (i = 0; i < n-1; i++)   
    {  
        min = i;
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min])  
            min= j;  
    int temp = arr[min];  
    arr[min] = arr[i];  
    arr[i] = temp;  
    }  
    }   
void printArr(int a[], int n) 
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
} 
int main()  
{  
    int a[] = { 12, 11,32,45,67,2,5,10 };  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting  \n");  
    printArr(a, n);  
    selection(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    printArr(a, n);  
    return 0;  }    