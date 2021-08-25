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
	int i=0, len;

	printf("Enter the string: ");
	fflush(stdout);
	fflush(stdin);
	gets(arr);

	len = strlen(arr);
	for(i=len-1;i>=0;i--)
	{
		printf("%c",arr[i]);
	}
}
