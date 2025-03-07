/*��������� �������, ����� ��������
�������� ��������� �� ��������� �
���������� �� ������������� �������,
�� ����� �� ������. ��� �������������
������� � windows �� �� �������� �����
�� ���������. ��� ��������� � linux ��
�������� ����� �� ������� ��������. ���
������������� ������� � MacOS �� �� ��������
������ �� ������� ��������. ��� �������������
������� �� � ���� ���� �� �����, ��������� ��
������ ������ (������� �� �������, �� �����
��������, ������ ������������ � �.�).*/
#include <stdio.h>
int main(){
    int arr[] = {2, 3, 1, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    #ifdef _WIN32
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
    printf("Windows");
    #elif defined __linux_
        for (int i = 0; i < n; i++) {
        int a = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[a]) {
                a = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[a];
        arr[a] = temp;
    }
    for (int i = 0; i < n; i++){
        printf("%d\n", arr[i]);
    }
        printf("Linux");
    #elif __APPLE__
    for (int i = 0; i < n; i++) {
        int f = arr[i];
        int j = i - 1;
        for (; j >= 0 && arr[j] > f; j--){
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = f;
    }
    for (int i = 0; i < n; i++){
        printf ("%d\n", arr[i]);
    }
        printf("Apple");

    #else
    int i = 0, j = n - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for (int k = 0; k < n; k++){
        printf("%d\n", arr[k]);
    }
        printf("Other OS");

    #endif
    return 0;
}
