//programa

#include <stdio.h>

int main() {
	
    float salario,faixa1,faixa2,faixa3,inss,liquido;
    
    faixa1= 1040.22;
    faixa2= 1733.70;
    faixa3= 3467.40;

    printf("Digite o salario:\n");
    scanf("%f", &salario);
    
     if(salario <= faixa1) {
        inss = salario * 0.08;
        printf("INSS: %.2f\n", inss);
    }
  	else if(salario <= faixa2){
	  
  	 inss = salario * 0.09;
  	 printf("INSS: %.2f\n", inss);
  }
  else if(salario <= faixa3){
  	 inss = salario * 0.11;
  	 printf("INSS: %.2f\n", inss);
  	 
  }
  else {
  	inss = 381.41;
  	printf("INSS: %.2f\n", inss);
  }
   liquido = salario - inss;
   printf("Salario liquido: %.2f", liquido);
  	 
  return 0;

}

