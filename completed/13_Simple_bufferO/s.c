#include<stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int single;
    int i;
    char buff[40];
    int pass = 0;

    printf("\n Enter the password : \n");
    gets(buff);

    if(strcmp(buff, "strongPassword"))
    {
        printf ("\n Wrong Password  \n");
    }
    else
    {
        printf ("\n Correct Password \n");
    }

    if(pass)
    {
       /* Now Give root or admin rights to user*/
    char alpha[20] = "aAy#ToP*9uL12l$";
    char flag[10];
    srand(56);
	for(i=0;i<7;i++)
	{
		int randomnumber;
    		randomnumber = rand() % 10;
		flag[i] = alpha[randomnumber];
	}
	printf ("\n flag :  enigma{%s} \n",flag);
    }

}
