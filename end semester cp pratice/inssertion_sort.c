 //another form of sorting- insertion sorting
 #include <stdio.h> 
 void print_array(int*A,int n)
 {
    
    for (int i = 0; i < n; i++)
    {
        // to print the array given by the user
        printf("%d", A[i]);
        printf("\t");
    }
    
 }
 void insertion_sort(int*A,int n)
 {
    int temp;   //12,54,65,7,23,9  n=6
    for (int i = 1; i <n; i++) //code will run 5 times
    {
        /* code */temp=A[i]; //storing each index value in temp
        int j=i-1;
        //loop 2
        while (j>=0&&A[j]>temp)//comparisson of values withpreviou value
        {
            /* code */A[j+1]=A[j];//if true store in after the a[j]
            j--;
        }
        A[j+1]=temp;//store next value iin temp
        
    }
    
 }

//4 5 6 7 3 2 
int main()
{
    int A[]={12,54,65,7,23,9};
    int n=6;
    print_array(A,n);
    insertion_sort(A,n);
    printf("\n");
    print_array(A,n);
    

    return 0;
}