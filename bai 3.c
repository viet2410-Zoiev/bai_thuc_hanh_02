
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct{
    char hoten[30];
    int masv;
    float d1, d2, d3;
}sv;
void nhap(sv* ptr, int n){
    for(int i = 0 ; i<n;i++){
        printf("sinh vien thu %d\n", (i+1));
        printf("Nhap ho ten: ");
        getchar();
        fgets(ptr[i].hoten, sizeof(ptr[i].hoten), stdin);
        ptr[i].hoten[strlen(ptr[i].hoten) -1] = '\0';
        //scanf("%s", ptr[i].hoten);
        //scanf("%s[^\n] %d %f %f %f", ptr[i].hoten, &ptr[i].masv,&ptr[i].d1, &ptr[i].d2);
        printf("\nNhap ma sinh vien: ");
        scanf("%d", &ptr[i].masv);
        printf("\nNhap diem 1: ");
        scanf("%f", &ptr[i].d1);
        printf("\nNhap diem 2: ");
        scanf("%f", &ptr[i].d2);
        printf("\nNhap diem 3: ");
        scanf("%f", &ptr[i].d3);
    }
    
}
void in (sv* ptr, int n){
    for(int i = 0 ; i < n ;i++){
        printf("sinh vien thu %d\n", i+1);
        printf("Ho ten: %s\nMa sinh vien: %d\nDiem 1: %.2f\nDiem 2: %.2f\nDiem 3: %.2f\n", ptr[i].hoten, ptr[i].masv, ptr[i].d1,ptr[i].d2,ptr[i].d3);
    }
}
int main(){
    int n;
    printf("So sinh vien can them: ");
    scanf("%d", &n);
    sv* ptr = (sv*)calloc(n, sizeof(sv)); 
    for(int i = 0 ; i< n;i++){
        nhap(ptr, n);
    }
    in(ptr, n);
}
