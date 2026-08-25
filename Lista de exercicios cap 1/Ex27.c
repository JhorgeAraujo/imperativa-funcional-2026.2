#include <stdio.h>
int main(){

    int segundos_informados, horas, minutos, segundos;
    printf("Informe a quantidade de segundos: ");
    scanf("%d", &segundos_informados);

    horas = segundos_informados / 3600;
    minutos = (segundos_informados % 3600) / 60;
    segundos = (segundos_informados % 3600) % 60;
    
    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", segundos_informados, horas, minutos, segundos);
}