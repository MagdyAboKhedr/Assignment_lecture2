/*
 * main.c
 *
 *  Created on: 24 Aug 2021
 *      Author: magdy
 */

#include "stdio.h"

void main()
{
	float arr1[2][2], arr2[2][2], res[2][2];
	int r, c;
	printf("Enter first matrix: \n");
	fflush(stdin);
	fflush(stdout);
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter a%d%d: ", r, c);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &arr1[r][c]);
		}
	}
	printf("Enter second matrix: \n");
	fflush(stdin);
	fflush(stdout);
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("Enter b%d%d: ", r, c);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &arr2[r][c]);
		}
	}

	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			res[r][c]=arr1[r][c]+arr2[r][c];
		}
	}

	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%0.1f\t", res[r][c]);
		}
		printf("\n");
	}
}
