#include<stdio.h>
#include<stdlib.h>
int diguifib(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	return diguifib(n-1) + diguifib(n-2);
}
int feidigui(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	int n1=1, n2=1,sum=0;
	for (int i = 2; i < n; i++){
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;

	}
	return sum;
}
int mi(int n,int k){
	if (k == 1)
		return n;
	if (k>1){
		return mi(n, k - 1)*n;
	}
}
int DigitSum(int n){
		if (n<10)
		{
			return n;
		}
		return n%10+DigitSum(n / 10);
}
char reverse_string(char* string){
	if (*string != '\0'){
		reverse_string(string + 1);
	}
	printf("%c", *(string-1));
}
int JC(int n){
	if (n == 1){
		return n;
	}
	return JC(n - 1)*n;
}
int feidgJC(int n){
	int sum=1;
	for (int i = 1; i <= n; i++){
		sum *= i;
	}
	return sum;
}
int dgstrlen(char array[]){
	if (*array != '\0'){
		return 1 + dgstrlen(array + 1);
	}
	else
	{
		return 0;
	}
}
int feidgstrlen(char array[]){
	int count = 0, i=0;
	while (1){
		if (array[i] != '0'){
			count++;
		}
		else{
			return count;
			break;
		}
		i++;
	}
}
void print(int n)
{
	if (n>9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main(){
	//printf("%d\n",diguifib(8));
	//printf("%d\n", feidigui(8));
	//printf("%d\n", mi(2,10));
	//printf("%d\n", JC(4));
	//printf("%d\n", feidgJC(4));
	char string[] = "huangshan";
	//printf("%d\n", feidgstrlen(string));
	//printf("%d\n", DigitSum(1333));
	reverse_string(string);
	system("pause");
	return 0;
}