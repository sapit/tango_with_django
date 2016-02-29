#include <stdio.h>

int main()
{
	struct creative_struct_name{ //no, incorrect declaration - it needs a name
		int x;
		float y;
		char z;
	} creative_variable_name1;

	struct creative_struct_name creative_variable_name2 = {5,1.2,'x'};

	creative_variable_name1.x=12;
	creative_variable_name1.y=3.14;
	creative_variable_name1.z='z';
	printf("%d,%f,%c \n", creative_variable_name1.x,creative_variable_name1.y,creative_variable_name1.z);
}