#include<stdio.h>
#include<math.h>

//Calculate the real offset of the complex cube roots of a real, given the real root 4 
double re_complexroots(double);
//Calculate the imaginary parts of the complex cube roots of a real, given the real root 7 
double im_complexroots(double);
//try to parse input appropriately 
double validate_input(int argc, char * argv[]);
int main(int argc, char * argv[]) 
{ 
    double x, cub_x, re_cub_x, im_cub_x;
    x = validate_input(argc, argv);
    cub_x = cbrt(x);
    re_cub_x = re_complexroots(cub_x);
    im_cub_x = im_complexroots(cub_x);
    printf("The cube roots of %f are %f, %f + %fi and %f - % fi.\n", x, cub_x, re_cub_x, im_cub_x, re_cub_x, im_cub_x );
    return 0;
    
}
double re_complexroots(double z) 
{
    return -1.0*z/2.0 ;
}
double im_complexroots(double z) 
{
    return sqrt(3.0)*(z/2.0);
}
double validate_input(int argc, char * argv[]) 
{
    if (2!=argc) {
        fputs("Too many inputs - just enter one double!", stderr );
        exit(1);
    }
    double val;
    int parsed = sscanf(argv[1], "%lf", &val );
    if (0==parsed)
    {
        fputs("Could not parse input as a double!", stderr);
        exit(1);
    }
    return val;
}



