/*
 * main.c
 *
 *  Created on: 24 Aug 2021
 *      Author: magdy
 */


#include "stdio.h"

void main()
{
	float arr[100], avg, sum=0;
	int i, num;
	printf("Enter number of elemnts: ");
	fflush(stdin);
	fflush(stdout);

	scanf("%d", &num);
	for(i=0;i<num;i++)
	{
		printf("Enter number: ");
		fflush(stdin);
		fflush(stdout);
		scanf("%f", &arr[i]);
		sum = sum+arr[i];
	}
	avg=sum/num;
	printf("Average=%0.2f", avg);
}
