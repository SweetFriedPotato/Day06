#include<stdio.h>
//배열 전체 요소 출력
void show(int arr[], int size);


int main() {
	//순차탐색 알고리즘 (선형탐색)
	//배열 초기화
	int arr[] = {100, 30, 70, 80, 100};
	int key, index, size, len;

	//배열 크기
	size = sizeof(arr)/ sizeof(int);

	//배열 전체 요소 출력
	show(arr, size);

	for (int i = 0; i <= 5; i++) 
		printf("%d", arr[i]);

	while (1) {
		printf("탐색할 값 입력:");
		scanf("%d", &key);
		int i;
		for (int i = 0; i < size; i++) {
			if (key == arr[i]) {
				printf("%d번째 탐색성공!\n", i + 1);
			}
		}
	}
}