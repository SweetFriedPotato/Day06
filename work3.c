#include<stdio.h>
#define SIZE 5
double get_avg(int p[]) {
	int i = 0;
	int sum = 0;
	double avg = 0;
	//원소들의 평균 구하기
	for (i = 0; i < SIZE; i++)
		sum += i;
	avg = (double)sum / SIZE;
	return avg;
}

int get_near(int i, int data[]) {
	int diff, near, diffmin = 101;
	for (int i = 0; i < SIZE; i++) {
		int t;
		if (t > data[i])
			diff = t - data[i];
		else
			diff = data[i] - t;
		if (diff < diffmin)
		{
			diffmin = diff;
			near = data[i];
		}
	}
	return near;
}
int main() {
	int t, score[SIZE];
	printf("5명 학생의 점수 입력: ");
	for (int i; i < SIZE; i++) {
		int data[SIZE];
		printf("입력:");
		scanf("%d", &score[i]);
		printf("배열 원소들의 평균 = %.2f\n", get_avg(data));
		printf("%d와 가장 차이가 작은 값=%d\n", t, get_near(t, data));
	}
	
}