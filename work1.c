//2276337 ������
#include<stdio.h>
#define SIZE 10
int main() {
	int input, count[SIZE] = { 0 };
	while (1) {
		scanf("%d", &input);
		if (input < 0)
			break;
		if (input >= 0 && input <= 9)
			count[input]++;
	}
	printf("�Էµ� Ƚ��:\n ");
	for (int i = 0; i < SIZE; i++)
		printf("%d ", count[i]);

	printf("\n������׷�\n");
	for (int i = 0; i < SIZE; i++) {
		if (count[i] > 0) {
			printf("%d (%d): ", i, count[i]);
			for (int j = 0; j < count[i]; j++) {
				printf("#");
			}
			printf("\n");
		}
	}
}