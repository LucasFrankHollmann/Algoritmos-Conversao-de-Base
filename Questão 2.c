//Ana Paula Bernardes & Lucas Frank Hollmann
//Questão 2.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char bi[1234], bu[1234], result[1234], restult[1234], op; //bi = primeiro número binario, bu = segundo numero binario, result = resultado da operação em ordem reversa, restult = resultado da operação.
int i, j, dec, dec2, decr, menos; //dec e dec2 = bi e bu convertidos em decimal, decr = resultado da operação em decimal, menos = indica se o resultado é negativo.

int main()
{
	scanf("%s %c %s", bi, &op, bu);
	getchar();
	while(op!='#')
	{
		
		memset(result, 0, sizeof(char)*1324); 
		memset(restult, 0, sizeof(char)*1234); //zera as strings do resultado;
		j=0;
		dec=0;
		menos = 0;
		//conversão dos binarios em decimal;
		for(i=strlen(bi)-1;i>=0;i--)
		{
			if(bi[i]=='-')
				dec*=-1;
			else
			{
				if(bi[i]=='1')
					bi[i]=1;
				if(bi[i]=='0')
					bi[i]=0;
				dec = dec + bi[i]*pow(2,j);
			}
			j++;
		}
		j=0;
		dec2=0;
		for(i=strlen(bu)-1;i>=0;i--)
		{
			if(bu[i]=='-')
				dec2*=-1;
			else
			{
				if(bu[i]=='1')
					bu[i]=1;
				if(bu[i]=='0')
					bu[i]=0;
				dec2 = dec2 + bu[i]*pow(2,j);
			}
			j++;
		}
		//fim da conversão.
		
		
		//calcula o resultado da operação;
		if(op=='+')
			decr = dec+dec2;
		else if(op=='-')
			decr = dec-dec2;
		else if(op=='*')
			decr = dec*dec2;
		else if(op=='/')
			decr = dec/dec2;
		//printf("%d\n", decr);
		
		//conversão do resultado decimal em binário, porém a string sai em ordem reversa.
		if(decr <0)
		{
			menos = 1;
			decr=decr*-1;
		}
		i=0;
		
		result[0]='0';
		while(decr!=0)
		{
			result[i] = decr%2;
			decr=decr/2;
			if(result[i]==1)
				result[i]='1';
			else
				result[i]='0';
			i++;
		}
		if(menos)
			result[i]='-';
		
		
		//fim da conversão.
		j=0;
		
		//copia a string resultante para outra, porem invertendo a ordem.
		for(i=strlen(result)-1;i>=0;i--)
		{
			restult[j] = result[i];
			j++;
		}
		printf("%s\n", restult);
		scanf("%s %c %s", bi, &op, bu);
		getchar();
		//fim
	}
	return 0;
}
