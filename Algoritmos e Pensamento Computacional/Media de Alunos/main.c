#include <stdio.h>

int obterNumeroAlunos() {
    int n;
    do {
        printf("Quantos alunos (max50)? ");
        scanf("%d", &n);
        if(n > 50 || n <= 0) {
            printf("Número inválido de alunos. Tente novamente. \n");
        }
    } while (n > 50 || n <= 0);
    return n;
    
}
void lerNotas(float notas [], int n) {
    for (int i = 0; i < n; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}
float calcularMedia (float notas[], int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += notas[i];
    }
    return soma / n;
}
int main () {
    float notas [50];
    int numAlunos;
    float mediaTurma;
    numAlunos = obterNumeroAlunos ();
    lerNotas(notas, numAlunos);
    mediaTurma = calcularMedia(notas, numAlunos);
    printf("\nMédia geral da turma: %.2f\n", mediaTurma);
    return 0;
}
