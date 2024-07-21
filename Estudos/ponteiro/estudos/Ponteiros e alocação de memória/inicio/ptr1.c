#include<stdio.h>

int foo(int a) {
    a = 7;
    printf("&a = %p\n", &a);
    printf("a = %d\n\n", a);
}

int main() {
    int a = 5;
    foo(a);
    printf("&a = %p\n", &a);
    printf("a = %d\n", a);
    return 0;
}