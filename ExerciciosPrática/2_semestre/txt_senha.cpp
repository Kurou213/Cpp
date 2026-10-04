/*Nome: txt_senha.cpp
Autor: Vinicius Lima
Data: 15/06/2026
Descrição: Programa que o usuario abre um arquivo e le se o conteudo é a senha criada por ele.
*/
#include <stdio.h>
#include <string.h>

//criar arquivo com a senha
FILE *arquivo;
char senha[20];


int main() {
    
    printf("Digite a senha: ");
    scanf("%s", senha);
    arquivo = fopen("senha.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo.\n");
        return 1;
    }
    fprintf(arquivo, "%s", senha);
    fclose(arquivo);

    //verificar se a senha esta correta
    char senha_lida[20];
    arquivo = fopen("senha.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fscanf(arquivo, "%s", senha_lida);
    fclose(arquivo);
    if (strcmp(senha, senha_lida) == 0){
        printf("Senha correta!\n");
    } else {
        printf("Senha incorreta!\n");
    }
    return 0;

}
