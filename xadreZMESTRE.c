#include <stdio.h>
//torre
movTorre(int num){
    if(num > 0){
        printf("Direita\n");
        movTorre(num - 1);
    }
}

movBispo(int num){
    if(num > 0){
        printf("Cima\n");
        printf("Direita\n");

        movBispo(num - 1);
    }
}

movRainha(int num){
    if (num > 0){
        printf("Esquerda\n");

        movRainha(num - 1);
    }
}


main(){
    int t = 5;
    printf("-> Torre\n");
    movTorre(t);

    int b = 5;
    printf("-> Bispo\n");
    movBispo(b);

    int r = 5;
    printf("-> Rainha");
    movRainha(r);


    //cavalo loop aninhado
    printf("-> Bispo\n");
    int diagonal = 0;

    while (diagonal < 5){

        for(int i = 5; i<5; i++);{
        printf("Cima\n");
        }
        printf("Direita\n");

        diagonal++;

    }

    


    //loop aninhado bispo
    printf("-> Bispo Aninhado");
    for(int v = 0; v <= 5; v++){

        printf("Direita\n");

        for(int h = 1; h<=1 && v<5; h++){
            printf("Cima\n");
        }

        
    }


    //loop complexo cavalo
    printf("->Cavalo loop complexo\n");

    for(int c = 0; c <= 1; c++){
        printf("Cima\n");

        for(int d = 0; d < 1 && c%2; d++){
            printf("Direita\n");
        }
    }


}