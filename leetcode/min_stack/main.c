#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
    int value;
    int min;
    struct nodo *next;
} Nodo;

typedef struct stack {
    Nodo *head;
} MinStack;

Nodo *newNodo(int val, int current_min) {
    Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));
    nodo->value = val;
    nodo->min = current_min;
    nodo->next = NULL;
    return nodo;
}

void destroyNodo(Nodo *n) {
    free(n);
}

MinStack *minStackCreate() {
    MinStack *s = (MinStack *)malloc(sizeof(MinStack));
    s->head = NULL;
    return s;
}

void minStackPush(MinStack *obj, int val) {
    int nuevo_min;
    
    if (obj->head == NULL) {
        nuevo_min = val;
    } else {
        nuevo_min = (val < obj->head->min) ? val : obj->head->min;
    }
    
    Nodo *nodo = newNodo(val, nuevo_min);
    nodo->next = obj->head;
    obj->head = nodo;
}

void minStackPop(MinStack *obj) {
    if (obj->head != NULL) {
        Nodo *rmnodo = obj->head;
        obj->head = obj->head->next;
        destroyNodo(rmnodo);
    }
}

int minStackTop(MinStack *obj) {
    if (obj->head != NULL) {
        return obj->head->value;
    }
    return 0;
}

int minStackGetMin(MinStack *obj) {
    if (obj->head == NULL) {
        return 0; 
    }
    return obj->head->min;
}

void minStackFree(MinStack *obj) {
    while (obj->head != NULL) {
        minStackPop(obj);
    }
    free(obj);
}

int main() {
    MinStack *minStack = minStackCreate();
    
    minStackPush(minStack, -2);
    minStackPush(minStack, 0);
    minStackPush(minStack, -3);
    
    printf("%d get min\n", minStackGetMin(minStack));   
    minStackPop(minStack);
    printf("%d top\n", minStackTop(minStack));
    
    printf("%d get min\n", minStackGetMin(minStack));    
    minStackFree(minStack);
    return 0;
}
