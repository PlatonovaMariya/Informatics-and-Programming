
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "russian");
	int a, b;
	printf("������! ����� ��������� ������� ��������������!\n");
	printf("����� ��������� �������������� (�������): a = ");
	scanf_s("%d", &a);
	printf("\t\t\t\t\t  b = ");
	scanf_s("%d", &b);

	int Sr;
	Sr = a * b;

	printf("������� ������ �������������� ����� %d\n", Sr);
	

	int c, h;
	printf("\n����� ��������� ������� ������������!\n");
	printf("����� ��������� ������������ (������� � ������): � = ");
	scanf_s("%d", &c);
	printf("\t\t\t\t\t\t h = ");
	scanf_s("%d", &h);

	double St;
	St = 0.5 * c * h;

	printf("������� ������ ������������ ����� %2f\n", St);
	

	int R;
	printf("\n����� ��������� ������� �����!\n");
	printf("����� ��������� ����� (������): R = ");
	scanf_s("%d", &R);

	double Sc;
	Sc = M_PI * R;

	printf("������� ������ ����� ����� %4lf\n", Sc);


	return 0;
}
