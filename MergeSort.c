#include<stdio.h>
#include<conio.h>
#define MAX 100
void merge(int a[],int p, int q, int r)
{
    int i, j, k;
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],R[n2];
    for (i=0;i<n1; i++)
        L[i]=a[p+i];
    for (j=0;j<n2;j++)
        R[j]=a[q+1+j];
    i=0; 
    j=0;
	k=p; 
    while(i<n1 && j<n2)
    {
        if (L[i]<=R[j]) 
		{
            a[k]=L[i];
            i++;
        }
        else 
		{
            a[k]=R[j];
            j++;
        }
        k++;
    }  
    while(i<n1) 
	{
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2) 
	{
        a[k]=R[j];
        j++;
        k++;
    }
}
void mergeSort(int a[], int p, int r)
{
    if (p<r) 
	{
        int q=(p+r)/2;
        mergeSort(a,p,q);
        mergeSort(a,q+1,r);
		merge(a,p,q,r);
    }
}
void printArray(int a[],int size)
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
	printf("\nAfter merge sort, the array becomes:\n");
	mergeSort(arr,0,size-1);
	printArray(arr,size);
	getchar();
	return 0;
}