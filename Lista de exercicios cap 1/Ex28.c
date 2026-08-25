#include <stdio.h>
int main(){

    int valor1, valor2, valor3;
    double media;
    
    printf("Informe o primeiro valor: ");
    scanf("%d", &valor1);
    printf("Informe o segundo valor: ");
    scanf("%d", &valor2);
    printf("Informe o terceiro valor: ");
    scanf("%d", &valor3);

    media = (valor1 + valor2 + valor3) / 3.0;

    printf("A média aritmética dos valores é: %.2lf\n", media);
}
