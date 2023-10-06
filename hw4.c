#include <stdio.h>

int main() {
	int a;
	printf("Please enter a number : ");
	scanf("%d", &a);
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			printf("It is not a prime number.\n");
			break;
		}
		else {
			printf("It is a prime number.");
			break;
		}
	}
	return 0;
}
