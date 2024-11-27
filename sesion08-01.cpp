#include<stdio.h>
int main(){ 
	int numbers[3][3] = {{1,5,6},{5,2,7},{6,4,8}};
		printf("IN TU CUOI VE DAU \n");
		for(int hang = 2; hang >= 0; hang-- ){
			printf("Hang thu %d \n",hang);
	for(int cot = 2; cot >= 0; cot--){
		printf("%d \n",numbers[hang][cot]);
	}
	printf("\n");
}
return 0;
}
