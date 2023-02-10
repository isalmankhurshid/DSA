#include<stdio.h>
#include<conio.h>
#define MAX 100
void selectionSort(int a[], int n)
{
	int i,j,min,temp;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
void printArray(int a[], int n) 
{
	int i;
	for(i=0;i<n;i++) 
		printf("%d\t",a[i]);
}
int main()
{
	int i,arr[MAX],size;
	printf("Enter the size of the array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter element %d: ", i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nElements in the array are:\n");
    printArray(arr,size); 
	printf("\nAfter selection sort, the array becomes:\n");
	selectionSort(arr,size);
	printArray(arr,size);
	getchar();
	return 0;
}