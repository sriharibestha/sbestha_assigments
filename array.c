//c program for finding the minimum and maximum numbers in an a given array
#include<stdio.h>
void main()
{
	int a[10],min,max,i,ele;
	ele=sizeof(a)/sizeof(a[0]);
	printf("enter the array elememts\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	min=max=a[0];
	for(i=1;i<ele;i++)
	{
		if(min>a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
	}
	printf("minimum number in array is %d\n",min);
	printf("maximum number in array is %d\n",max);
}
