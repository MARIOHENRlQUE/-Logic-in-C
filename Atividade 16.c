/*O mundo das finan�as � fascinante. Dentro deste contexto, existem diversas casas de c�mbio que realizam compra e venda de moedas estrangeiras.
Desse modo, elabore um programa que receba o valor da cota��o do d�lar e o valor em reais e que apresente o valor em d�lares.*/

#include <stdio.h>
#include <stdlib.h>
float valueConversion(float, float);
int main(){
	float dollarValue = 0, realValue = 0;
	printf("Write the current dollar value:\t");
	scanf("%f", &dollarValue);
	printf("Write the conversion value in real:\t");
	scanf("%f", &realValue);
	printf("Conversion of conversion is %.2f", valueConversion(dollarValue, realValue));
}
float valueConversion(float copyDollarValue, float copyRealValue){
	float valueResult = 0;
	valueResult = (copyRealValue / copyDollarValue);
	return valueResult;
}
