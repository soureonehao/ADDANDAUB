#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RAN rand() % 10		//����������������ֺ���
void main() {
	int  select, sum[3], i, answer, box1[3], box2[3], correct = 0, select2;	//�������
	printf("��ӭ���٣�\n��ѡ������Ҫ����Ŀ��ѡ�� 1 ���ӷ��⣻ѡ�� 2 �������⣻ ѡ�� 3 ���˳������ԣ�\n");
	select = 0;
	while (select != 3) {	//�������ѭ����
		printf("��ѡ������Ҫ���������ͣ�");
		scanf_s("%d", &select);	//����ѡ�����㷽��
		if (select == 1) {
			for (i = 0; i <= 2; i++) {
				box1[i] = RAN;
				box2[i] = RAN;
				sum[i] = box1[i] + box2[i];	//�������飬��ÿ�����������������������
				printf("<%d> %d + %d =", i, box1[i], box2[i]);	
				scanf_s("%d", &answer);
				if (answer == sum[i]) {
					printf("�������ˣ�\n");
					correct++;
				}
				else {
					printf("������ˣ�\n");
				}
			}
			printf("�������%d��\n", correct);	//�����Ե������ͳ��
			printf("�����ٴ�������? 1:yes 2:no");	//�ж��Ƿ��ٴ�������ѭ��Ƕ�׷�֧
			select2 = 0 ;
			while (select2 != 1){
				scanf_s("%d", &select2);

				if (select2 == 1) {
					continue;
				}
				else if (select2 == 2) {
					printf("ллʹ�ã�");
					break;
				}
				else {
					printf("�����������������룺");
				}
			}
			
		}
		else if (select == 2) {
			for (i = 0; i <= 2; i++) {
				box1[i] = RAN;
				box2[i] = RAN;
				sum[i] = box1[i] - box2[i];
				printf("<%d> %d - %d =", i, box1[i], box2[i]);
				scanf_s("%d", &answer);
				if (answer == sum[i]) {
					printf("�������ˣ�\n");
					correct++;
				}
				else {
					printf("������ˣ�\n");
				}
			}
			printf("�������%d��\n", correct);
			printf("�����ٴ�������? 1:yes 2:no");
			select2 = 0;
			while (select2 != 1) {
				scanf_s("%d", &select2);

				if (select2 == 1) {
					continue;
				}
				else if (select2 == 2) {
					printf("ллʹ�ã�");
					break;
				}
				else {
					printf("�����������������룺");
				}
			}

		}
		else if (select == 3) {
			printf("ллʹ�ã�");
			break;
		}
		else {
			printf("��������������������\n");
			continue;
		}
	}
}