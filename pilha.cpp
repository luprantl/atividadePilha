#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

 struct Pilha {
int topo;
int capa;
float *pElem;
};

void criarpilha ( struct Pilha *p, int c ) {
p->topo = -1;
p->capa = c;
p->pElem = (float*) malloc (c * sizeof(float));
}

int main() {
}
int estavazia ( struct Pilha *p ){
   if( p-> topo == -1 )
      return 1;   
   else
      return 0;   
}

int estacheia ( struct Pilha *p ){
	if (p->topo == p->capa - 1)
		return 1;
	else
		return 0;
}

void empilhar ( struct Pilha *p, float v){

	p->topo++;
	p->pElem [p->topo] = v;
}

float desempilhar ( struct Pilha *p ){

   float aux = p->pElem [p->topo];
   p->topo--;
   return aux;

}

float retornatopo ( struct Pilha *p ){

   return p->pElem [p->topo];

}
