#include<stdio.h>
#include<conio.h>
# define MAX 100
void insertionSort(int a[], int n)
{
	int i, j, key;
	for (i=1;i<=n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
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
	printf("\nAfter insertion sort, the array becomes:\n");
	insertionSort(arr,size);
	printArray(arr,size);
	getchar();
	return 0;
}