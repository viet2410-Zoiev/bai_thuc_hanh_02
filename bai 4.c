#include <stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct{
    char hoten[30];
    int masv;
    float d1, d2, d3;
}sv;
typedef struct tagNode{
    data ttsinhvien;
    struct tagNode* next;
}Node;
typedef struct{
    Node* ph, pt;
    int sl;
}llist;
void initList(llist* l){
    L->pt = NULL;
    L->ph = NULL;
    l->sl = 0;
}

int main(){
    llist L;
    initList(L);
}
