//Ana Paula Bernardes da Silva && Lucas Frank Hollmann 
//Questão 1.
#include <stdio.h>
#include <string.h>
#include <math.h>

int ba, nb, i, pokemon,fon, ahri, j;
char n[6454], nha[6454], hih[6454];

int main()
{
	
	while(scanf("%d %d", &ba, &nb) && ba && nb)
	{
		//limpa as strings.
		memset(n,0,6454);
		memset(nha,0,6454);
		memset(hih,0,6454); 
		scanf("%s", n);
		getchar();
		for(i=(strlen(n)-1);i>=0;i--) //converte da base inicial para base decimal.
		{
			pokemon = (i-strlen(n));
			if(pokemon<0)
			pokemon = pokemon*(-1);
			//printf("%d\n",pokemon);
			pokemon-=1;
			switch(n[i])
			{
				case '1':
					ahri+= 1*(pow(ba,pokemon));
					break;
				case '2':
					ahri+= 2*(pow(ba,pokemon));
					break;
				case '3':
					ahri+= 3*(pow(ba,pokemon));
					break;
				case '4':
					ahri+= 4*(pow(ba,pokemon));
					break;
				case '5':
					ahri+= 5*(pow(ba,pokemon));
					break;
				case '6':
					ahri+= 6*(pow(ba,pokemon));
					break;
				case '7':
					ahri+= 7*(pow(ba,pokemon));
					break;
				case '8':
					ahri+= 8*(pow(ba,pokemon));
					break;
				case '9':
					ahri+= 9*(pow(ba,pokemon));
					break;
				case 'A':
					ahri+= 10*(pow(ba,pokemon));
					break;
				case 'B':
					ahri+= 11*(pow(ba,pokemon));
					break;
				case 'C':
					ahri+= 12*(pow(ba,pokemon));
					break;
				case 'D':
					ahri+= 13*(pow(ba,pokemon));
					break;
				case 'E':
					ahri+= 14*(pow(ba,pokemon));
					break;
				case 'F':
					ahri+= 15*(pow(ba,pokemon));
					break;
				
			}
		}
		//converte de decimal para a base desejada (porem deixa a string em ordem inversa).
		i=0;
		fon = ahri%nb;
			ahri = ahri-fon;
			ahri = ahri/nb;
			i++;
			switch(fon)
			{
				case 0:
					nha[i-1] = '0';
					break;
				case 1:	
					nha[i-1] = '1';
					break;
				case 2:	
					nha[i-1] = '2';
					break;
				case 3:
					nha[i-1] = '3';
					break;
				case 4:
					nha[i-1] = '4';
					break;
				case 5:
					nha[i-1] = '5';
					break;
				case 6:
					nha[i-1] = '6';
					break;
				case 7:
					nha[i-1] = '7';
					break;
				case 8:
					nha[i-1] = '8';
					break;
				case 9:
					nha[i-1] = '9';
					break;
				case 10:
					nha[i-1] = 'A';
					break;
				case 11:
					nha[i-1] = 'B';
					break;
				case 12:
					nha[i-1] = 'C';
					break;
				case 13:
					nha[i-1] = 'D';
					break;
				case 14:
					nha[i-1] = 'E';
					break;
				case 15:
					nha[i-1] = 'F';
					break;
				
			}
		while(ahri!=0)
		{
			fon = ahri%nb;
			ahri = ahri-fon;
			ahri = ahri/nb;
			i++;
			switch(fon)
			{
				case 0:
					nha[i-1] = '0';
					break;
				case 1:	
					nha[i-1] = '1';
					break;
				case 2:	
					nha[i-1] = '2';
					break;
				case 3:
					nha[i-1] = '3';
					break;
				case 4:
					nha[i-1] = '4';
					break;
				case 5:
					nha[i-1] = '5';
					break;
				case 6:
					nha[i-1] = '6';
					break;
				case 7:
					nha[i-1] = '7';
					break;
				case 8:
					nha[i-1] = '8';
					break;
				case 9:
					nha[i-1] = '9';
					break;
				case 10:
					nha[i-1] = 'A';
					break;
				case 11:
					nha[i-1] = 'B';
					break;
				case 12:
					nha[i-1] = 'C';
					break;
				case 13:
					nha[i-1] = 'D';
					break;
				case 14:
					nha[i-1] = 'E';
					break;
				case 15:
					nha[i-1] = 'F';
					break;
				
			}
			//printf("%d\n", ahri);
		}
		//printf("%d\n", ahri);
		//printf("%s\n", nha);
		j=0;
		for(i=strlen(nha);i>=0;i--)//Imprime a string em ordem correta.
		{
			printf("%c", nha[i]);
		}
		printf("\n");
	} 
	
	return 0;
}
