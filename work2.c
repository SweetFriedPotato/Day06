//2276337 ������
#include<stdio.h>
#define SIZE 5
int main() {
	int i;
	int attend[SIZE] = { 0 };
	int count = 0;
	double ratio;
	for (i = 0; i < 5; i++) {
		printf("%d ��° ���ǿ� �⼮�ϼ̳���?(�⼮ 1, �Ἦ 0) ", i+1);
		scanf("%d", &attend[i]);
		if (attend[i] == 0) {
			count++;
		}
	}
	ratio = count / 5.0;
	if (ratio >= 0.3)
		printf("�����ϼ� �����Դϴ�.(%.f%%) \n", ratio * 100.0);
}