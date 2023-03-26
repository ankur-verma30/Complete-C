#include <stdio.h> 
int binary_search(int arr[],int size,int element)
{
   int  low,mid,high;
    low = 0;
    high = size-1;
    while(low<=high)
    {
        mid =(low+high)/2;
        if(arr[mid]==element)
        {
            return mid;

        }
         else if(arr[mid]<element)
        low = mid+1;
        else 
        high = mid-1;
        
    
    }
    return 0;
}


int main()
{
 int arr[] = {1,3,4,7,10,20,30};
 int size = sizeof(arr)/sizeof(int);
  int element = 10;
  int searchindex = binary_search(arr,size,element);
  printf("the element of %d indedx is %d",element,searchindex);
 

    return 0;
}