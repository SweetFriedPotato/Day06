#include<stdio.h>
#define SIZE 5
double get_avg(int p[]) {
	int i = 0;
	int sum = 0;
	double avg = 0;
	//���ҵ��� ��� ���ϱ�
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
	printf("5�� �л��� ���� �Է�: ");
	for (int i; i < SIZE; i++) {
		int data[SIZE];
		printf("�Է�:");
		scanf("%d", &score[i]);
		printf("�迭 ���ҵ��� ��� = %.2f\n", get_avg(data));
		printf("%d�� ���� ���̰� ���� ��=%d\n", t, get_near(t, data));
	}
	
}