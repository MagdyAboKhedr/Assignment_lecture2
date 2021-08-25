/*
 * main.c
 *
 *  Created on: 25 Aug 2021
 *      Author: magdy
 */


#include "stdio.h"
#include "string.h"

void main()
{
	char str[100], crtr;
	int i=0, len,count=0;
	printf("Enter a string: ");
	fflush(stdout);
	fflush(stdin);

	gets(str);
	printf("Enter a character to find frequency: ");
	fflush(stdout);
	fflush(stdin);

	len = strlen(str);

	scanf("%c", &crtr);
	while(str[i]!='\0')
	{
		if(str[i]==crtr)
		{
			count++;
			i++;
		}
		else
		{
			i++;
		}
	}

	if(i>len)
	{
		printf("Character not found");
	}
	else
	{
		if(count==1)
		{
			printf("Frequency of %c is 1", crtr);
		}
		else
		{
			printf("Frequency of %c = %d", crtr, count);
		}
	}

}
