/*��������� �������� ���� �person.h�, ����� �� ���������
��������� �Person�, ����� �� ������� ����������, �� �����
�� ������ (����� �� 20 �������), �������� ������� (����� ��
20 �������) �������� ������� (����� �� 20 �������) � � ���
������ � ����� (���� �����). ��������� �������� ���� �schoolclass.h�,
����� �� ������ ��������� ���� �person.h� � �� ��������� ���������
�SchoolClass� (����), ����� �� ������� ����� �� 26 ������� (�� �����������
Person), ����������� �� �����  (������), ������ �� ����� (���� �����) �
������ ����������� (���� �� ��� Person). ��������� �������� ���� �schoolroom.h�,
� ����� �������� ��������� ���� �person.h� � � ����� ������������ ���������
�SchoolRoom�, ����� �� ������� ����� �� ������ (���� �����), � ����������
��� ���� �� ������� � ���� ���� � ������� (����� �� 50 �������� �� ��� Person).
��������� ����, ����� �� �� ����� school.c � � ���� �������� ���������� �������
�schoolclass.h� � �schoolroom.h� � ��������� ��������� �School�, ����� ��
������� �������� ������� (����� �� ��� SchoolClass � ������ 20) � �������� ����
(����� �� ��� SchoolRoom � ������ 10). � ����� school.c � main ������������
���������� �� ��� school.*/
#ifndef SCHOOLCLASS_H_
#define SCHOOLCLASS_H_
#include "person.h"
struct SchoolClass {
    Person students[26];
    char paralelka;
    int number;
    Person classTeacher;
};

#endif

