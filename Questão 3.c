//Ana Paula Bernardes & Lucas Frank Hollmann
//Questão 3.

#include <stdio.h>
#include <math.h>

int  i, decibem, j, fon;
char strong[3] , brisario[17];

int main()
{
	scanf("%s", strong);
		getchar();
	while(strong[0] != '#' && strong[1]!='#')
	{
		decibem=0;
		
		scanf("%s", brisario);
		getchar();
		//Conversão em decimal com "MS"
		if(strong[0] == 'M' && strong[1]=='S')
		{
			j=0;
			for(i=15;i>=1;i--)
			{
				if(brisario[i]=='1')
					brisario[i]=1;
				else
					brisario[i]=0;
				decibem+= brisario[i]*pow(2,j++);
			}
			if(brisario[0] == '1')
				decibem = decibem*-1;
			printf("%d\n", decibem);
		}
		//Fim da conversão com "MS"
		
		//Conversão em decimal com complemento de 1
		if(strong[0] == 'C' && strong[1] =='1')
		{
			j=0;
			if(brisario[0] == '1')
			{
				for(i=15;i>=1;i--)
				{
					if(brisario[i]=='1')
						brisario[i]=0;
					else
						brisario[i]=1;
					decibem+= brisario[i]*pow(2,j++);
				}
				decibem=decibem*-1;
			}
			else
			{
				for(i=15;i>=1;i--)
				{
					if(brisario[i]=='1')
						brisario[i]=1;
					else
						brisario[i]=0;
					decibem+= brisario[i]*pow(2,j++);
				}
			}
			printf("%d\n", decibem);
		}
		//Fim da conversão com complemento de 1
		
		//Conversão em decimal com complemento de 2
		if(strong[0] == 'C' && strong[1] =='2')
		{
			j=0;
			if(brisario[0] == '1')
			{
				fon=0;
				for(i=15;i>=1;i--)
				{
					if(!fon)
					{
						if(brisario[i]=='1')
						{
							fon=1;
							brisario[i]=1;
						}
						else
							brisario[i]=0;
					}
					else
					{
						if(brisario[i]=='1')
							brisario[i]=0;
						else
							brisario[i]=1;
					}
					decibem+= brisario[i]*pow(2,j++);
				}
				decibem=decibem*-1;
			}
			else
			{
				for(i=15;i>=1;i--)
				{
					if(brisario[i]=='1')
						brisario[i]=1;
					else
						brisario[i]=0;
					decibem+= brisario[i]*pow(2,j++);
				}
			}
			printf("%d\n", decibem);
		}
		//Fim da conversão com complemento de 2
		scanf("%s", strong);
		getchar();
	}
	return 0;
}
