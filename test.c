#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum Sex {
	MALE,
	FEMALE,
	UNKNOWN,
	};

#define MUM 5

//int main(){
//	// 常量有4种体现形式
//	// 1. 字面值常量
//	// 2. const 修改的变量成为常量
//	// 3. 枚举 enum
//	// 4. 宏 #define
//
//	printf("MUM =\t%d\n", MUM);
//	printf("my name is \"yangying\"\n");
//	printf("d:\\test.txt");
//	printf("%d\n", strlen("c"));
//
//	printf("你会好好敲代码吗?  1.表示会  0.表示不会:\n");
//	int choice = 0;
//	scanf("%d", &choice);
////选择语句:if else , switch
//	if (choice == 1){
//		//条件成立执行 if 后面 { } 中的内容
//		printf("好 offer 在向你招手 !\n");
//	}
//	else{
//		//条件不成立,执行 else { } 中的内容
//		printf("回家卖红薯吧 !\n");
//	}
//
////循环语句
//	// 输出 1 - 10
//	// while 循环
//	int num = 1;
//	while (num <= 10) {
//		printf("%d\n", num);
//		num = num + 1;
//	}
//	printf("\n");

//函数
	// int 返回值类型
	// Add 是函数名
	// ( ) 里面是函数的参数
	// { } 函数体(代码片段的内容)
	// return 表示函数结束了.
//int Add(int x, int y){
//		int sum = x + y;
//		return sum;
//	}
//int main(){
//	//函数调用,真正执行代码片段
//	printf("%d\n", Add(10, 20));
//	printf("%d\n", Add(100, 2000));

//数组

int main(){
	int a[4] = { 1, 2, 3, 4 };
	//取下标的方式来使用数组中的元素
	printf("%d\n", a[1]);

	system("pause");
	return 0;

}