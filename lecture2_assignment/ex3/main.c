/*
 * main.c
 *
 *  Created on: 24 Aug 2021
 *      Author: magdy
 */

#include "stdio.h"

void main()
{
	float arr[100][100], trns[100][100];
	int r, c, i, n;
	printf("Enter rows and columns of matrix: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%d %d", &r, &c);
	for(i=0;i<r;i++)
	{
		for(n=0;n<c;n++)
		{
			printf("Enter element a%d%d", i+1,n+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f", &arr[i][n]);
		}
	}

	printf("Entered Matrix: \n");

	for(i=0;i<r;i++)
	{
		for(n=0;n<c;n++)
		{
			printf("%f\t", arr[i][n]);
			fflush(stdin);
			fflush(stdout);
		}
		printf("\r\n");

	}

	for(i=0;i<r;i++)
	{
		for(n=0;n<c;n++)
		{
			trns[n][i]=arr[i][n];
		}
	}


	printf("Transpose of Matrix: \n");


	for(i=0;i<c;i++)
	{
		for(n=0;n<r;n++)
		{
			printf("%f\t", trns[i][n]);

		}
		printf("\r\n");

	}

}
