//program for finding the matrix transpose
#include<stdio.h>
void main()
{
	int a[10][10],t[10][10],r,c,i,j;
	printf("enter the rows and colomns\n");
	scanf("%d%d",&r,&c);
	printf("enter the matrix elements\n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
        printf("printing the matrix elements\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("printing the transpose matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}

}

