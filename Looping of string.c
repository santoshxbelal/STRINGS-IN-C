//LOOPING OF STRING !! 

#include <stdio.h>
int main(int argc, char *argv[])
{
    char myName[] = " Santosh Belal ";
    int length = sizeof(myName) / sizeof(myName[0]);
    int i;
    for (i = 0; i < length; i++){
    
        printf("    %c\n", myName[i]);
    }

