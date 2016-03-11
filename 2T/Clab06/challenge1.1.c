#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define FORMATREAD "%12s %100s %100s"

int main(void)
{
    FILE *in_ptr, *out_ptr;
    char fname[MAX], lname[MAX], number[12], buffer[1000];
    in_ptr = fopen("phonelist.txt", "r");
    out_ptr = fopen("history.txt", "wb");
    if((NULL == in_ptr) || (NULL == out_ptr))
    {
        fputs("Problem opening files, exiting! \n", stderr);
        exit(1);
    } 

    if(0 <= fscanf(in_ptr, FORMATREAD, number, fname, lname)) //double == instead of just single = and in_ptr is needed
    {
        fwrite(number, sizeof(number), 1, out_ptr);
        fwrite(fname, sizeof(fname), 1, out_ptr);
        fwrite(lname, sizeof(lname), 1, out_ptr);
        
        printf("%s %s %s\n", number, fname, lname);
        printf("the phonebook has format: phone number - name\n");
    }
    else
    {
        fwrite(&("Unknown type\n"),sizeof("Unknown type\n"),1, out_ptr);    //we need the ptr not its value
        printf("The phone book has unknown format \n");
    }
    fclose(in_ptr);
    fclose(out_ptr);   //needs to be out_ptr instead of *out_ptr 
    return 0;
}