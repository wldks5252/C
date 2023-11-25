#include <stdio.h>
#include <string.h>

int convCase(int str) {
	const int diff = 'a' - 'A';
	if (str >= 'A' && str <= 'Z')
		return str + diff;
	else if (str >= 'a' && str <= 'z')
		return str - diff;
	else
		return str;
}
int main(void) {
	char str[50];
	int i;
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	for (i = 0; i < strlen(str); i++) {
		str[i] = convCase(str[i]);
	}
	printf("Output> ");
	puts(str);
	return 0;
}
