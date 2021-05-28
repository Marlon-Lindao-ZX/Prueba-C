
#include <stdio.h>

#define MAX 250
#define HOLA "HOLA MUNDO\n"

int main(){
    int x = 45;

    printf("%d\n",x);

    int c = getchar();

    if(c < 97 || c > 120){
        printf("Caracter no permitido\n");
        return -1;
    }

    printf("%d\n",c);

    putchar(c);

    putchar('\n');

    printf("%d\n", MAX);
    printf("%s\n", HOLA);

    return 0;
}