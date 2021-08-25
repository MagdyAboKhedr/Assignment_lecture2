/*
 * main.c
 *
 *  Created on: 25 Aug 2021
 *      Author: magdy
 */


#include "stdio.h"

void main()
{
	int arr[100], num, indx, x, i, j, temp;
	printf("Enter number of elements: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &x);

	for(i=0; i<x; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("Enter the element to be inserted: ");
	fflush(stdout);
	fflush(stdin);

	scanf("%d", &num);

	printf("Enter location: ");
	fflush(stdout);
	fflush(stdin);

	scanf("%d", &indx);
	indx = indx - 1;

	for(i=indx;i<x+1;i++)
	{
		temp=arr[i];
		arr[i]=num;
		num = temp;
	}

	for(i=0;i<x+1;i++)
	{
		printf("%d ", arr[i]);
	}


}
