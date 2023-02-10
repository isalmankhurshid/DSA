#include<stdio.h>
#include<conio.h>
#include<limits.h>
int MatrixChainOrder(int p[], int i, int j)
{
    if(i==j)
        return 0;
    int k;
    int min=INT_MAX;
    int count;
    for(k=i;k<j;k++)
    {
        count=MatrixChainOrder(p,i,k)
        		+MatrixChainOrder(p,k+1,j)
                +p[i-1]*p[k]*p[j];
 		if (count<min)
            min=count;
	}		
    return min;
}
int main()
{
	int i,n;
    int arr[100];
    printf("Enter the number of matrices: ");
    scanf("%d",&n);
    printf("\nThere will be %d dimensions.\n",n+1);
    printf("\nEnter the dimensions: \n\n");
    for(i=0;i<=n;i++)
    {
    	printf("Enter P%d: ",i);
    	scanf("%d",&arr[i]);
	}
 	printf("\nMinimum number of multiplications is %d ", MatrixChainOrder(arr, 1, n));
 	getchar();
    return 0;
}