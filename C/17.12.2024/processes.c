#include <stdio.h>
#include "processes.h"
Process processes[MAX_PROCESI];
int broqch = 0;
int nextprocessid() {
    if (broqch >= MAX_PROCESI) {
        return 0;
    }
    return broqch + 1;
}
int createnewprocess(const char *name){
    if (broqch >= MAX_PROCESI) {
        printf("Ne moje da ima poveche ot 5 procesa ednovremenno. Edin ot tqh trqbva da bude sprqn.\n");
        return 0;
    }
    int id = nextprocessid();
    if (id == 0) {
        return 0;
    }
    processes[broqch].id = id;
    int i;
    for (int i = 0; i < 30 && name[i] != '\0'; i++){
        processes[broqch].imenaprocesa[i] = name[i];
    }
    processes[broqch].imenaprocesa[i] = '\0';
    broqch++;
    return id;
}
void stopprocess (int procesid){
    int flag = 0;
    for (int i = 0; i < MAX_PROCESI; i++) {
        if (processes[i].id == procesid) {
            flag = 1;
            for (int j = i; j <= MAX_PROCESI; j++) {
                processes[j] = processes[j + 1];
            }
            broqch--;
            break;
        }
    }
    if (flag == 0) {
        printf("Procesut ne e nameren\n");
    }
}
