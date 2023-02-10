#include<stdio.h>
#include<conio.h>
int kadaneAlgo(int arr[] ,int n)
{
	int i;
	int curSum=0;
	int maxSum=0;
	for(i=0;i<n;i++)
	{
		curSum+=arr[i];
		if(curSum>maxSum)
		{
			maxSum=curSum;
		}
		if(curSum<0)
		{
			curSum=0;
		}
    }
	return maxSum;
}
void main()
{
	int arr[100], size, i;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nThe maximum sum of the subarray is: %d",kadaneAlgo(arr,size));
	getch();
}