#include <stdio.h>

int main() {

    double base, h, area;
    printf("fale o numero corespondente a base\n");
    scanf("%d", &base);
    printf("fale o numero corespondente a h\n");
    scanf("%d", &h);

    area = (base * h)/2;

    printf("a area e %.2lf\n", area);

    printf("\n\n--------- | FIM DO PROGRAMA | ---------\n\n");
    return 0;
}