  
#include <bits/stdc++.h>
using namespace std;

int main () {
           
 char name[50];
cout<<"Digite seu nome: ";

cin>>name;
puts(name);

int num;
cout<<"Digite a sua senha : ";
cin>>num;

int valor;
cout<<"Escolha uma opcao de 1(músicas) ou 2(desenhos) : ";
cin>>valor;

  switch ( valor)
  {
    case 1 :
    printf ("Musicas\n");
    
    break;
    
    case 2 :
    printf ("Desenhos\n");
    break;
  
    default :
    printf ("opcao invalida!\n");
  }
  
  getch();
  return 0;
} 
  