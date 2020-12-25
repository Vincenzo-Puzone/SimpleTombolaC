#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int n,n_estratti[15],x=0,check=0;
    int mat[3][9];
    do{
        system("cls");
        srand(time(NULL));
        do{
            n=1+rand()%90;
            n_estratti[x]=n;
            if(x<=15){
                for(int i=0;i<x;i++){
                    if(n_estratti[i] != n) { check=0; }
                    else{ check = 1 ; x--; break; }
                }
            }
            x++;
        }while(x<15);

        for(int i = 0; i < 3;i++){
            for(int j = 0; j < 9; j++){
                mat[i][j]=0;
            }
        }

        n=0;
        x=0;

        for(int i = 0; i < 3;i++){
            for(int j = 0; j < 9; j++){
                n=rand()%2;
                if(n == 1 && x < 15) mat[i][j]=n_estratti[x++];
            }
        }

        printf("numeri generati\n\n");
        for(int i = 0; i < 3;i++){
            for(int j = 0; j < 9; j++){
                printf("%d\t",mat[i][j]);
            }
            printf("\n");
            printf("\n");
        }
        printf("\n");
        printf("Programma terminato. Vuoi ricominciare? 0-No 1-Si: ");
        scanf("%d",&x);
    }while(x!=0);
    system("pause");
    return 0;
}