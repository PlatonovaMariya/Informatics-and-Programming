// Copyright 2021 Maria Platonova

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	printf("Привет! Давай подсчитаем массу шкафа!\n");

	double h, w, d, m; 
	double dsp = 550;  //  плотность ДСП (кг/м3)
	double dvp = 820;  //  плотность ДВП (кг/м3)
	double wood = 700; //  плотность дерева (кг/м3)

	printf("Введите высоту h в диапазоне от 1,8 до 2,2 м\nh = ");
	scanf_s("%lf", &h);

	printf("Введите ширину w в диапазоне от 0,8 до 1,2 м\nw = ");
	scanf_s("%lf", &w);

	printf("Введите глубину d в диапазоне от 0,5 до 0,9 м\nd = ");
	scanf_s("%lf", &d);

	m = dvp * h * w * 0.005;
	m += 2 * dsp * h * d * 0.015;
	m += 2 * dsp * w * d * 0.015;
	m += wood * h * w * 0.01;
	m += dsp * (h / 0.4) * w * d * 0.01; //толщину полок взял за 0,01м, так как в условии не указана их толщина

	printf("Масса шкафа = %.2lf кг", m);

	return 0;
}
