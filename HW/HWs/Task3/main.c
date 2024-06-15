#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <malloc.h>


int main() {

	setlocale(LC_ALL, "russian");

	int n;
	int num = 0, a = 0;
	int mass[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	srand(time(0));

	printf("Привет! Давй сыграем в игру Быки и коровы!\n");
	printf("Введите длину загадываемого числа (от 2 до 5): ");
	scanf_s("%d", &n);

	while (n > 0) {
		a = rand() % 10 + 1;
		while ((mass[a] < 0) && (a < 10))
			a++;
		while ((mass[a] < 0) && (a > -1))
			a--;
		num = num * 10 + mass[a];
		mass[a] = -1;
		n--;
	}
	
	

	return 0;
}