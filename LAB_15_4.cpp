#include <stdio.h>//���������� �������
#include <iostream>
#include <stdlib.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);//���������� ��������� ����
    SetConsoleOutputCP(1251);
    int size, i, sum=0;//������ ����
    std::cout << "������ ����� ������\n";//�������� �����������
    std::cin >> size;//���������� ���� ����� ������
    int* array = (int*)malloc(size * sizeof(int));// �������� ���'�� ��� ������
    if (array == NULL) {// ��������, �� ���'��� ���� ������ �������
        printf("������� �������� ���'��.\n");
        return 1;
    }
    std::cout << "������ �������� ������\n";
    for (i = 0; i < size; i++) {//�� ��������� ����� for
        scanf_s("%i", &array[i]);//���������� ������� �������� �������� ������
        sum = sum + array[i];//������� ��� ���������
    }
    printf("����� = %i", sum);//�������� ���� ��������
    free(array);//��������� ���'��
    return 0;
}