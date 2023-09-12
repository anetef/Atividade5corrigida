//Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar.
//As condições para aposentadoria são: • Ter pelo menos 65 anos;
//• Ou ter trabalhado pelo menos 30 anos;, • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos
#include<stdio.h>
main(){

    int idade, temps;
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Informe tempo de servico: ");
    scanf("%d",&temps);

    if(idade>=65 || temps>=30){
        printf("Pode se aposentar");
    }else if(idade>=60 && temps>=25){
        printf("Pode se aposentar");
    }else{
        printf("Nao pode aposentar");
    }
        
 }