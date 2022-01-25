import java.util.Scanner;

class ScannerClass {
    
 public static void main(String args[]) {
  
  System.out.println("Programa Hobbies Em Java");
   
  Scanner input = new Scanner(System.in);
  System.out.println("Usuario");
  String name = input.nextLine();
  
  System.out.println("Senha");
  int pas = input.nextInt();

  System.out.println("Bem-vindo \n " + name);
  
  System.out.println("Escolha uma opcao de a 1 a 2");
  System.out.println("\n 1.Musicas \n 2.Desenhos");
  int op = input.nextInt();
  
  switch (op) {
   case 1:
    System.out.println("Musica 1");
    System.out.println("Musica 2");
    System.out.println("Musica 3");
    System.out.println("Musica 4");
    System.out.println("Musica 5");
    break;
   case 2:
    System.out.println("Desenhos");
    break;
   default:
    System.out.println("x is neither 1 nor 2");
    break;
  }
 }
}
 
 
