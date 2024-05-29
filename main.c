#include <stdio.h>


int multi3(int a, int b){

	for(int i = 0; i < b; i++){
	
		a = a * 3;
	}

	return a;
}


int main(){

	int num, n;

	printf("Esse programa multiplica um número por 3 N vezes\n\n");

	printf("Digite o número inicial: ");
	scanf("%d", &num);

	printf("\nDigite o valor de N: ");
	scanf("%d", &n);
	
	if( n <= 0){
		printf("Valor de N inválido, apenas inteiros positivos são aceitos");
	}
	else{
		int ans = multi3(num, n);
		printf("\nO resultado é de: %d\n\n", ans);
	}

	return 0;
}
