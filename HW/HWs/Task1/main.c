// Copyright 2021 Maria Platonova

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	printf("������! ����� ���������� ����� �����!\n");

	double h, w, d, m; 
	double dsp = 550;  //  ��������� ��� (��/�3)
	double dvp = 820;  //  ��������� ��� (��/�3)
	double wood = 700; //  ��������� ������ (��/�3)

	printf("������� ������ h � ��������� �� 1,8 �� 2,2 �\nh = ");
	scanf_s("%lf", &h);

	printf("������� ������ w � ��������� �� 0,8 �� 1,2 �\nw = ");
	scanf_s("%lf", &w);

	printf("������� ������� d � ��������� �� 0,5 �� 0,9 �\nd = ");
	scanf_s("%lf", &d);

	m = dvp * h * w * 0.005;
	m += 2 * dsp * h * d * 0.015;
	m += 2 * dsp * w * d * 0.015;
	m += wood * h * w * 0.01;
	m += dsp * (h / 0.4) * w * d * 0.01; //������� ����� ���� �� 0,01�, ��� ��� � ������� �� ������� �� �������

	printf("����� ����� = %.2lf ��", m);

	return 0;
}
