#include "bubble.h"
void bubble()
{
    char x[]="A nice and long string";
    int fl=1;
    int i;
    char temp;
    while(fl==1)
    {
        fl=0;
        for(i=0;i<strlen(x)-1;i++)
        {
            if(x[i]>x[i+1])
            {
                temp=x[i];
                x[i]=x[i+1];
                x[i+1]=temp;
                fl=1;
            }
        }
    }
    printf("%s \n",x);
}