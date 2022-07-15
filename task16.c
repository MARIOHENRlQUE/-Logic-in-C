/*O mundo das finanças é fascinante. Dentro deste contexto, existem diversas casas de câmbio que realizam compra e venda de moedas estrangeiras.
Desse modo, elabore um programa que receba o valor da cotação do dólar e o valor em reais e que apresente o valor em dólares.*/

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
