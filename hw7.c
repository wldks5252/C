#include <stdio.h>

int main(void) {
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };

	int* str1 = arr1;
	int* str2 = arr2;

	int i, temp;

	printf("arr1 : ");
	for (i = 0; i < 6; i++) 
		printf("%d ", arr1[i]);
	printf("\narr2 : ");
	for (i = 0; i < 6; i++) 
		printf("%d ", arr2[i]);

	for (i = 0; i < 6; i++) {
		temp = *str1;
		*str1 = *str2;
		*str2 = temp;
		str1++;
		str2++;
	}
	
	printf("\nafter swap");
	printf("\narr1 : ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2 : ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
}
