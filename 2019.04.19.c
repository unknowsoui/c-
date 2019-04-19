#include<stdio.h>
#include<stdlib.h>

void change(int* array, int num){
	for (int i = 0; i < num; i++){
		if (array[i] % 2 != 0){
			for (int j = 0; j < num; j++){
				int temp = 0;
				if (array[j] % 2 == 0){
					temp = array[i];
					array[i] = array[j];
					array[j] = temp;
					break;
				}
			}
		}
	}
}

int search(int array[][3],int i,int j,int num){
	int rom = 0, col = 2;
	while (rom<i&&col>=0){
		if (array[rom][col]<num){
			rom++;
		}
		else if (array[rom][col]>num){
			col--;
		}
		else{
			return 1;
		}
	}
	return 0;
}
int main(){
	int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int array[][3] = { (1, 2, 3), (2, 3, 4), (3, 4, 6)};
	if (search(array, 3, 3, 7) != 0){
		printf("’“µΩ¡À£°\n");
	}
	else{
		printf("õ]’“µΩ£°\n");
	}
	int num = sizeof(a) / sizeof(a[0]);
	change(a, num);
	for (int i = 0; i < num; i++){
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}