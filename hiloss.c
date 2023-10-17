#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>

int saldo;

void * holaHilo(void *thid){
    printf("Hola desde un hilo %d\n", *((int *)thid));
    pthread_exit(NULL);
}

int main(){
    pthread_t t;
    saldo = 0;
    for(int i = 0; i < 100; i++){
        int thid = i;
        pthread_create(&t, NULL, holaHilo, &thid);
        pthread_join(t, NULL);
    }
    pthread_exit(NULL);
    
    
    return 0;
}