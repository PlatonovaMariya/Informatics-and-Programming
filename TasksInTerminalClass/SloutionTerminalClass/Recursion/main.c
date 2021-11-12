// Copyright 2021 Maria Platonova

/*
���������� ������.
���� ��������� ���������� ������, ����������� �� ������� �������
(���� ����� ����) � �� ������� � ���������. ���� �������� ������� ���,
������� ���������� �� ��������� ������.
�������� - ����������� ����� ������� (������) ����� ���� ����.
����� �������� ���� ��������������� (� ���� ����) ��� �������� (����� ������ �������).
� ������ ������� ���� �������� ��� �������� ��� ������ ���� ������� (����).
������ ������, �� ��, ��� �������� ���������� ����� ������ ����������,
�� ���� � �������������� ����������� �������.
������� ��������.
1. � �������� ������ ���� ������� (�������) ��������� (������� ������).
2. ��� ������ ���� ���������� ����������� �������. � ������� �� ������ 1. �������� ���
�������, � �������� �������� ����.
�������.
1. ���� ����������� ����� N, �������� �������, ��������� �� ����� ��� ����� �� 1 �� N.
2. �������� �������, ����������� ������� ��������� � ����������� m � n.
A(m, n) = {
  n + 1,                  m = 0
  A(m - 1, 1),            m > 0, n = 0
  A(m - 1, A(m, n - 1)),  m > 0, n > 0
}
�������: �(3, 4) = 125, �(3, 2) = 29
3. ���� ����������� �����, �������� �������, ����������� ��������� ����� �����.
4. ���� ����������� �����, �������� �������, ����������� ����� ���� �����.
5. ���� ����������� �����, �������� �������, ���������������� ������ �����.
6. ���� ����������� �����, �������� �������, ����������� �������� �� ����� �������.
7. ���� �����, ���������� �������� �� ��� �����������.
8. ��� ������, ����� ������������ ������� ������� (��� ��������).
*/

#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

/* ������: ����� �� ����� ������������������ */

void showSequenceBaseMethod(int N) {
    for (int i = 1; i <= N; ++i) {
        printf("%d ", i);
    }
}

void showSequenceRecursionMethod(int N) {
    if (N == 0) return;                         // ������� ������
    showSequenceRecursionMethod(N - 1);         // ��� ��������
    printf("%d ", N);
}

/* ���������� ������� ��������� */

// ��� ���������� ������� ����������� ���������� ������ �������,
// ����� ����������� ����������� �������������� �������������
int getAkermanFuncValueBaseMethod(int m, int n) {}
int getAkermanFuncValueRecursionMethod(int m, int n) {}

/* ���������� ���������� ����� */

int getFactorialBaseMethod(int N) {}
int getFactorialRecursionMethod(int N) {}

/* ���������� ����� ���� ����� */

int getSumOfNumbersBaseMethod(int num) {}
int getSumOfNumbersRecursionMethod(int num) {}

/* �������, ��������������� ����� */

int inverseNumberBaseMethod(int num) {}
int inverseNumberRecursionMethod(int num) {}

/* �������, ����������� ����� �� �������� */

int isPrimeNumberBaseMethod(int num) {}
int isPrimeNumberRecursionMethod(int num) {}

/* �������, ����������� �������� �� ����� ����������� */

int isPalindromBaseMethod(char* word, int start, int end) {}
int isPalindromRecursionMethod(char* word, int start, int end) {}

/* �������, ��������� ������������ ������� ������� */

int findMaximumBaseMethod(float* mass, int size) {}
int findMaximumRecursionMethod(float* mass, int size) {}

int main() {
    // ���� ����������
    int N = 0, m = 0, n = 0, num = 0;
    char word[20];
    int inv = 0;
    int size = 0;
    float* mass = NULL;
    int choosen = 0, type = 0;
    int temp = 0;
    float temp_f = 0;

    while (1) {
        printf("Choose task number:\n1. Show all numbers from 1 to N;");
        printf("\n2. Calculates the Ackermann function A(m, n); ");
        printf("\n3. Find factorial of the number;\n4. Calculates sum of the digits of the number; \n5. Invers the number; \n6. Check if the number is prime;");
        printf("\n7. Check if the word is palindrom; ");
        printf("\n8. Find the maximum element of the array;");
        printf("\n0. Exit.");
        printf("\n> ");
        scanf_s("%d", &choosen);

        if (choosen == 0) break;

        // �������������
        switch (choosen) {
        case 1:
            printf("Input N: ");
            scanf_s("%d", &N);
            break;
        case 2:
            printf("Input m and n: ");
            scanf_s("%d %d", &m, &n);
            break;
        case 3: case 4: case 5: case 6:
            printf("Input number: ");
            scanf_s("%d", &num);
            break;
        case 7:
            getchar();
            printf("Input word: ");
            gets(word);
            for (size = 0; word[size] != '\0'; size++);
            break;
        case 8:
            printf("Input size of array: ");
            scanf_s("%d", &size);
            srand(time(0));
            printf("Your random array: ");
            mass = (float*)malloc(size * sizeof(float));
            for (int i = 0; i < size; ++i) {
                mass[i] = rand() % 10;
                printf("%.2f ", mass[i]);
            }
            printf("\n");
            break;
        default:
            printf("Haven't such task!");
        }

        printf("Input type of method: 1. base; 2. recursion.; 3. both\n> ");
        scanf_s("%d", &type);

        if (type == 1)
            printf("Base methods start...\n");
        else if (type == 2)
            printf("Recursion methods start...\n");

        // ������� �����
        switch (choosen) {
        case 1:
            printf("Suquence:\n");
            if (type == 1 || type == 3) {
                showSequenceBaseMethod(N);
                printf("\n");
            }
            if (type == 2 || type == 3) {
                showSequenceRecursionMethod(N);
                printf("\n");
            }
            break;
        case 2:
            if (type == 1 || type == 3)
                printf("Task have only recursion method\n");
            if (type == 2 || type == 3)
                printf("A(%d, %d) = %d", m, n, getAkermanFuncValueRecursionMethod(m, n));
            printf("\n");
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        default:
            printf("Haven't such task!");
        }
        printf("\n");
        system("pause");
    }

    return 0;
}