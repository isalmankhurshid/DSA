#include<stdio.h>
#include<conio.h>
#define MAX 100
void activities(int s[], int f[], int n)
{
 	int i, j;
 	printf ("\nSelected Activities are:\n");
 	i=0;
 	printf("A%d ",i+1); 
 	for (j=1;j<n;j++)
  	{
 		if (s[j]>=f[i])
 		{
 			printf("A%d ",j+1);
 			i=j;
		}
	}
}
void main()
{
	int i,n,s[MAX],f[MAX];
	printf("Enter the number of activities: ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Enter start time of activity %d: ",i+1);
		scanf("%d",&s[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Enter finish time of activity %d: ",i+1);
		scanf("%d",&f[i]);
	}
	activities(s,f,n);
}