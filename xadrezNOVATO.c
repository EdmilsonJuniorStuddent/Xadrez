#include <stdio.h>

int main()
{
    //torre
    printf("-> Torre\n");
    for(int t = 0; t<5; t++){
        printf("Direita\n");
    }

    //bispo
    int b = 0;
    printf("-> Bispo\n");
    do{
        printf("Cima e Direita\n");
        b++;
    } while (b < 5);

    //rainha
    int r = 0;
    printf("-> Rainha\n");
    while (r < 8){
        printf("Esquerda\n");
        r++;
    }
    
    return 0;
}
