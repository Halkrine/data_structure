//
// Created by Halkrine on 2022-09-18.
//
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int bin_search(const int a[], int n, int key){
    int pl = 0; //start index
    int pr = n - 1; // last index
    int pc ; // middle index
    do {
        pc = (pl + pr) / 2;
        if (a[pc] == key)
            return pc;
        else if (a[pc] < key)
            pl = pc + 1;
        else
            pr = pc - 1;
    } while(pl <= pr);
    return -1;
}

int main(){
    system("chcp 65001");

    int i, nx, ky, idx;
    int *x;
    puts("이진 검색");
    printf("요소 개수 : ");
    scanf("%d", &nx);
    x = calloc(nx, sizeof(int));
    printf("오름차순 정렬 \n");
    printf("x[0] : ");
    scanf("%d", &x[0]);
    for(i = 1 ; i < nx ; i++){
        do {
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);

        } while(x[i] < x[i-1]);
    }
    printf("검색값 : " );
    scanf("%d", &ky);
    idx = bin_search(x, nx,ky);
    if(idx == -1){
        puts("검색 실패");
    } else
        printf("%d는 x[%d] 에 있음 \n", ky, idx);
    free(x);

    return 0;


}