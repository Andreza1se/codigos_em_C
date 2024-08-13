#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_ELEMENTOS 1000

struct pessoa
{
    int idade;
    char nome[50];
};

typedef struct pessoa tipo_usuario;

tipo_usuario* criar_usuario(char nome[], int idade)
{
    tipo_usuario *usuario;
    usuario = (tipo_usuario*)malloc(1 * sizeof(tipo_usuario));

    if(usuario==NULL)
    {
        printf("Nao há memoria suficiente.");
        exit(1);//sai do programa.
    }

    usuario->idade = idade;

    strcpy(usuario->nome, nome);

    return usuario;
}
tipo_usuario* criar_usuario_modo_errado(char nome[], int idade)
{
    tipo_usuario usuario;

    usuario.idade = idade;

    strcpy(usuario.nome,nome);

    return &usuario;
}

int main(void)
{
    tipo_usuario *usuario_A;
    tipo_usuario *usuario_B;

    usuario_A =  criar_usuario_modo_errado("Joao", 20); // n vai dar certo
    usuario_B = criar_usuario("Joao", 20);

    printf("Usuario A: \n idade: %d nome: %s \n", usuario_A->idade, usuario_A->nome);//perdemos a estrutura.
    printf("Usuario B: \n idade: %d nome: %s \n", usuario_B->idade, usuario_B->nome);

    //free(usuario_A) não é possivel pq ele ja doi destruido ao termino da função.
    free(usuario_B);

    return 0;
}