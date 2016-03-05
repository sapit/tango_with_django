#include<stdio.h>
#include<string.h>
int main()
{
    FILE *file_input=fopen("whatever.txt","a");
    fputs("maina \n", file_input);
    fflush(file_input);
    fclose(file_input);
    
    file_input=fopen("whenever.txt","rb");
    char y[100];
    
    fread(&y, sizeof(y), 1, file_input);
    printf("%d \n",(int)strlen(y));
    printf("%s", y);
    fclose(file_input);
    
    return 0;
}