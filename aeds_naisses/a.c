#include <stdio.h>

int main(int argc, char** argv) {
	return scanf("%ld", *((long**)argv)) != EOF ? printf("%s\n", (**((long**)argv) & 1 ? "impar" : "par")), main(argc, argv) : 0;
}