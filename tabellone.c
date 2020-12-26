#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int n,n_estratti[90],x=0,check=0;
    do{
        system("cls");
        x=0;
        srand(time(NULL));
        do{
            n=1+rand()%90;
            n_estratti[x]=n;
            if(x<=90){
                for(int i=0;i<x;i++){
                    if(n_estratti[i] != n) { check=0; }
                    else{ check = 1 ; x-- ; break; }
                }
                if(check == 0){
                    printf("numero generato %d \n",n);
                    printf("contatore: %d\n",x+1);
                    printf("numeri estratti: \n");
                    for (int i = 0; i < x; i++){
                        printf("%d\t",n_estratti[i]);
                    }
                    printf("\n");
                    system("pause");
                    system("cls");
                }
            }
            x++;
        }while(x<90);
        system("cls");
        printf("Programma terminato. Vuoi ricominciare? 0-No 1-Si: ");
        scanf("%d",&x);
    }while(x!=0);
    system("pause");
    return 0;
}