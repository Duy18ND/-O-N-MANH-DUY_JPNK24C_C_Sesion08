#include<stdio.h>
int main(){

	int sum =0;
	int row = 3, col =3;
	int array[3][3] = {
	{4,6,5},
	{7,8,9},
	{4,5,7},
	};
for(int i = 0; i < 3; i ++){
	printf("Phan tu duong cheo la: %d \n",array[i][i]);
	sum += array[i][i];
};
printf("Tong Phan Tu Duong Cheo La: %d",sum);
	return 0;
}
