#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "russian");
	printf("������! ����� ����� ��������� ������� �������� ��� �����!\n");

	int a, b, c;
	printf("����� ��� ����� ��� �������� �� �������� ���������������: a = ");
	scanf_s("%d", &a);
	printf(" \t\t\t\t\t\t\t  b = ");
	scanf_s("%d", &b);
	printf(" \t\t\t\t\t\t\t  c = ");
	scanf_s("%d", &c);

	float Avn;
	Avn = (a + b + c) / 3;

	printf("������� �������������� ��� ����� = %f\n", Avn);
	

	int d, e, f;
	printf("������� ��� ����� ��� �������� �������� ��������������� �� ���������: d = ");
	scanf_s("%d", &d);
	printf(" \t\t\t\t\t\t\t\t      e = ");
	scanf_s("%d", &e);
	printf(" \t\t\t\t\t\t\t\t      f = ");
	scanf_s("%d", &f);

	float Avs;
	Avs = ((pow(d, 2)) + (pow(e, 2)) + (pow(f, 2))) / 3;

	printf("������� �������������� ��������� ��� ����� = %f\n", Avs);


	int g, h, i;
	printf("������� ��� ����� ��� �������� �������� ��������������� ������� ��� �����: g = ");
	scanf_s("%d", &g);
	printf(" \t\t\t\t\t\t\t\t\t    h = ");
	scanf_s("%d", &h);
	printf(" \t\t\t\t\t\t\t\t\t    i = ");
	scanf_s("%d", &i);

	float Avm;
	Avm = (abs(g) + abs(h) + abs(i)) / 3;

	printf("������� �������������� ������� ��� ����� = %f\n", Avm);


	int j, k, l;
	printf("������� ��� ����� ��� �������� �������� ��������������� ������ �� ��� �����: j = ");
	scanf_s("%d", &j);
	printf(" \t\t\t\t\t\t\t\t\t      k = ");
	scanf_s("%d", &k);
	printf(" \t\t\t\t\t\t\t\t\t      l = ");
	scanf_s("%d", &l);

	float Avr;
	Avr = (sqrt(j) + sqrt(k) + sqrt(l)) / 3;

	printf("������ �������������� ������ �� ��� ����� = %f\n", Avr);
	printf("����������! �� ��������� ��� ��������!");

	return 0;
}