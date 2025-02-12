#include <stdio.h>
#include <stddef.h>  
#include <stdlib.h>  
#include <string.h>  

typedef struct _e {
    char k;
} E;

typedef struct _n {
    void *i;
    struct _n* p;
    struct _n* l;
    struct _n* r;
} N;

typedef int (*CMP)(void*, void*);

E* createE(char k);
int compareE(E* e1, E *e2);
void initT(N* t, E* e);
N* subtreeF(N* s);
N* subtreeL(N* s);
void subtreeI_b(N* s, N* n, CMP c);
void subtreeI_a(N* s, N* n, CMP c);
void subtreeI(N* s, void* e, CMP c);

void subtreeI(N* s, void* e, CMP c) {
    if (s == NULL || s->i == NULL) return;

    N* n = (N*) malloc(sizeof(N));
    n->i = e;

    int cmp = c(n->i, s->i);

    if (cmp < 0) {
        if (s->l != NULL) {
            subtreeI(s->l, n, c);
        } else {
            subtreeI_b(s, n, c);
        }
    } else {
        if (cmp > 0) {
            if (s->r != NULL) {
                subtreeI(s->r, n, c);
            } else {
                subtreeI_a(s, n, c);
            }
        } else {
            return;
        }
    }    
}

void initT(N* t, E* e) {
    t->i = e;
    t->p = NULL;
    t->l = NULL;
    t->r = NULL;
}

N* subtreeF(N* s) {
    if (s == NULL || s->i == NULL) return NULL;
    if (s->l) return subtreeF(s->l);
    return s;
}

N* subtreeL(N* s) {
    if (s == NULL || s->i == NULL) return NULL;
    if (s->r) return subtreeL(s->r);
    return s;
}

void subtreeI_b(N* s, N* n, CMP c) {
    if (s == NULL || s->i == NULL) return;

    if (s->l != NULL) {
        N* rm;
        rm = subtreeL(s->l);
        rm->r = n; 
        n->p = rm;
    } else {
        s->l = n;
        n->p = s; 
    }
}

void subtreeI_a(N* s, N* n, CMP c) {
    if (s == NULL || s->i == NULL) return;

    if (s->r != NULL) {
        N* lm;
        lm = subtreeF(s->r);
        lm->l = n;
        n->p = lm;
    } else {
        s->r = n;
        n->p = s;
    }    
}

E* createE(char k) {
    E* e = (E*) malloc(sizeof(E));
    e->k = k;
    return e;
}

int compareE(E* n, E *r) {
    if (n->k < r->k) {
        return -1;
    } else if (n->k == r->k) {
        return 0;
    } else {
        return +1;
    }
}

int main() {
    N* t = (N*) malloc(sizeof(N));

    E* A = createE('A');
    E* B = createE('B');
    E* C = createE('C');
    E* D = createE('D');

    initT(t, B);
    
    subtreeI(t, C, (CMP)compareE);
    subtreeI(t, A, (CMP)compareE);
    subtreeI(t, D, (CMP)compareE);

    free(A);
    
    return 0;
}

