#include<stdio.h>
int main() {
	//char a[7] = { "c", "o", "d", "i", "n", "g" };
	char name[50];
	char dept[50];
	printf("이름, 학과 입력: ");
	scanf("%s %s", name, dept);

	printf("이름: %s\n학과: %s\n", name, dept);
}