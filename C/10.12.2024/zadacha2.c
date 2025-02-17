#include <stdio.h>
int main(void) {
    unsigned char lights = 0;
    while (1) {
        int izbor;
        printf("1. Promeni osvetlenieto.\n");
        printf("2. Veche pusnato osvetlenie.\n");
        printf("Enter your choice: ");
        scanf("%d", &izbor);
        if (izbor == 1) {
            int staq;
            printf("Nomer na staq ot 1 do 8: ");
            scanf("%d", &staq);
            if (staq < 1 || staq > 8) {
                printf("Chisloto trqbva da e ot edno do osem.\n");
                return 1;
            }
            unsigned char light = 1 << (staq - 1);
            lights = lights ^ light;
            printf("Toggled light in room %d.\n", staq);
        } 
        else if (izbor == 2) {
            printf("The light is on in rooms: ");
            int vklucheni = 0;
            for (int i = 1; i < 9; i++) {
                if ((lights >> i) & 1) {
                    if (vklucheni)
                    printf(", ");
                    printf("%d", i);
                    vklucheni = 1;
                }
            }
            if (!vklucheni) {
                printf("None");
            }
            printf("\n");
        } 
        else {
            printf("Invalid choice! Please choose 1 or 2.\n");
        }
    }
    return 0;
}
