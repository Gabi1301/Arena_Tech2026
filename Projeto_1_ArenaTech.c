/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main() {
    int participantes, jogadores_por_time, computadores, duracao;
    float potencia, preco_kWh, preco_kit, outros_custos;
    int times;
    float consumo, custo_energia, custo_alimentacao, custo_total, custo_medio;

    printf("Quantidade de participantes: ");
    scanf("%d", &participantes);
    printf("Jogadores por time: ");
    scanf("%d", &jogadores_por_time);
    printf("Quantidade de computadores: ");
    scanf("%d", &computadores);
    printf("Potencia media (W): ");
    scanf("%f", &potencia);
    printf("Duracao do evento (h): ");
    scanf("%d", &duracao);
    printf("Preco do kWh: ");
    scanf("%f", &preco_kWh);
    printf("Preco do kit de alimentacao: ");
    scanf("%f", &preco_kit);
    printf("Outros custos: ");
    scanf("%f", &outros_custos);

    times = (int)ceil((float)participantes / jogadores_por_time);
    consumo = (computadores * potencia * duracao) / 1000.0;
    custo_energia = consumo * preco_kWh;
    custo_alimentacao = participantes * preco_kit;
    custo_total = custo_energia + custo_alimentacao + outros_custos;
    custo_medio = custo_total / participantes;

    printf("\n--- Relatorio Arena Tech ---\n");
    printf("Times necessarios: %d\n", times);
    printf("Consumo de energia: %.2f kWh\n", consumo);
    printf("Custo da energia: R$ %.2f\n", custo_energia);
    printf("Custo da alimentacao: R$ %.2f\n", custo_alimentacao);
    printf("Custo total: R$ %.2f\n", custo_total);
    printf("Custo medio por participante: R$ %.2f\n", custo_medio);

    return 0;
}
