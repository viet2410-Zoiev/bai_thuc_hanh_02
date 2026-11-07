
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n, m;
    printf("nhap hang va cot: ");
    scanf("%d%d", &n, &m);
    float **mang = (float**)malloc(n*sizeof(float*));
    if(mang == NULL){
        printf("khong du cap bo nho");
        return 1;
    }
    for(int i = 0;i<n;i++){
        mang[i] = (float*)malloc(m*sizeof(float));
        if(mang[i] == NULL){
        printf("khong du cap bo nho");
        return 1;
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = 0; j< m;j++){
            scanf("%f", &mang[i][j]);
        }
    }
    printf("Ma tran %d %d la:\n", n, m);
    for(int i = 0; i < n;i++){
        for(int j = 0; j< m;j++){
            printf("%.2f ", mang[i][j]);
        }
        printf("\n");
    }
    free(mang);
    return 0;
}
