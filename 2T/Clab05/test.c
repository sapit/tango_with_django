#include<stdio.h>
#include<time.h>
#include<math.h>

int main(void)
{
    clock_t start,end;
    double time_used;
    start=clock();
    long i;
    for(i=0; i<1000000000;i++)
    {
        continue;
    }
    end=clock();
    time_used = (double)end-start;
    printf(" %f", time_used);
    return 0;
}