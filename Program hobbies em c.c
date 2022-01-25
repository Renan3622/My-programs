
#include<stdio.h>
#include<ctype.h>
int main(){
  int i,j,x,y,num,valor;
  char ch='*';
  char name[50];
  printf("__________________________________________________\n");
  printf("Exemplo sistema logistico em 'C'\n", ch);
  printf("Digite o seu usuário : ");
  scanf("%s",&name);
  printf("Digite a sua senha : ");
  scanf("%e",&num);
  printf("Bem vindo \n Funcionário:%s \n\n",name);
  printf("Escolha uma opcao de 1 a 5 : ");
  printf ("\n 1.expedição \n 2.recebimento \n 3.picking \n 4.armazenamento \n 5.inventario");
  scanf("%d",&valor);

  switch ( valor)
  {
    case 1 :
    printf ("Expedição\n");
    break;
    
    case 2 :
    printf ("Recebimento\n");
    break;
    
    case 3 :
    printf ("picking\n");
    break;
    
    case 4 :
    printf ("armazenamento\n");
    break;
    
    case 5:
    printf ("inventario\n");
    break;
  
    default :
    printf ("opcao invalida!\n");
    
  printf("__________________________________________________\n");
  scanf("%i", &x);
  printf("\n");
    for(i=1;i<=x;i++){
      for(j=1;j<=x;j++){
                if(i == 1 || j == 1 || j == x || i == x)
                    printf(" %c", ch);
                else
                    printf("  ");
      }
      printf("\n");
            
  }
  
  getch();
  return 0;
} 
  }
  
