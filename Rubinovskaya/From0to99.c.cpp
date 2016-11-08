// arr0_99.c.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	const int arrLength = 10;
	const int n = 100;
	int arr99[n];
	int arr[arrLength];
	for (int i = 0; i < arrLength; i++) {
		arr[i] = 0 + rand() % 99;
		printf("%d ", arr[i]);
	}
	printf("\n");	
	for (int i = 0; i<n; i++) {
		arr99[i] = 0;
	}
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		arr99[arr[i]] += 1;
	}
	for (int i = 0; i<n; i++) {
		if (arr99[i] != 0) {
			for (int j = 0; j < arr99[i]; j++) {
				printf("%d ", i);
			}
		}
	}
	return 0;

}

