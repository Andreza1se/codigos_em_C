#include<stdio.h>
#include<stdlib.h>

typedef struct arv{
    int dado;
    struct arv* esq;
    struct arv* dir;
}Arv;

Arv* cria_vazia(void){
    return NULL;
}

Arv* cria(char c, Arv* sae, Arv* sad){
    Arv* arvere = (Arv*) malloc(sizeof(Arv));

    arvere ->dado =  c;
    arvere ->esq = sae;
    arvere ->dir = sad;
return arvere;
}

int vazia(Arv* a){
        return a == NULL;    
}

Arv* libera(Arv* a){
    if(!vazia(a)){
        libera(a->esq);
        libera(a->dir);
        free(a);
    }
    return NULL;

}

int pertence(Arv* a, char c){
    if(vazia(a)){
        return 0; //nao encontrou a arvore vazia 
    }else{
        return a->dado == c|| pertence(a->esq,c)||pertence(a->dir,c);
    }
}

void imprime(Arv* a){
    if(!vazia(a)){
        printf("%c ", a->dado); // mostra a raiz
        imprime(a->esq); // mostra sae
        imprime(a->dir); // mostra sad
    }
}
int main() {
    Arv* arvore = cria('a',
                        cria('b',
                            cria('d', cria_vazia(), cria_vazia()),
                            cria('e', cria_vazia(), cria_vazia())
                        ),
                        cria('c',
                            cria('f', cria_vazia(), cria_vazia()),
                            cria('g', cria_vazia(), cria_vazia())
                        )
                    );

    // Imprime a árvore em pré-ordem (raiz, sae, sad)
    printf("arvore em pre-ordem: ");
    imprime(arvore);
    printf("\n");

    // Verifica se o caractere 'e' pertence à árvore
    char caractere = 'e';
    if (pertence(arvore, caractere)) {
        printf("%c pertence a arvore.\n", caractere);
    } else {
        printf("%c nao pertence a arvore.\n", caractere);
    }

    // Libera a árvore
    arvore = libera(arvore);

    return 0;
}