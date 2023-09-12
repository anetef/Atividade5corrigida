/*Ao final, mostrar a média do aluno e  indicar se o aluno foi aprovado ou reprovado.
 A nota para aprovação deve ser igual ou  superior a 7.0 pontos.*/
#include<stdio.h>
//Faça um algoritmo que calcule a media ponderada das notas de 3 provas
int main(){

    float nota1, nota2, nota3, media, x;

    printf("Digite as notas ");
    printf("\nNota 1: ");
    scanf("%f",&nota1);
    printf("Nota 2: ");
    scanf("%f",&nota2);
    printf("Nota 3: ");
    scanf("%f",&nota3);

    //. A primeira e a segunda prova tem peso 1 e a terceira tem peso 2.
    
    x = nota1 * 1 + nota2 *1 + nota3 *2;
    media = x /4;
    printf("Media Ponderada:%2.f", media);
    if(media >= 7){
        printf("\nAprovado");
    }else {
        printf("\nReprovado");
    }

}