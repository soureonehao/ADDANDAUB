#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define RAN rand() % 10		//定义了随机产生数字函数
void main() {
	int  select, sum[3], i, answer, box1[3], box2[3], correct = 0, select2;	//定义变量
	printf("欢迎光临！\n请选择您需要的题目：选择 1 ：加法题；选择 2 ：减法题； 选择 3 ：退出本测试！\n");
	select = 0;
	while (select != 3) {	//错题程序循环体
		printf("请选择您需要的运算类型：");
		scanf_s("%d", &select);	//输入选择运算方法
		if (select == 1) {
			for (i = 0; i <= 2; i++) {
				box1[i] = RAN;
				box2[i] = RAN;
				sum[i] = box1[i] + box2[i];	//定义数组，将每次随机产生的数存入数组中
				printf("<%d> %d + %d =", i, box1[i], box2[i]);	
				scanf_s("%d", &answer);
				if (answer == sum[i]) {
					printf("您做对了！\n");
					correct++;
				}
				else {
					printf("您答错了！\n");
				}
			}
			printf("您答对了%d道\n", correct);	//对作对的体进行统计
			printf("您想再次作答吗? 1:yes 2:no");	//判断是否再次作答，用循环嵌套分支
			select2 = 0 ;
			while (select2 != 1){
				scanf_s("%d", &select2);

				if (select2 == 1) {
					continue;
				}
				else if (select2 == 2) {
					printf("谢谢使用！");
					break;
				}
				else {
					printf("输入有误，请重新输入：");
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
					printf("您做对了！\n");
					correct++;
				}
				else {
					printf("您答错了！\n");
				}
			}
			printf("您答对了%d道\n", correct);
			printf("您想再次作答吗? 1:yes 2:no");
			select2 = 0;
			while (select2 != 1) {
				scanf_s("%d", &select2);

				if (select2 == 1) {
					continue;
				}
				else if (select2 == 2) {
					printf("谢谢使用！");
					break;
				}
				else {
					printf("输入有误，请重新输入：");
				}
			}

		}
		else if (select == 3) {
			printf("谢谢使用！");
			break;
		}
		else {
			printf("您输入有误，请重新输入\n");
			continue;
		}
	}
}