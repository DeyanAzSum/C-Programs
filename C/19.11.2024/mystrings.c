#include <stdio.h>
#include "mystrings.h"
int strlength(const char *str) {
  int a = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    a++;
  }
  return a;
}
void strconcat(char *str1, const char *str2) {
    char b[50];
    int i = 0, j = 0;
    while(str1[i] != '\0') {
        b[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
            b[i] = str2[j];
            i++;
            j++;
        }
    b[i] = '\0';
    for (int i = 0; b[i] != '\0'; i++){
        str1[i] = result[i];
    }
}
int strcompare(const char *str1, const char *str2) {
    int s1 = 0, s2 = 0, j = 0;
    for (int i = 0; i < sizeof(str1)/sizeof(str1[0]); i++){
        s1++;
    }
    for (int i = 0; i < sizeof(str2)/sizeof(str2[0]); i++){
        s2++;
    }
    if(s1 == s2){
        while(j <= s1){
            if(str1[j] == str2[j]){
                return 0;
            }else if(str1[j] > str2[j]) {
                return 1;
            }else{
                return -1;
            }
            j++;
        }
    }else if(s1 > s2){
        return 1;
    }else{
        return -1;
    }
}