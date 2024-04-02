#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int Cuadrado(int numero);
void Cuadrado1();
void Direcciones(int num);
void invertir( int x, int y);
void orden(int a, int b);
int main(){
   int num, num2,cuadrado;
     printf("numero que quiere elevar al cuadrado");
    scanf("%d", &num);

    cuadrado=Cuadrado(num);
    printf("el cuadrado de el numero %d\n",cuadrado);
    Direcciones(num);
    Cuadrado1();
    int x,y;
    printf("ingrese un numero");
    scanf("%d", &x);
printf("ingrese un numero");
    scanf("%d", &y);

    invertir( x,y);
     orden(x,y);
 


return 0;
}
int Cuadrado(int numero){
return numero*numero;
}
void Cuadrado1(){
   srand(time(NULL));
   int Num;
  Num = rand() % 10;
   printf("el numero es %d\n",Num);
   Num=Num*Num;
   printf("su cuadrado es %d\n", Num);
}
void Direcciones(int num){
   printf(" dirreccion de memoria de la variable %d\n", &num);
   printf("contenido de la variable %d\n", num);
}
void invertir( int x, int y){
    printf("variable x %d\n",x);
    printf("variable y %d\n",y);
    int aux;
    aux=x;
    x=y;
    y=x;
    printf("Realizamos al cambio \n");
    printf("variable x %d\n",x);
    printf("variable y %d\n",y);
}
void orden(int a, int b){
   int mayor,menor;
  if(a>b){
    mayor=a;
    menor=b;
  }else{
    mayor=b;
    menor=a;
  };
 printf("el mayor es %d \n",mayor);
printf("el menor es %d \n",menor);
}