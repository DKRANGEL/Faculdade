#include <stdio.h>
#include <stdlib.h>u]

struct alunos
{
    char nome[99];
    int matricula;
    int nota1;
    int nota2;
    int nota3;
    
};

typedef struct alunos Alunos;

int main() {
    
    Alunos aluno[5];
    int i;
    float media[5], mediaGeral;
    int matricula;

    for (i = 0; i < 5; i++)
    {
        printf("Informe o nome do %d aluno: \n", i + 1);
        fflush(stdin);
        fgets(aluno[i].nome, aluno[i].nome(99), stdin);

        printf("Informe a matricula do %d aluno: \n", i + 1);
        scanf("%d", &aluno[i].matricula);

        printf("Informe a 1º nota do %d aluno: \n", i + 1);
        scanf("%d", &aluno[i].nota1);
        printf("Informe a 2º nota do %d aluno: \n", i + 1);
        scanf("%d", &aluno[i].nota2);
        printf("Informe a 3º nota do %d aluno: \n", i + 1);
        scanf("%d", &aluno[i].nota3);


    }

    for (i = 0; i < 5; i++)
    {
        media[i] = (aluno[i].nota1 + aluno[i]. nota2 + aluno[i].nota3) / 3;
    }
    
    for (i = 0; i < 5; i++)
    {
        if (media[i] > media[i + 1]){
        mediaGeral = media[i];
        
        printf("ALUNO %d", i);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Matricula: %d\n", aluno[i].matricula);
        printf("Nota 1: %d\n", aluno[i].nota1);
        printf("Nota 2: %d\n", aluno[i].nota2);
        printf("Nota 3: %d\n", aluno[i].nota3);
        }
    }

return 0;
}
