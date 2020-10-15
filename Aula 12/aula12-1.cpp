
int main (void)
{
 int B;
 int *A; // '*' indica que é uma variável do tipo ponteiro
   // ponteiro = endereço de memoria
   // int B; - suponha que ela seja criada no en
   //          endereço de memoria B7A12
   // *A pode receber o endereço de B
   // A = &B;  // A esta recebendo endereço de B
   // Dentro de A irá conter o valor de B7A12

 FILE *pont_arq;  // ponteiro para arquivo
 int a = 10;
 float b = 4.5;

 setlocale(LC_ALL, "Portuguese");

  pont_arq = fopen("arquivoTeste.txt","w");
if(pont_arq == NULL)
  {
   printf("Erro na criaçao/abertura do arquivo");
 }
 else
 {
  printf("Arquivo criado com sucesso!!!");

  fprintf(pont_arq, "oioioioi - %i - %f", a, b);

  fclose(pont_arq);
 }
 system("pause");

}


/********************************************************************
 Modos de abertura de arquivos
”r” Abre o arquivo somente para leitura, a partir do início. O arquivo deve existir.
”w” Cria um arquivo vazio para escrita. Se já havia o arquivo, ele é perdido.
”a” Adiciona no final do arquivo. Se o arquivo não existir, a função o cria.
”r+” Abre o arquivo para leitura e escrita, a partir do início. O arquivo deve existir.
”w+” Cria um arquivo vazio para leitura e escrita. Se já havia o arquivo, ele é perdido.
”a+” Abre para adição ou leitura no final do arquivo. Se o arquivo não existir, a função o cria.
*********************************************************/
