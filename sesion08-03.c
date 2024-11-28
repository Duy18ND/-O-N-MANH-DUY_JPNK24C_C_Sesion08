#include<stdio.h>
int main(){
	int n;
	printf("nhap hang va cot cua mang  : ");
	scanf("%d",&n);
	int arr[n][n];
	for(int i=0;i<n;i++){
			printf("\n");
		for(int j=0;j<n;j++){
			arr[i][j]= i;
			printf("%d ",arr[i][j]);
		}
	}
	
	return 0;
}
