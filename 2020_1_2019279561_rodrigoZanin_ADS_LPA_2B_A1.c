/*Dadas essas caracter�sticas, construir um algoritmo para determinar a quantidade de c�dulas,
por valor de face, necess�rias para compor o valor de saque solicitado por um cliente.
O valor m�nimo para saque � de R$ 10,00 e o valor m�ximo para saque � de R$ 850,00.
O terminal de auto-atendimento manuseia c�dulas com valor de face de R$ 100,00, R$ 50,00,
R$ 20,00, R$ 10,00, R$ 5,00 e R$ 2,00.
O algoritmo dever�:

? Receber um valor para saque;
? Validar o valor recebido, de acordo com a regra estipulada;
? Solicitar um novo valor, at� que o valor solicitado seja v�lido;
? Exibir a quantidade de c�dulas de cada valor de face para compor o valor de
saque;
? Exibir o somat�rio do valor decomposto, que dever� ser igual ao valor solicitado
? Permitir nova solicita��o de saque.*/

# include <stdio.h>
# include <conio.h>

int main (void)
{
	float vConta, vSaque;
	
	printf ("Informe o valor que est� na conta\n");
	scanf ("%f",&vConta);
	printf ("R$ %.2f",vConta);
	
	getch ();
	return 0;
}
