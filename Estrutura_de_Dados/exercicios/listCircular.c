#include<stdio.h>
#include<stdlib.h>

//lista circular

typedef struct aluno Aluno;

struct aluno{
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

typedef struct elemento *Lista;

struct elemento{
    Aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elemen;

Lista *cria_lista(){
    Lista *li = (Lista *) malloc(sizeof(Lista));
    if(li!=NULL){
        *li = NULL;
    }
    return li;
}

void libera_lista(Lista* li){
    if(li!=NULL && (*li)!=NULL){
        Elemen  *aux, *no = *li;
        while((*li)!= no->prox){
            aux= no;
            no = no->prox;
            free(aux);
        }
        free(no);
        free(li);
    }
}
void imprime_lista(Lista *li) {
    if (li == NULL || (*li) == NULL) {
        printf("Lista vazia\n");
        return;
    }

    Elemen *no = *li;
    do {
        printf("Matricula: %d\n", no->dados.matricula);
        printf("Nome: %s\n",no->dados.nome);
        printf("Nota: %.2f %.2f %.2f\n", no->dados.n1, no->dados.n2, no->dados.n3);
        no = no->prox;
    } while (no != (*li));
}

int main() {
    Lista *li = cria_lista();
    
    if (li == NULL) {
        printf("Erro ao criar a lista.\n");
        exit(-1);
    }

    // Inserindo elementos na lista
    Elemen *aluno1 = (Elemen *)malloc(sizeof(Elemen));
    aluno1->dados.matricula = 123;
    snprintf(aluno1->dados.nome, sizeof(aluno1->dados.nome), "Aluno1");
    aluno1->dados.n1 = 7.5;
    aluno1->dados.n2 = 8.0;
    aluno1->dados.n3 = 9.0;

    Elemen *aluno2 = (Elemen *)malloc(sizeof(Elemen));
    aluno2->dados.matricula = 456;
    snprintf(aluno2->dados.nome, sizeof(aluno2->dados.nome), "Aluno2");
    aluno2->dados.n1 = 6.0;
    aluno2->dados.n2 = 7.5;
    aluno2->dados.n3 = 8.5;

    if (*li == NULL) {
        *li = aluno1;
        aluno1->prox = aluno2;
        aluno2->prox = *li;
    }

    // Imprimindo a lista
    imprime_lista(li);

    // Liberando a lista no final
    libera_lista(li);

    return 0;
}