/*
	Distance Calculating Code
	Take 3 floats as input on the command line( complains of there aren't 3 values given).
	Returns the square of the distance between the origin and the point in 3d space defined by those values.(Function sqr_dist is used to calculate that value)/
*/
#include <stdio.h>  //missing header file
#include <stdlib.h>
float sqr_dist(float a, float b, float c);   //a function prototype was needed
int main(int argc, char *argv[]) {   //missing []
	float x,y,z;
	if (argc != 4){
		printf("Please supply exactly 3 numbers for the (x,y,z)\n");
		exit(8);   //style error
	}

	sscanf(argv[1], "%f", &x);
	sscanf(argv[2], "%f", &y);
	sscanf(argv[3], "%f", &z);
	printf("The square of the distance between the origin and your point is %.3f\n", sqr_dist(x,y,z)); //missing ;
	return 0;
}

float sqr_dist(float a, float b, float c) 	//type in instead of float
{											//missing curly braces
	float d;
	d = a*a + b*b + c*c;					//missing ;
	return d;								//needs to return d
}