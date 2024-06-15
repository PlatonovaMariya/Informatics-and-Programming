#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "russian");
	printf("Привет! Давай найдём различные сдедние значения трёх чисел!\n");

	int a, b, c;
	printf("Введи три числа для подсчёта их среднего арифметического: a = ");
	scanf_s("%d", &a);
	printf(" \t\t\t\t\t\t\t  b = ");
	scanf_s("%d", &b);
	printf(" \t\t\t\t\t\t\t  c = ");
	scanf_s("%d", &c);

	float Avn;
	Avn = (a + b + c) / 3;

	printf("Среднее арифметическое трёх чисел = %f\n", Avn);
	

	int d, e, f;
	printf("Введите три числа для подсчёта среднего арифметического их крадратов: d = ");
	scanf_s("%d", &d);
	printf(" \t\t\t\t\t\t\t\t      e = ");
	scanf_s("%d", &e);
	printf(" \t\t\t\t\t\t\t\t      f = ");
	scanf_s("%d", &f);

	float Avs;
	Avs = ((pow(d, 2)) + (pow(e, 2)) + (pow(f, 2))) / 3;

	printf("Среднее арифметическое крадратов трёх чисел = %f\n", Avs);


	int g, h, i;
	printf("Веедите три числа для подсчёта среднего арифметического модулей трёх чисел: g = ");
	scanf_s("%d", &g);
	printf(" \t\t\t\t\t\t\t\t\t    h = ");
	scanf_s("%d", &h);
	printf(" \t\t\t\t\t\t\t\t\t    i = ");
	scanf_s("%d", &i);

	float Avm;
	Avm = (abs(g) + abs(h) + abs(i)) / 3;

	printf("Среднее арифметическое модулей трёх чисел = %f\n", Avm);


	int j, k, l;
	printf("Введите три числа для подсчёта среднего арифметического корней из трёх чисел: j = ");
	scanf_s("%d", &j);
	printf(" \t\t\t\t\t\t\t\t\t      k = ");
	scanf_s("%d", &k);
	printf(" \t\t\t\t\t\t\t\t\t      l = ");
	scanf_s("%d", &l);

	float Avr;
	Avr = (sqrt(j) + sqrt(k) + sqrt(l)) / 3;

	printf("Средее арифметическое корней из трёх чисел = %f\n", Avr);
	printf("Поздравляю! Мы посчитали все значения!");

	return 0;
}