#include <stdio.h>
#include "processes.h"
void printiraiprocesite() {
    if (broqch == 0) {
        printf("Nqma aktivni procesi.\n");
    } else {
        printf("Aktivnite procesi:\n");
        for (int i = 0; i < broqch; i++) {
            printf("ID: %d, Ime: %s\n", processes[i].id, processes[i].imenaprocesa);
        }
    }
}
int main() {
    int choice;
    char name[30];
    int procesid;
    while (1) {
        printf("\nMenu:\n");
        printf("1. Suzdavane na procesi\n");
        printf("2. Spisuk s procesi\n");
        printf("3. Spirane na proces\n");
        printf("4. Izhod\n");
        printf("Opciq: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Ime na procesa: ");
                scanf("%s", name);
                procesid = createnewprocess(name);
                if (procesid) {
                    printf("ID na procesa e: %d\n", procesid);
                } else {
                    printf("Ne moje da se suzdade nov proces\n");
                }
                break;
            case 2:
                printiraiprocesite();
                break;
            case 3:
                printf("ID na proces za spirane: \n");
                scanf("%d", &procesid);
                stopprocess (procesid);
                break;
            case 4:
                printf("Izhod ot programata.\n");
                return 0;
            default:
                printf("Izborut trqbva da e ot 1 do 4.\n");
        }
    }
    return 0;
}
