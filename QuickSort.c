#include<stdio.h>
#include<conio.h>
#define MAX 100
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition(int a[], int p, int r) 
{ 
	int i,j,x;
    x=a[r]; 
    i=(p-1); 
  	for (j=p;j<=r-1;j++) 
    { 
        if (a[j]<x) 
        { 
            i++;
            swap(&a[i], &a[j]); 
        } 
    } 
    swap(&a[i+1],&a[r]); 
    return(i+1); 
} 
void quickSort(int a[], int p, int r) 
{ 
    if (p<r) 
    { 
        int q=partition(a,p,r); 
        quickSort(a,p,q-1); 
        quickSort(a,q+1,r); 
    } 
} 
void printArray(int a[], int size) 
{ 
    int i; 
    for (i=0;i<size;i++)
    		printf("%d \t",a[i]);
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
	printf("\nAfter quick sort, the array becomes:\n");
	quickSort(arr,0,size-1);
	printArray(arr,size);
	getchar();
	return 0;
}