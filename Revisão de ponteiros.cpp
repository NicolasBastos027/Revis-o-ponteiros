#include <iostream>
using namespace std;

int main() { 

  //obrigatório usar o asterisco para declarar ponteiros
  // int *ponteiro;
  //tipo_da_variavel *nome_da_variavel

  //o * vai informar ao compilador que vai armazernar um endereço de memória 

  // operações de incrementação ou com os valores apontados por esse ponteiro 
  
  //o * no int* somente vai apontar para outro inteiro 
  //Esse ponteiro guarda  o endereço de memória de um inteiro

  
  //ponteiros apontam para uma posição de memória
  //cuidado: ponteiros não inicializados apontam para um lugar indefinido 
  //exemplo int *p;
  //exemplo certo: int *p = NULL;

  //SEMPRE INICIALIZAR O PONTEIRO ANTES DE SEREM USADOS

  int c = 10;
  int *p ;
  p = &c; //indica que está apontando para o endereço de memória da variavel c
   *p=12; //atribui um novo valor a posição de memória apontada por p c =12;
  
  cout << "conteudo apontado por p:" << *p << "\n";
  cout << "conteudo de c:"<< c << "\n";
  //atribui ao ponteiro o endereço da variavel int
  // p = c; aponta para a variavel c, não retorna nada, não é um ponteiro

  //outro exemplo:
  
  //int *p;
  //int *p1
  //p1 = p; conteudo de p1 vai ser ingual ao conteudo apontado por p

  //p -> c
  //c =10
  //p1 -> p 
  //p->c
  //p1 -> p
  
  //**p1 (ponteiro de ponteiro)
  //** *p (ponteiro de ponteiro de ponteiro)

  //conversão de int para float *((float*)p);
 //*p = *p1; as variaveis que eles estão apontando serão iguais

  //*p = (*p) * 10; multiplica o conteudo apontado por p por 10
  // if (p == p1) verifica se apontam para a mesma variavel 
  //if (*p == *p1) verifica se o conteudo apontado por p é igual ao conteudo apontado por p1 

  //converter ponteiro void para int *((int*)p)  
  //converter ponteiro void para float *((float*)p)

  //array ja tem espaço na memoria, é melhor de trabalhar com ponteiros e arrays
  int vet[5]= {1,2,3,4,5};
  int *p0;

  p0 = vet; //p aponta local na memoria do vetor, aponta para todos os espaços de memoria do vetor
  cout << "Terceiro elemento do vetor: " << p0[2] << "\n";
  //ou 
  cout << "Terceiro elemento do vetor: " << *(p0+2) << "\n";

  //*p é equivalente a vet[0]
  //vet[indice] é equivalente a *(p+indice)
  //vet é equivalente a &vet[0];
  //&vet[indice] é equivalente a (vet+indice)

  //podemos usar o operador seta "->" 
  //ponteiro -> nome_campo
  // int y ;
  // struct ponto *ps;
  // ps -> y =20;

  int x = 10;
  int *p1 = &x;
  int **p2 = &p1; // p2 aponta pra p1 que aponta pra x, então o valor de p2 é 10/ os * indica quantos niveis ele irá apontar, se p2 tivesse assim : *p2 = &p1, e o valor de p2 seria x
  
}