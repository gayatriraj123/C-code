#include<stdio.h>
int main()
{
char *cptr;
int *iptr;
float *fptr;

printf("Pointer to character to takes %d bytes\n",sizeof(cptr));
printf("Pointer to int to takes %d bytes\n",sizeof(iptr));
printf("Pointer to float to takes %d bytes",sizeof(fptr));

}