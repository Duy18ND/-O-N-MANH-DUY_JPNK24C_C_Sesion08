#include<stdio.h>
int main(){

	int sum =0;
	int row = 3, col =4;
	int array[3][4] = {
	{4,6,7,9},
	{7,8,9,2},
	{4,5,7,8},
	};
	for (int i = 0; i < row; i++) {
	 for (int j = 0; j < col; j++){
	 	 if (i == 0 || i == row - 1 || j == 0 || j == col - 1);
	 	 	sum += array[i][j];
	 } 
printf("Tong So phan tu duong bien la: %d",sum);
	return 0;
}
}
