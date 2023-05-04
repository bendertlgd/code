#include<stdio.h>
int main(){
    int matriz[10][10]={
        0,0,0,0,0,
        0,0,0,0,0,
        0,0,0,0,0,
        0,0,0,0,0,
        0,0,0,0,0,
    };
    int largura=5,alura=5,largura_borda=1,valor_borda=2;
    int i,j;
    for(i=0;i<largura_borda;i++){
        for(j=0;j<largura;j++){
            matriz[i][j]=0;
            matriz[largura][j]=6;
        }
    }
    for(i=0;i<largura;i++){
        for(j=0;j<alura;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}