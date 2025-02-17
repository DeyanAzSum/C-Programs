#ifndef PROCESSES_H_
#define PROCESSES_H_
#define MAX_PROCESI 5
typedef struct{
    int id;
    char imenaprocesa[30];
}Process;
int nextprocessid();
int createnewprocess(const char *name);
extern Process processes[];
extern int broqch;
#endif 