#include<stdio.h>
//�迭 ��ü ��� ���
void show(int arr[], int size);


int main() {
	//����Ž�� �˰��� (����Ž��)
	//�迭 �ʱ�ȭ
	int arr[] = {100, 30, 70, 80, 100};
	int key, index, size, len;

	//�迭 ũ��
	size = sizeof(arr)/ sizeof(int);

	//�迭 ��ü ��� ���
	show(arr, size);

	for (int i = 0; i <= 5; i++) 
		printf("%d", arr[i]);

	while (1) {
		printf("Ž���� �� �Է�:");
		scanf("%d", &key);
		int i;
		for (int i = 0; i < size; i++) {
			if (key == arr[i]) {
				printf("%d��° Ž������!\n", i + 1);
			}
		}
	}
}