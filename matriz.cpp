#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;

void  imprimir_menu ();
void leer_opcion(int &opt);
void scanVector(int*ptr, int size);

void printMatrix(int*ptr,int size1, int size2);
void printMatrix(int arr[3][3]);
void suma(int*ptr2b, int*ptr2a, int*prtC, int z);
void resta(int*ptr2b, int*ptr2a,int*prtC, int z);
void multiplicacion(int*ptr2b, int*ptr2,int*ptr,  int &L);
void Fac(int*ptr, int*ptr2b, int t, int c, int &x, int &acm);
int main(){
int opt, x=3;
float r,w;
char repetir;

int a[3][3]={{0,0,0},{0,0,0},{0,0,0}};
int b[3][3]={{0,0,0},{0,0,0},{0,0,0}};
int c[3][3]={{0,0,0},{0,0,0},{0,0,0}};

int *ptrC=&c[0][0];;
int *ptr2a=&a[0][0];
int *ptr2b=&b[0][0];
	printf("\nDigite los valores de la matriz 1\n");
	scanVector(ptr2a,3);
    printf("\nDigite los valores de la matriz 2\n");
    scanVector(ptr2b,3);

 printf("\n \t\tVisualizacion en forma de Matriz 1\n\n\n");
 printMatrix(ptr2a,3,3);
 printf("\n \t\tVisualizacion en forma de Matriz 2\n\n\n");
 printMatrix(ptr2b,3,3);
 do{
    imprimir_menu ();
    leer_opcion(opt);
switch(opt){
	case 1:
	printf("\n\t\t\t \tSuma\n\n\n");
    suma(ptrC, ptr2b, ptr2a,3);
    break;

 	case 2:
     printf("\n\t\t\t\tResta\n\n\n");
     resta(ptrC, ptr2b, ptr2a,3);
    break;

	case 3:
    printf("\n \t\t\tMultiplicacion\n\n");
    multiplicacion(ptr2a, ptr2b, ptrC,x);
     break;

    default:printf("\n opcion no valida.");
    break;
}
printf("\n\nDesea hacer otra operacion? S N \n");
repetir=getch();
}while((repetir=='S')||(repetir=='s'));
}
void scanVector(int *ptr,int size){
	int valor;
	int i=0;
    for (int i=0; i<size; i++){
	for(int j=0; j<size ; j++){
	printf("[%d][%d]: \n",i,j);
	scanf("%d",&valor);
   *(ptr+j+(i*size))=valor;
}
}}
void printMatrix(int *ptr,int size1, int size2){
    int i=0;
	for(int i=0; i<size1; i++){
    int j=0;
    for(int j=0; j<size2 ; j++){
    printf("\t\t%d ",*(ptr+j+(i*size1)));
}
    printf("\t\t\n\n");
}
}
void printMatrix(int arr[3][3]){
    int i=0;
	for(int i=0; i<3; i++){
    int j=0;
    for(int j=0; j<3; j++){
    printf("%d  ",arr[i][j]);
}
    printf("\n");
}
}
void suma(int*ptr, int*ptr2b, int*ptr2, int L){

int suma=0;
    int i=0;
	for(int i=0; i<L; i++){
    int j=0;
    for(int j=0; j<L; j++){
     *(ptr+j+(i*L))=*(ptr2+j+(i*L))+*(ptr2b+j+(i*L));
    printf("\t\t%d  ",*(ptr+j+(i*L)));
}
    printf("\t\t\n\n");
}
}
void resta(int*ptr,int*ptr2b, int*ptr2, int L){
int suma=0;
    int i=0;
	for(int i=0; i<L; i++){
    int j=0;
    for(int j=0; j<L; j++){
     *(ptr+j+(i*L))=*(ptr2+j+(i*L))-*(ptr2b+j+(i*L));
    printf("\t\t%d  ",*(ptr+j+(i*L)));
}
    printf("\t\t\n\n");
}
}
void multiplicacion(int *ptr2, int *ptr2b, int *ptr, int &L){
  int v=0;
  int i=0;
  for(int i=0; i<L; i++){
  int j=0;
   for(int j=0; j<L;j++){
    Fac(ptr2,ptr2b,i,j,L,v);
    *(ptr+j+(i*L))=v;
    printf("\t\t%d   ",*(ptr+j+(i*L)));
}
    printf("\t\t\n\n");
}
}
void Fac(int *ptr2, int *ptr2b, int t, int c, int &x, int &acm){
	acm=0 ;
	int i=0;
	for(int i=0; i<x; i++){
    acm+=(*(ptr2+i+(t*x)))*(*(ptr2b+c+(i*x)));
	}
}
void imprimir_menu(){
 printf("1.-suma de matrices\n\n");
 printf("2.-resta de matrices\n\n");
 printf("3.-multiplicacion de matrices\n\n");
 }
void leer_opcion(int& opt){
printf("\nIntroduce una opcion: ");
scanf("%d",&opt);
}