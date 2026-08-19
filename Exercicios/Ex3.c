#include <stdio.h> // inclui a biblioteca de entrada e saída padrão

int main() {
    // declara uma variável do tipo para guardar o preço do combustível
    float gasolina = 6.857;

    // imprime o texto no terminal.
    // o "%.3f" especifica que o valor do float será exibido com 3 casas decimais.
    printf("o preço do litro da gasolina é: R$%.3f\n", gasolina);

    return 0; // retorna 0 para indicar que o programa foi executado com sucesso
}