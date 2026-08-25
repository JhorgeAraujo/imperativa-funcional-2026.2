#include <stdio.h>

int main() {
    float Nota_Aline = 9.0;
    char Nota_Mario[] = "DEZ";
    float Nota_Sergio = 4.5;
    float Nota_Shirley = 7.00;

    printf("%12s | %12s\n", "Aluno(a)", "Nota");
    printf("-------------------------------\n");

    printf("%12s | %12.2f\n", "Aline", Nota_Aline);
    printf("%12s | %12s\n", "Mario", Nota_Mario);
    printf("%12s | %12.2f\n", "Sergio", Nota_Sergio);
    printf("%12s | %12.2f\n", "Shirley", Nota_Shirley);
}