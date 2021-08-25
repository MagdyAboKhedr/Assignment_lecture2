/*
 * main.c
 *
 *  Created on: 25 Aug 2021
 *      Author: magdy
 */


#include "stdio.h"

void main()
{
	int x, arr[100], srch, loc=0, i;
	printf("Enter number of elemnts: ");
	fflush(stdout);
	fflush(stdin);

	scanf("%d", &x);
	for(i=1;i<=x;i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter element to be searched: ");
	fflush(stdout);
	fflush(stdin);

	scanf("%d", &srch);

	for(i=1;i<=x;i++)
	{
		if(srch==arr[i])
		{
			loc = i;
			break;
		}
	}


	if(loc==0)
	{
		printf("Number not found");
	}

	else
	{
		printf("Number found at: %d", loc);

	}

}
