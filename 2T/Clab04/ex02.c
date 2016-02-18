#include <stdio.h>
#include <stdlib.h>

void c_to_k(float *t);

void f_to_k(float *t);

int main(int argc, char *argv[]) {
	char x;
	float temp=0;
	if (argc != 3){
		printf("Please supply exactly 3 numbers for the (x,y,z)\n");
		exit(8);
	}

	sscanf(argv[1], "%c", &x);
	sscanf(argv[2], "%f", &temp);
	if(x=='f')
		f_to_k(&temp);
	if(x=='c')
		c_to_k(&temp);
	printf("The square of the distance between the origin and your point is %.3f\n", temp);
	return 0;
}
void c_to_k(float *t)
{
	*t=*t+273.15;
	
}
void f_to_k(float *t)
{
	*t=(*t-32)/1.80 + 273.15;
}