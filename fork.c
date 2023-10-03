#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(){
    printf("soy el proceso padre\n");
    int pid = fork();
    if(pid == 0){
        printf("Soy el proceso hijo\n");
    }
    else{
        printf("Soy el proceso padre y mi hijo es: %d\n", pid);
    }
    printf("soy otro proceso\n");
    return 0;
}