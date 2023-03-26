#include<stdio.h>
int minPairSum(int* nums, int numsSize)
{
int sum=0;
for(int i=0;i<numsSize-1;i++)
{for(int j=i+1;j<numsSize;j++)
    if(nums[i]+nums[j]>sum)
    sum=nums[i]+nums[j];
    }
    return sum;
}
int main()
{
    int A[4]={3,5,2,3};
    int n=4;
    printf("Hello World!\n");
    printf("%d ",minPairSum(&A,n));
    return 0;
}