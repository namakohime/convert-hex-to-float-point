
#include "converte.h"

void hex_to_decimal(char* message, int start, int end);


int main()
{
	char message[16]="123456789ABCDEF";

	hex_to_decimal(message, 3, 10);

	return 0;
}

void hex_to_decimal(char* message, int start, int end){ 
	char HexInput[CharBuffer];
	char Binario[128];	
	double DecimalValue;
	float temp1;
	double temp2;
	double temp3;
	int control_temp2;
	int i = 0;
	int n = -1;
	int expo = 0;
	float mant = 0; 
	int sign;
	char PegaMantissa[expoente+1];
	char PegaCaracteristica[mantissa + 1];

	printf("%s ", HexInput);
	for(i=0 ; i < 8; i++){
		HexInput[i]=message[i+start];
	}
	
	hex_to_bin(HexInput, Binario);
	
	printf("%s ", Binario);

	for (i = 0; i < expoente; i++)
	{
		PegaMantissa[i] = Binario[i + 1];
	}
	PegaMantissa[expoente] = '\0';
	for (i = expoente; i > -1; i--)
	{

		if (PegaMantissa[i] == '1')
		{
			expo += (int)pow(2, n);
		}
		n++;
	}

	for (i = 0; i < mantissa; i++)
	{
		PegaCaracteristica[i] = Binario[i + 9];
	}
	PegaCaracteristica[mantissa] = '\0';
	if ((HexInput[2] == '8') || (HexInput[2] == '9') || (HexInput[2] == 'A') || (HexInput[2] == 'B') || (HexInput[2] == 'C') || (HexInput[2] == 'D') || (HexInput[2] == 'E') || HexInput[2] == 'F')
	{
		n = -1;
		control_temp2 = 1;
	}
	else
	{
		n = 0;
		control_temp2 = 0;
	}
	for (i = 0; i < mantissa; i++)
	{
		if (PegaCaracteristica[i] == '1')
		{
			mant += (float)pow(2, n);
		}
		n--;
	}
	if (Binario[0] == '1')
	{
		sign = 1;
		temp1 = -1;
	}
	else
	{
		sign = 0;
		temp1 = 1;
	}
	temp2 = mant + control_temp2;
	temp3 = (pow(2, (expo - 127)));
	DecimalValue = temp1*(temp2 * temp3);

	printf("%.*f\n", DBL_DIG + 40, DecimalValue);

}
