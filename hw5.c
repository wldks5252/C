#include <stdio.h>

void bin(int a) {
	if (a == 1 || a == 0) {
		printf("%d", a);
	}
	else {
		bin(a / 2);
		printf("%d", a % 2);
	}
}

int main(void) {
	int a;
	printf("please enter a number : ");
	scanf("%d", &a);
	bin(a);
}
