#include<stdio.h>
int main(){
	int n =3;
	int sum =0;
	int row = 3, col =3;
	int array[3][3] = {
	{4,6,5},
	{7,8,9},
	{4,5,7},
	};
for(int i = 0; i < n ; i++){
	printf("Phan tu duong cheo la: %d \n",array[i][n - i -1]);
	sum += array[i][n -i -1];
};
printf("Tong Phan Tu Duong Cheo La: %d",sum);
	return 0;
}
