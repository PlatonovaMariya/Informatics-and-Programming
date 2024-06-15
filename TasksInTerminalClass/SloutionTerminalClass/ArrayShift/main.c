// Copyright 2021 Mariya Platonova
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <malloc.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "russian");

	int size, A, n, k;
	printf("¬ведите размер массива: ");
	scanf_s("%d", &size);
	printf("¬ведите диапазон значений массива: ");
	scanf_s("%d", &A);
	printf("¬ведите число символов сдвига: ");
	scanf_s("%d", &k);

	int* mass;
	mass = (int)malloc(size * sizeof(int));
	printf("»сходный массив:");

	for (n = 0; n < size; n++) {

		mass[size] = rand() % (2 * A ) - A;
		printf("%d", mass[size]);
	}


		
	
	
	free(mass);
	return 0;

}