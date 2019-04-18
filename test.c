#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define SIZE 10
int mul(int num){
	for (int i = 1; i <= num; i++){
		for (int j = 1; j <= i; j++){
			printf("%d*%d= %d\t", i, j, i*j);
			if (i == j){
				printf("\n");
			}
		} 
	}
}
int change(int* x, int* y){
	int temp;
	temp = *y;
	*y = *x;
	*x = temp;
}
int Year(int year){
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		return 1;
	}
	else 
		return 0;
}
void showyear(){
	int year;
	printf("输入一个年份:\n");
	scanf("%d", &year);
	int i = Year(year);
	if (i == 1){
		printf("是闰年\n");
	}
	else
		printf("是平年\n");
}
int sushu(int num){
	int i;
	if (num == 2){
		return num;
	}
	else for (i = 2; i <=(int)sqrt((double)num); i++){
		if (num%i == 0)
			break;
	}
	if (i >(int)sqrt((double)num)){
		return 1;
	}
	else return 0;
}
void shownum(){
	int num;
	printf("输入一个数:\n");
	scanf("%d", &num);
	int i = sushu(num);
	if (i == 0){
		printf("不是\n");
	}
	else
		printf("是\n");
}
int init(int array[]){
	for (int i = 0; i < SIZE; i++){
		int num = 0;
		printf("输入第%d个数", i + 1);
		scanf("%d", &array[i]);
	}
}
int empty(int a[],int i){
	a[i]=0;
}
int reverse(int array[]){
	int b[10];
	for (int i = 0; i<SIZE; i++){
		b[i] = array[i];
	}
	for (int j = 9, i = 0; i < SIZE, j >= 0; j--, i++){
		array[i] = b[j];
	}
}
int main(){
	//mul(12);
	//change(&a, &b);
	//shownum(i);
	int a[10]={0};
	init(a);
	for (int i = 0; i < SIZE; i++){
		printf("%d\t", a[i]);
	}
	reverse(a);
	for (int i = 0; i < SIZE; i++){
		printf("%d\t", a[i]);
	}
	system("pause");
	return 0;
}