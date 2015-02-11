#include <stdio.h>
#include <stdlib.h>

#include "intLinkedList.h"

struct s_nodo{
    int key ;
    char scelta[20];
    struct s_nodo *next;
    int tempo;
}; 
typedef struct s_nodo nodo;
typedef struct nodo *puntanodo;
 puntanodo ptesta;
    puntanodo pnodo;

int main(int argc, char** argv) {
    
    
    intLinkedList lista = NULL;
    int key;
    char scelta = 's';
    
    while(scelta == 's') {
        printf("\nInserisci un numero intero: ");
        scanf("%d", &key);
        
        lista = insertAtBeginning(lista, key);
        if(lista =! NULL)
        { 
            fprintf(stderr, "Impossibile aggiungere un nuovo elemento\n");
            exit(-1);
        }
        
        while(getchar() != '\n'); // Line buffered input
        printf("Vuoi aggiungere un altro elemento? (s/n) ");
        scelta = getchar();
        while(getchar() != '\n'); // Line buffered input
    }
    
    printList(lista);
    lista = empty(lista);
    
    return (EXIT_SUCCESS);
}

