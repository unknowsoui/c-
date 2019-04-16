#include<stdio.h>
#include<stdlib.h>

unsigned int reverse_bit(unsigned int value){
	int a = 0, b = 0;
	for (int i = 31; i >= 16; i--)
	{
		if (((1 << i)&value) != 0)
		{ 
			a |= (1 << (31 - i));
		}
	}
	for (int i = 0; i < 16; i++)
	{
		if (((1 << i)&value) != 0)
		{
			b |= (1 << (31 - i));
		}
	}
	value = a | b;
	return value;
}

int avg(int a, int b){
	if (a < b){
		a = a^b;
		b = a^b;
		a = a^b;
	}
	int i = (a - b) / 2;
	i = i + b;
	return i;
}

int select(int arr[],int num){
	int t = arr[0];
	for (int i = 1; i < num; i++){
		t = t ^ arr[i];
	}
	printf("%d\n", t);
}

void change(char* ch, int sz)
{
	char* right = ch + sz - 1;
	char* left = ch;
	while (left < right)
	{
		char temp = 0;
		temp = *right;
		*right = *left;
		*left = temp;
		left++;
		right--;
	}
}

void fun(char ch[])
{							//i ma a tneduts

	while (*ch != '\0')
	{
		char* t = ch;
		int count = 0;
		while (*ch != ' '&& *ch != '\0')
		{
			ch++;
			count++;
		}
		change(t, count);
		if (*ch != '\0')
		{
			ch++;
		}
	}
}

int main(){
	unsigned int i = 2550136832;
	printf("%u\n", reverse_bit(i));
	int arr[] = { 2, 45, 6, 2, 5, 8, 8, 45, 5 };
	int num = sizeof(arr) / sizeof(arr[0]);
	select(arr, num);
	char a[] = "student a am i";
	num = sizeof(a) / sizeof(a[0]) - 1;
	change(a, num);
	fun(a);
	printf("%s", a);
	system("pause");
	return 0;
}