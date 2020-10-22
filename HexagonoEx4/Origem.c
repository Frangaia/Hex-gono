#include <stdio.h>
#include <math.h>

void calc_hexa(float l, float* area, float* per) { // calculo do perimetro e da area do lado do haxagono
	*per = 6 * l; // formula para calculo do perimetro
	*area = (3 * pow(l, 2) * sqrt(3)) / 2; // formula para calculo da area do hexagono
}

int main() {

	float lado, area, perimetro; // declaração das variáveis

	printf_s("\n Digite um valor para o lado do Hexagono: ");
	scanf_s("%f", &lado);

	while (lado > 0) { // se o valor do lado for maior que 0, segue as seguintes instruções, laço de repetição

		calc_hexa(lado, &area, &perimetro); 
		printf_s("\n\n A area e o perimetro do hexagono de lado %.2f = \n\n AREA = %f\n\n PERIMETRO = %f", lado, area, perimetro); // impressão dos valores

		printf_s("\n\n\n Digite o lado do Hexagono: "); // continuação até ser digitado um valor 0 ou negativo
		scanf_s("%f", &lado);
	}

	system("pause");
	return 0;
}