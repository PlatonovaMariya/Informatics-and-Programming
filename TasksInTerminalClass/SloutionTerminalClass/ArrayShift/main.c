// Copyright 2021 Mariya Platonova
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <malloc.h>
#include <time.h>

int main() {
	setlocale(LC_ALL, "russian");

	int size, A, n, k;
	printf("������� ������ �������: ");
	scanf_s("%d", &size);
	printf("������� �������� �������� �������: ");
	scanf_s("%d", &A);
	printf("������� ����� �������� ������: ");
	scanf_s("%d", &k);

	int* mass;
	mass = (int)malloc(size * sizeof(int));
	printf("�������� ������:");

	for (n = 0; n < size; n++) {

		mass[size] = rand() % (2 * A ) - A;
		printf("%d", mass[size]);
	}


		
	
	
	free(mass);
	return 0;

}