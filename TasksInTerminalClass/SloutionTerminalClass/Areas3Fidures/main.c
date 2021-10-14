
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "russian");
	int a, b;
	printf("Привет! Давай посчитаем площадь прямоугольника!\n");
	printf("Введи параметры прямоугольника (стороны): a = ");
	scanf_s("%d", &a);
	printf("\t\t\t\t\t  b = ");
	scanf_s("%d", &b);

	int Sr;
	Sr = a * b;

	printf("Площадь вашего прямоугольника равна %d\n", Sr);
	

	int c, h;
	printf("\nДавай посчитаем площадь треугольника!\n");
	printf("Введи параметры треугольника (сторона и высота): с = ");
	scanf_s("%d", &c);
	printf("\t\t\t\t\t\t h = ");
	scanf_s("%d", &h);

	double St;
	St = 0.5 * c * h;

	printf("Площадь вашего треугольника равна %2f\n", St);
	

	int R;
	printf("\nДавай посчитаем площадь круга!\n");
	printf("Введи параметры круга (радиус): R = ");
	scanf_s("%d", &R);

	double Sc;
	Sc = M_PI * R;

	printf("Площадь вашего круга равна %4lf\n", Sc);


	return 0;
}
