#include<stdio.h>

int main()
{
    char str1[100], x='y';
    float a,b;
    float res;
    
    while(x=='y')
    {
        scanf("%f %c %f", &a,&x,&b);
        
        switch(x)
        {
            case '+': res=a+b; break;
            case '-': res=a-b; break;
            case '/': res=a/b; break;
            case '*': res=a*b; break;
            // default: printf("wrong input");
        }
        printf("the result is: %f \n", res);
        
        printf("continue? y/n \n");
        scanf(" %c",&x);
        // if(x=='n')
            // break;
    }
    return 0;
}