#include <stdio.h>

int main() {
    FILE *f = fopen("notas.txt", "w"); // Abre o arquivo "alunos.txt" para escrita
    char nome[30];
    int nota, RGM;
    
    printf("Digite o nome, nota e RGM: "); // Solicita entrada ao usuário
    scanf("%s %d", nome, &nota, &RGM); //Lê o nome e a idade
    
    //Escreve os dados formatados no arquivo
    fprintf(f, "Nome: %s - idade: %d - RGM: %d\n", nome, nota, RGM);
    fclose(f); //Fecha o arquivo
    
    return 0;
}
