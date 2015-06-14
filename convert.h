#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <float.h>

#define CharBuffer 9 // 32 bits
#define Bits 32 // 32 bits
#define expoente 8
#define mantissa 23

#ifndef converte_h__
#define converte_h__
#define Bits 32 // 32 bits


void hex_to_bin(char *vector, char *VectorBinario)
{
	char converitdo[Bits + 1]; // +1 to add end of string
	int length = strlen(vector); // get length of HexInput
	int i = 0;
	int n = 0;
	for (i = 0; i < length; i++ )
	{
		//printf("%c " ,vector[i]);
		if (vector[i] == '0')
		{
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '0';
		}
		else if (vector[i] == '1')
		{
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '1';
		}
		else if (vector[i] == '2')
		{
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '0';
			
		}
		else if (vector[i] == '3')
		{
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '1';
		}
		else if (vector[i] == '4')
		{
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '0';
		}
		else if (vector[i] == '5')
		{
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '1';
		}
		else if (vector[i] == '6')
		{
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '0';
		}
		else if (vector[i] == '7')
		{
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '1';
		}
		else if (vector[i] == '8')
		{
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '0';
		}
		else if (vector[i] == '9')
		{
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '1';
		}
		else if (vector[i] == 'A')
		{
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '0';
		}
		else if (vector[i] == 'B')
		{
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '1';
		}
		else if (vector[i] == 'C')
		{
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '0';
		}
		else if (vector[i] == 'D')
		{
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '0';
			n++;
			converitdo[i + n] = '1';
		}
		else if (vector[i] == 'E')
		{
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '0';
		}
		else if (vector[i] == 'F')
		{
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '1';
			n++;
			converitdo[i + n] = '1';
		}else{
			printf("err");
		}
	}
	converitdo[length*4] = '\0'; // end of string
	strcpy((char*)VectorBinario, converitdo);
	//*VectorBinario = converitdo; // vector binario on main();

}


#endif // converte_h__
