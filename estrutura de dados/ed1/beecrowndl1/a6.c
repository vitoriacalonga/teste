#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario, novosalario, aumento;
    int percentual;
    scanf("%f", &salario);

    if(salario >= 0 && salario <= 400.00){
        aumento = salario*0.15;
        novosalario = salario + aumento;
        percentual = 15;
    }else if(salario >= 400.01 && salario <= 800.00){
        aumento = salario*0.12;
        novosalario = salario + aumento;
        percentual = 12;
    }else if(salario >= 800.01 && salario <= 1200.00){
        aumento = salario*0.10;
        novosalario = salario + aumento;
        percentual = 10;
    }else if(salario >= 1200.01 && salario <= 2000.00){
        aumento = salario*0.07;
        novosalario = salario + aumento;
        percentual = 7;
    }else if(salario > 2000.00){
        aumento = salario*0.04;
        novosalario = salario + aumento;
        percentual = 4;
    }
    
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", novosalario,aumento,percentual);

    return 0;
}