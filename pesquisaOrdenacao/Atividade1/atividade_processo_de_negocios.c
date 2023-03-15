/* 
Pograma que captura três notas e calcula
a media do aluno, no final do programa
exibe o nome e a nota final do aluno.
Autor: Guilherme Mascarenhas Dias;
Data: 01/03/2023.
Versão: 1.0.0.
Linguagem: C.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    //Declaração de variaveis
    char nomeAluno[30];
    float nota1,nota2,nota3,calc;
    int media;
    
    // Captura de dados    
    printf("Infome o nome do aluno: \n");
    scanf("%30s", nomeAluno);
    printf("Infome a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Infome a primeira nota2: \n");
    scanf("%f", &nota2);
    printf("Infome a primeira nota3: \n");
    scanf("%f", &nota3);
    
    // Variavel que calcula a media.
    calc = (nota1 + nota2 + nota3) / 3;
    // função que arredoanda a media do aluno e transforma em inteiro.
    media = ("%ld", lround(calc));
    
    //Saida:
    printf("O aluno %s ficou com a media final de %d", nomeAluno,media);
    
    return 0;
}