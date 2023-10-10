#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

int saldo;

void * holaHilo(){
    printf("Hola desde un hilo\n");
    pthread_exit(NULL);
}

void * agregarSaldo(){
    printf("Saldo actual: %d\n", saldo);
    saldo = saldo + 100;
    printf("Saldo agregado: %d\n", saldo);
}

int main(){
    pthread_t t;
    saldo = 0;
    for(int i = 1; i <= 100; i++){
        //pthread_create(&t, NULL, holaHilo, NULL);
        pthread_create(&t, NULL, agregarSaldo, NULL);
    }
    pthread_exit(NULL);
    return 0;
}