#include<stdio.h>
#include<conio.h>
#define MAX 100
void floydWarshall(int a[MAX][MAX], int n)
{
	int i,j,k;
	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]>a[i][k]+a[k][j])
				{
					a[i][j]=a[i][k]+a[k][j];
				}
		    }
	    }
	}
	printf("\nAll Pairs Shortest Path is:\n");
		for(i=0;i<n;i++)
	    {
	    	for(j=0;j<n;j++)
	    	{
	    		printf("%d ",a[i][j]);
			}
	    	printf("\n");
		}
}
int main()
{
	int arr[MAX][MAX],nd,i,j;
	printf("Enter the number of nodes: ");
	scanf("%d",&nd);
	printf("\nEnter the cost between the nodes.");
	printf("\nEnter 999 if no path is present between two nodes!\n\n");
	for(i=0;i<nd;i++)
		{
			for(j=0;j<nd;j++)
			{
				printf("Enter cost of node arr[%d][%d]: ",i+1,j+1);
				scanf("%d",&arr[i][j]);
			} 
		}
	floydWarshall(arr,nd);
	getch();
	return 0;
}