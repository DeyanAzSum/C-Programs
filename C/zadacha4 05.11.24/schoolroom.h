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
#ifndef SCHOOLROOM_H_
#define SCHOOLROOM_H_
#include "person.h"
struct SchoolRoom {
    int roomnumber;
    Person people[50];
};
#endif
