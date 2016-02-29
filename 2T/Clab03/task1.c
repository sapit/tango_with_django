#include <stdio.h>

int main()
{
	double arr[5];
	int i;
	for(i=1;i<=5;i++)
	{
		arr[i-1]=0.5*i;
	}
	printf("The third element is %f\n", arr[2]);
}