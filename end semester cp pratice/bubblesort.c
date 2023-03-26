#include <stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        // to print the array given by the user
        printf("%d", A[i]);
        printf("\t");
    }
}
    void bubble_sort(int *A, int n)
   
    {
         int temp;
        for (int i = 0; i < n - 1; i++) // for number of passes should be 1 less than the length of the array
        {
            /* code */
            for (int j = 0; j < n - 1 - i; j++)  // for number of camparison in each pass
            {
             
                if(A[j]>A[j+1])
                {
                 temp= A[j];
                 A[j]=A[j+1];
                 A[j+1]=temp;
                }
            }
        }
    }
    int main()
    {
        int A[] = {12, 54, 65, 7, 23, 9};
        int n = 6;
        printArray(A, n); // to print array before sorting
        bubble_sort(A, n); // to sort the array
        printf("\n");
        printArray(A, n); // to print after the array
        return 0;
    }