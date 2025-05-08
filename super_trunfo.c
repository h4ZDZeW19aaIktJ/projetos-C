#include <stdio.h>

int main(int argc, char **argv)
{
    char estadoUm[5], codigoPostalUm[10], nomeCidadeUm[50], estadoDois[5], codigoPostalDois[10], nomeCidadeDois[50];
    int populacaoUm, pontosTuristicosUm, populacaoDois, pontosTuristicosDois;
    float areaEstadoUm, pibEstadoUm, areaEstadoDois, pibEstadoDois;
    
	printf("Preencha as informações Abaixo:\n");
    
    printf("Carta 1\n");
    printf("Nome do Estado?\n");
    scanf("%s", estadoUm);
    printf("Codigo Postal? \n");
    scanf("%s", codigoPostalUm);
    printf("Nome da Cidade?\n");
    scanf("%s", nomeCidadeUm);
    printf("População?\n");
    scanf("%d", &populacaoUm);
    printf("Area do Estado?\n");
    scanf("%f", &areaEstadoUm);
    printf("Valor do PIB?\n");
    scanf("%f", &pibEstadoUm);
    printf("Número de Pontos Turísticos?\n");
    scanf("%d", &pontosTuristicosUm);
    printf("Dados da primeira Carta estão completos.\n");
     printf("\n");
    printf("Carta 2\n");
    printf("Nome do Estado?\n");
    scanf("%s", estadoDois);
    printf("Codigo Postal?\n");
    scanf("%s", codigoPostalDois);
    printf("Nome da Cidade?\n");
    scanf("%s", nomeCidadeDois);
    printf("População?\n");
    scanf("%d", &populacaoDois);
    printf("Area do Estado?\n");
    scanf("%f", &areaEstadoDois);
    printf("Valor do PIB?\n");
    scanf("%f", &pibEstadoDois);
    printf("Número de Pontos Turísticos?\n");
    scanf("%d", &pontosTuristicosDois);
    printf("Dados da segunda Carta estão completos.\n");
    printf("\n");
    printf("valores da Carta 1\n");
    printf("Nome do Estado: %s\n", estadoUm);
    printf("Codigo Postal: %s \n", codigoPostalUm);
    printf("Nome da Cidade: %s \n", nomeCidadeUm);
    printf("População: %d \n", populacaoUm);
    printf("Área: %f \n", areaEstadoUm);
    printf("População: %d \n", populacaoUm);
    printf("PIB: %f \n", pibEstadoUm);
    printf("Número de pontos turísticos: %d \n", pontosTuristicosUm);
    printf("\n");
    printf("valores da Carta 2\n");
    printf("Nome do Estado: %s\n", estadoDois);
    printf("Codigo Postal: %s \n", codigoPostalDois);
    printf("Nome da Cidade: %s \n", nomeCidadeDois);
    printf("População: %d \n", populacaoDois);
    printf("Área: %f \n", areaEstadoDois);
    printf("População: %d \n", populacaoDois);
    printf("PIB: %f \n", pibEstadoDois);
    printf("Número de pontos turísticos: %d \n", pontosTuristicosDois);
    
    return 0;
    
}
