//Ana Paula Bernardes & Lucas Frank Hollmann
//Questão 5.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

char bi[17], bu[17], result[17], restult[17], op, strong[3], fon; //bi = primeiro número binario, bu = segundo numero binario, result = resultado da operação em ordem reversa, restult = resultado da operação.
int i, j, dec, dec2, decr, menos, nha; //dec e dec2 = bi e bu convertidos em decimal, decr = resultado da operação em decimal, menos = indica se o resultado é negativo.

int main()
{
	scanf("%s", strong);
	getchar();
	
	while(strong[0]!='#' && strong[1]!='#')
	{
		scanf("%s %c %s", bi, &op, bu);
		getchar();
		
		memset(result, 0, sizeof(char)*17);  //zera as strings do resultado;
		j=0;
		dec=0;
		menos = 0;
		//conversão dos binarios em decimal;
		if(strong[0] == 'M' && strong[1]=='S')
		{
			j=0;
			for(i=15;i>=1;i--)
			{
				if(bi[i]=='1')
					bi[i]=1;
				else
					bi[i]=0;
				dec+= bi[i]*pow(2,j++);
			}
			if(bi[0] == '1')
				dec = dec*-1;
			//printf("%d\n", dec);
		}
		//Fim da conversão com "MS"
		
		//Conversão em decimal com complemento de 1
		if(strong[0] == 'C' && strong[1] =='1')
		{
			j=0;
			if(bi[0] == '1')
			{
				for(i=15;i>=1;i--)
				{
					if(bi[i]=='1')
						bi[i]=0;
					else
						bi[i]=1;
					dec+= bi[i]*pow(2,j++);
				}
				dec=dec*-1;
			}
			else
			{
				for(i=15;i>=1;i--)
				{
					if(bi[i]=='1')
						bi[i]=1;
					else
						bi[i]=0;
					dec+= bi[i]*pow(2,j++);
				}
			}
			//printf("%d\n", dec);
		}
		//Fim da conversão com complemento de 1
		
		//Conversão em decimal com complemento de 2
		if(strong[0] == 'C' && strong[1] =='2')
		{
			j=0;
			if(bi[0] == '1')
			{
				fon=0;
				for(i=15;i>=1;i--)
				{
					if(!fon)
					{
						if(bi[i]=='1')
						{
							fon=1;
							bi[i]=1;
						}
						else
							bi[i]=0;
					}
					else
					{
						if(bi[i]=='1')
							bi[i]=0;
						else
							bi[i]=1;
					}
					dec+= bi[i]*pow(2,j++);
				}
				dec=dec*-1;
			}
			else
			{
				for(i=15;i>=1;i--)
				{
					if(bi[i]=='1')
						bi[i]=1;
					else
						bi[i]=0;
					dec+= bi[i]*pow(2,j++);
				}
			}
			//printf("%d\n", dec);
		}
		//Fooooooooooooooooooooooooooooooooooooooooooooon
		dec2=0;
		if(strong[0] == 'M' && strong[1]=='S')
		{
			j=0;
			for(i=15;i>=1;i--)
			{
				if(bu[i]=='1')
					bu[i]=1;
				else
					bu[i]=0;
				dec2+= bu[i]*pow(2,j++);
			}
			if(bi[0] == '1')
				dec2 = dec2*-1;
			//printf("%d\n", dec2);
		}
		//Fim da conversão com "MS"
		
		//Conversão em decimal com complemento de 1
		if(strong[0] == 'C' && strong[1] =='1')
		{
			j=0;
			if(bu[0] == '1')
			{
				for(i=15;i>=1;i--)
				{
					if(bu[i]=='1')
						bu[i]=0;
					else
						bu[i]=1;
					dec2+= bu[i]*pow(2,j++);
				}
				dec2=dec2*-1;
			}
			else
			{
				for(i=15;i>=1;i--)
				{
					if(bu[i]=='1')
						bu[i]=1;
					else
						bu[i]=0;
					dec2+= bu[i]*pow(2,j++);
				}
			}
			//printf("%d\n", dec2);
		}
		//Fim da conversão com complemento de 1
		
		//Conversão em decimal com complemento de 2
		if(strong[0] == 'C' && strong[1] =='2')
		{
			j=0;
			if(bu[0] == '1')
			{
				fon=0;
				for(i=15;i>=1;i--)
				{
					if(!fon)
					{
						if(bu[i]=='1')
						{
							fon=1;
							bu[i]=1;
						}
						else
							bu[i]=0;
					}
					else
					{
						if(bu[i]=='1')
							bu[i]=0;
						else
							bu[i]=1;
					}
					dec2+= bu[i]*pow(2,j++);
				}
				dec2=dec2*-1;
			}
			else
			{
				for(i=15;i>=1;i--)
				{
					if(bu[i]=='1')
						bu[i]=1;
					else
						bu[i]=0;
					dec2+= bu[i]*pow(2,j++);
				}
			}
			//printf("%d\n", dec2);
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
		
		
		//conversão do resultado decimal em binário.
		if(decr > 32767 || decr < -32767)
			printf("overflow\n");
		else
		{
			//Conversão em binario com "MS"
			if(strong[0] == 'M' && strong[1]=='S')
			{
				j=0;
				if(decr<0)
				{
					result[0] = '1';
					decr*=-1;
				}
				else
				{
					result[0] = '0';
				}
				for(i=15;i>=1;i--)
				{
					result[i]=decr%2 +48;
					decr=decr/2;
				}
				printf("%s\n", result);
			}
			//Fim da conversão com "MS"
			
			//Conversão em binario com complemento de 1
			if(strong[0] == 'C' && strong[1] =='1')
			{
				j=0;
				nha=0;
				if(decr<0)
				{
					nha=1;
					decr*=-1;
				}
				for(i=15;i>=0;i--)
				{
					result[i]=decr%2 +48;
					decr=decr/2;
				}
				if(nha)
				{
					for(i=15;i>=0;i--)
					{
							if(result[i]=='1')
								result[i]='0';
							else
								result[i]='1';
					}	
				}
				printf("%s\n", result);
			}
			//Fim da conversão com complemento de 1
			
			//Conversão em binario com complemento de 2
			if(strong[0] == 'C' && strong[1] =='2')
			{
				j=0;
				nha=0;
				fon=0;
				if(decr<0)
				{
					nha=1;
					decr*=-1;
				}
				for(i=15;i>=0;i--)
				{
					result[i]=decr%2 +48;
					decr=decr/2;
				}
				if(nha)
				{
					for(i=15;i>=0;i--)
					{
						if(!fon)
						{
							if(result[i]=='1')
								fon=1;
						}
						else
						{
							if(result[i]=='1')
								result[i]='0';
							else
								result[i]='1';
						}
					}	
				}
				printf("%s\n", result);
				
			}
		}
		scanf("%s", strong);
		//Fim da conversão com complemento de 2
		//fim da conversão.
	}
	return 0;
}
