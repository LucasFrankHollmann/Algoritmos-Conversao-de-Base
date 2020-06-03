//Ana Paula Bernardes & Lucas Frank Hollmann
//Questão 4.

#include <stdio.h>
#include <math.h>

int  i, decibem, j, fon, nha;
char strong[3] , brisario[17];

int main()
{
		scanf("%s", strong);
		getchar();

	while(strong[0] != '#' && strong[1]!='#')
	{
		scanf("%d", &decibem);
		//Conversão em binario com "MS"
		if(strong[0] == 'M' && strong[1]=='S')
		{
			j=0;
			if(decibem<0)
			{
				brisario[0] = '1';
				decibem*=-1;
			}
			else
			{
				brisario[0] = '0';
			}
			for(i=15;i>=1;i--)
			{
				brisario[i]=decibem%2 +48;
				decibem=decibem/2;
			}
			printf("%s\n", brisario);
		}
		//Fim da conversão com "MS"
		
		//Conversão em binario com complemento de 1
		if(strong[0] == 'C' && strong[1] =='1')
		{
			j=0;
			nha=0;
			if(decibem<0)
			{
				nha=1;
				decibem*=-1;
			}
			for(i=15;i>=0;i--)
			{
				brisario[i]=decibem%2 +48;
				decibem=decibem/2;
			}
			if(nha)
			{
				for(i=15;i>=0;i--)
				{
						if(brisario[i]=='1')
							brisario[i]='0';
						else
							brisario[i]='1';
				}	
			}
			printf("%s\n", brisario);
		}
		//Fim da conversão com complemento de 1
		
		//Conversão em binario com complemento de 2
		if(strong[0] == 'C' && strong[1] =='2')
		{
			j=0;
			nha=0;
			fon=0;
			if(decibem<0)
			{
				nha=1;
				decibem*=-1;
			}
			for(i=15;i>=0;i--)
			{
				brisario[i]=decibem%2 +48;
				decibem=decibem/2;
			}
			if(nha)
			{
				for(i=15;i>=0;i--)
				{
					if(!fon)
					{
						if(brisario[i]=='1')
							fon=1;
					}
					else
					{
						if(brisario[i]=='1')
							brisario[i]='0';
						else
							brisario[i]='1';
					}
				}	
			}
			printf("%s\n", brisario);
		}
		//Fim da conversão com complemento de 2
		scanf("%s", strong);
		getchar();
	}
	return 0;
}
