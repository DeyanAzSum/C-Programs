#include <stdio.h>
#include <string.h>
// Функция за намиране на дължината на символен низ
int strlength(const char *str) {
    return strlen(str);
}
// Функция за обединяване на два символни низа
void strconcat(char *dest, const char *src) {
    strcat(dest, src);
}
// Функция за сравняване на два символни низа
int strcompare(const char *str1, const char *str2) {
    return strcmp(str1, str2);
}
int main() {
    printf("Помощно меню за приложението:\n\n");
    // Информация за всяка функция
    printf("1. strlength\n");
    printf("   - Тази функция намира дължината на даден символен низ.\n");
    printf("   - Пример: strlength(\"Hello\") ще върне 5.\n\n");

    printf("2. strconcat\n");
    printf("   - Тази функция обединява два символни низа.\n");
    printf("   - Пример: strconcat(\"Hello \", \"World!\") ще обедини двата низа в \"Hello World!\".\n\n");

    printf("3. strcompare\n");
    printf("   - Тази функция сравнява два символни низа.\n");
    printf("   - Пример: strcompare(\"abc\", \"abc\") ще върне 0, ако низовете са равни.\n\n");

    return 0;
}
