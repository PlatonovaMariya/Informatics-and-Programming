// Copyright 2021 Maria Platonova

/*������ � ���������� ��������� �������� 
���������� ������
��������� ���������� �������
��������� ��������� �������
����������� ���� ������� ������� ��� ���������
����� ����� ���� ������ ���������
����� ����� ��������� � ������� ��������� 
����� ����� ��������� � ������� �����������
�������� �������� ������� �������
���������� ������ ����� ���������*/

#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <malloc.h>

#define SIZE 10 

int main() {

	printf("Topic ARRAYS\n");
/*
	int massive[100] = { 0 };
	int mass_1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int mass_2[5];

	//const int size 10;
	//int mass_3[saiz]
	

	int mass_4[SIZE];

	//������������ �������
	*/

	int size;
	printf("Input size of dinamic array: \n> ");
	scanf_s("%d", &size);

	float* mass;									//���������� ������������� �������
	mass = (float*)malloc(size * sizeof(float));	//��������� ������ ��� ������������ �������

	int i;
	for (i = 0; i < size; i++) {					//���������� �������
		mass[i] = i + 1;
	}
	for (i = 0; i < size; i++) {
		printf("%.1f", mass[i]);
	}
	float sum_even_el = 0.0;
	float sum_even_indx = 0.0;
	float sum_even_values = 0.0;

	for (i = 0; i < size; i++) {
		if ((i + 1) % 2 == 0) {
			sum_even_el = sum_even_el + mass[i];
		}
		else {
			sum_even_indx = sum_even_indx + mass[i];
		}
		if ((int)mass[i] % 2 == 0) {
			sum_even_values = sum_even_values + mass[i];
		}
	}   

	printf("\n Sum of even elements: %.1f", sum_even_el);
	printf("\n Sum elementws with even index: %.1f", sum_even_indx);
	printf("\n Sum of elements with even value: %.1f", sum_even_values);

	int indx;
	printf("\n Input indx for replace: \n> ");
	scanf_s("%d", &indx);

	float new_value;
	printf("\n Input new value; \n>");
	scanf_s("%f", &new_value);

	mass[indx] = new_value;

	printf("Your array now: ");
	for (i = 0; i < size; i++) {
		printf("%f", mass[i]);
	}

	float finding_element;
	printf("\n Input element for search and replace: \n> "); 
	scanf_s("%f", &finding_element);

	for (i = 0; i < size; i++) {
		if (mass[i] == finding_element) 
			mass[i] = mass[i];
		
	}

	printf("Your array now: ");
	for (i = 0; i < size; i++) {
		printf("%.1f ", mass[i]);
	}

	free(mass);										//�������� ������

	return 0;
}
