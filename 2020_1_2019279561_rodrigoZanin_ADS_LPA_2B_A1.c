/*Dadas essas características, construir um algoritmo para determinar a quantidade de cédulas,
por valor de face, necessárias para compor o valor de saque solicitado por um cliente.
O valor mínimo para saque é de R$ 10,00 e o valor máximo para saque é de R$ 850,00.
O terminal de auto-atendimento manuseia cédulas com valor de face de R$ 100,00, R$ 50,00,
R$ 20,00, R$ 10,00, R$ 5,00 e R$ 2,00.
O algoritmo deverá:

? Receber um valor para saque;
? Validar o valor recebido, de acordo com a regra estipulada;
? Solicitar um novo valor, até que o valor solicitado seja válido;
? Exibir a quantidade de cédulas de cada valor de face para compor o valor de
saque;
? Exibir o somatório do valor decomposto, que deverá ser igual ao valor solicitado
? Permitir nova solicitação de saque.*/

# include <stdio.h>
# include <conio.h>

int main (void)
{
	float vConta, vSaque;
	
	printf ("Informe o valor que está na conta\n");
	scanf ("%f",&vConta);
	printf ("R$ %.2f",vConta);
	
	getch ();
	return 0;
}
