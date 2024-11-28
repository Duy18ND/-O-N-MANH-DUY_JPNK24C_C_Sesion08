#include<stdio.h>
int main(){
	int i;
	printf("Moi Ban Nhap Vao Mot Phan Tu: ");
	scanf("%d",&i);
	int array[5] ={10,12,14,16,18};
	if(i >= 0 && i<5){
	printf("Vi Tri Phan Tu Thu %d Cua Mang la: %d",i+1,array[i]);
	}else{
		printf("Phan Tu trong Mang Khong Ton Tai");
	}
	return 0;
} 
