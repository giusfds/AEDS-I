#include <stdio.h>

int main() {

    int qm, meses, internetgasta=0, resto=0;

    scanf("%d", &qm);
    scanf("%d", &meses);

    for (int i = 0; i < meses; i++)
    {
        scanf("%d", &internetgasta);
        resto += qm - internetgasta;
    }

    resto+=qm;
    printf("%d\n", resto);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}