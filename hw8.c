#include <stdio.h>
#include <math.h>

float mean(int* arr) {
	int sum = 0;
	float mean = 0, mean1 = 0, root = 0;
	int i;
	for (i = 0; i < 5; i++)
		sum += arr[i];
	mean = (float)sum / 5;
	for (i = 0; i < 5; i++) {
		mean1 += pow(arr[i] - mean, 2);
	}
	root = sqrt(mean1 / 5);
	return root;
}
int main(void) {
	int arr[5];
	int i;
	printf("Enter 5 real numbers : ");
	for (i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	printf("Standard Deviation : %f", mean(arr));
	return 0;
}
