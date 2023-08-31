//2276337 최지희
#include<stdio.h>
#define SIZE 5
int main() {
	int i;
	int attend[SIZE] = { 0 };
	int count = 0;
	double ratio;
	for (i = 0; i < 5; i++) {
		printf("%d 번째 강의에 출석하셨나요?(출석 1, 결석 0) ", i+1);
		scanf("%d", &attend[i]);
		if (attend[i] == 0) {
			count++;
		}
	}
	ratio = count / 5.0;
	if (ratio >= 0.3)
		printf("수업일수 부족입니다.(%.f%%) \n", ratio * 100.0);
}