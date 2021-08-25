/*
 * main.c
 *
 *  Created on: 26 Aug 2021
 *      Author: magdy
 */


#include "stdio.h"
#include "string.h"

void main()
{
	char arr[100];
	int i=0;

	printf("Enter string: ");
	fflush(stdout);
	fflush(stdin);

	gets(arr);
	while(arr[i]!='\0')
	{
		i++;
	}
	printf("Length of string %d", i);

}
