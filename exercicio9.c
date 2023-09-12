/*Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o 
salario atual e o tempo de serviço de cada funcionário. Os funcionários com menor salario terão um 
aumento proporcionalmente maior do que os funcionários  com um salario maior,
e conforme o tempo de serviço na empresa, cada funcionário irá receber um bônus adicional de salário*/
#include<stdio.h>

main(){

    int tempo;
    float salarioA, salarioR, bonus, salarioF;
    printf("Informe seu salario:");
    scanf("%f", &salarioA);
    printf("Informe o tempo de servico na empressa:");
    scanf("%d",&tempo);

    if(salarioA < 500){
        salarioR = salarioA * 1.25;
    }else if(salarioA > 500 && salarioA < 1000){
        salarioR = salarioA * 1.2;
    }else if(salarioA > 1000 && salarioA < 1500){
        salarioR = salarioA * 1.15;
    }else if(salarioA > 1500 && salarioA < 2000){
        salarioR = salarioA * 1.1;
    }else{
        salarioR = salarioA;
    }
    if(tempo < 1){
        bonus = 0;
    }else if(tempo >= 1 && tempo < 3){
        bonus = 100;
    }else if(tempo >= 3 && tempo < 6){
        bonus = 200;
    }else if(tempo >= 6 && tempo < 10){
        bonus = 300;
    }else{
        bonus = 500;
    }
    salarioF = salarioR + bonus;

    if(salarioF == salarioA){
        printf("Não teve aumento");
    }else{
        printf(" teve aumento");
        printf("Salario final: %f", salarioF);
    }
}