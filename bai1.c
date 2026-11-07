#include<stdio.h>
#include<stdlib.h>
int main (){
	int n;
	printf("Nhap so phan tu can them: ");
	scanf("%d", &n);
	float* p = (float*)calloc(n, sizeof(float));
	if(p == NULL){
		printf("Khong du bo nho");
		return 0;
		
	}
	else{
		for (int i=0;i<n;i++){
			printf("nhap phan tu:");
			scanf("%f", p+i);
		}
	}
	printf("mang da nhap ");
	for(int i = 0; i<n;i++) 
    	printf("%f ", *(p+i));
}
