#include<stdio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<conio2.h>
#include <locale.h>

void Quadro(int CI, int LI, int CF, int LF, int CorT, int CorF)
{
	int i;
	textcolor(CorT);
	textbackground(CorF);
	gotoxy(CI,LI);
	printf("%c",201);
	gotoxy(CF,LI);
	printf("%c",187);
	gotoxy(CI,LF);
	printf("%c",200);
	gotoxy(CF,LF);
	printf("%c",188);
	for(i=CI+1; i<CF; i++)
	{
		gotoxy(i,LI);
		printf("%c",205);
		gotoxy(i,LF);
		printf("%c",205);
	}
	for(i=LI+1; i<LF; i++)
	{
		gotoxy(CI,i);
		printf("%c",186);
		gotoxy(CF,i);
		printf("%c",186);
	}
}

int main(void)
{
	clrscr();
	//QUADRO1
    Quadro(1,1,80,30,1,3);

    //QUADRO DO TITULO
    Quadro(4,3,76,7,1,0);

    //QUADRO MEIO
    Quadro(4,8,76,28,1,0);
    
    int y=10,sla;
	
	
	gotoxy(20,5);
	textcolor(15);
	printf("### TRABALHO DE CIENCIA DE DADOS - LENSES ###");

	
	setlocale(LC_ALL,"Portuguese");
	int idade,pres,ast,lag,classe,opcao;
	do{
		gotoxy(20,y);
		printf("Qual sua idade?");
		y++;
		gotoxy(20,y);
		printf("(1) Jovem, (2) Adulto, (3) Idoso: ");y+=2;
		scanf("%d",&idade);
	
	switch(idade){
		case 1:		
					
					gotoxy(20,y);
					printf("Prescrição de óculos:");y++;
					gotoxy(20,y);
					printf("(1) Míope, (2) Hipermetropia: ");y+=2;
					scanf("%d",&pres);
					if(pres==1)
					{	
						gotoxy(20,y);
						printf("Astigmático: ");y++;
						gotoxy(20,y);
						printf("(1) Não, (2) Sim: ");y+=2;
						scanf("%d",&ast);
						if(ast==1)
						{
							gotoxy(20,y);
							printf("Taxa de Produção de lágrimas: ");y++;
							gotoxy(20,y);
							printf("(1) reduzida, (2) normal: ");y+=2;
							scanf("%d",&lag);
							if(lag==1)
							{
								gotoxy(20,y);
								printf("O senhor não deve usar lentes de contato!!");y++;
							}
							else
							{
								gotoxy(20,y);
								printf("O senhor deve usar lentes de contato gelatinosas!!");y++;
							}
						}
						else
						{
							gotoxy(20,y);
							printf("Taxa de Produção de lágrimas: ");y++;
							gotoxy(20,y);
							printf("(1) reduzida, (2) normal: ");y+=2;
							scanf("%d",&lag);
							if(lag==1)
							{
								gotoxy(20,y);
								printf("O senhor não deve usar lentes de contato!");y++;
							}
							else
							{
								gotoxy(20,y);
								printf("O senhor deve usar lentes de contato rígidas!");y++;
							}
						}
					}
					else
					{
						gotoxy(20,y);
						printf("Astigmático: ");y++;
						gotoxy(20,y);
						printf("(1) Não, (2) Sim: ");y+=2;
						scanf("%d",&ast);
						if(ast==1)
						{
							gotoxy(20,y);
							printf("Taxa de Produção de lágrimas: ");y++;
							gotoxy(20,y);
							printf("(1) reduzida, (2) normal: ");y+=2;
							scanf("%d",&lag);
							if(lag==1)
							{
								gotoxy(20,y);
								printf("O senhor não deve usar lentes de contato!!");y++;
							}
							else
							{
								gotoxy(20,y);
								printf("O senhor deve usar lentes de contato gelatinosas!!");y++;
							}
						}
						else
						{
							gotoxy(20,y);
							printf("Taxa de Produção de lágrimas: ");y++;
							gotoxy(20,y);
							printf("(1) reduzida, (2) normal:");y+=2;
							scanf("%d",&lag);
							if(lag==1)
							{
								gotoxy(20,y);
								printf("O senhor não deve usar lentes de contato!!");y++;
							}
							else
							{
								gotoxy(20,y);
								printf("O senhor deve usar lentes de contato rígidas!!");y++;
							}
						}
					}
			break;
		case 2:
				gotoxy(20,y);
				printf("Prescrição de óculos:");y++;
				gotoxy(20,y);
				printf("1) Míope, (2) Hipermetropia: ");y+=2;
				scanf("%d",&pres);
				if(pres==1)
				{
					gotoxy(20,y);
					printf("Astigmático: ");y++;
					gotoxy(20,y);
					printf("(1) Não, (2) Sim: ");y+=2;
					scanf("%d",&ast);
					if(ast==1)
					{
						gotoxy(20,y);
						printf("Taxa de Produção de lágrimas: ");y++;
						gotoxy(20,y);
						printf("(1) reduzida, (2) normal: ");y+=2;
						scanf("%d",&lag);y=+2;
						if(lag==1)
						{
							gotoxy(20,y);
							printf("O senhor não deve usar lentes de contato!! ");y++;
						}
						else
						{
							gotoxy(20,y);
							printf("O senhor deve usar lentes de contato gelatinosas!! ");y++;
						}
					}
					else
					{
						gotoxy(20,y);
						printf("Taxa de Produção de lágrimas: ");y++;
						gotoxy(20,y);
						printf("(1) reduzida, (2) normal: ");y+=2;
						scanf("%d",&lag);
						if(lag==1)
						{
							gotoxy(20,y);
							printf("O senhor não deve usar lentes de contato!!");y++;
						}
						else
						{
							gotoxy(20,y);
							printf("O senhor deve usar lentes de contato rígidas!!");y++;
						}
					}
				}
				else
				{
					gotoxy(20,y);
					printf("Astigmático: ");y++;
					gotoxy(20,y);
					printf("(1) Não, (2) Sim: ");y+=2;
					scanf("%d",&ast);
					if(ast==1)
					{
						gotoxy(20,y);
						printf("Taxa de Produção de lágrimas: ");y++;
						gotoxy(20,y);
						printf("(1) reduzida, (2) normal: ");y+=2;
						scanf("%d",&lag);
						if(lag==1)
						{
							gotoxy(20,y);
							printf("O senhor não deve usar lentes de contato!! ");y++;
						}
						else
						{
							gotoxy(20,y);
							printf("O senhor deve usar lentes de contato gelatinosas!! ");y++;
						}
					}
					else
					{
						gotoxy(20,y);
						printf("Taxa de Produção de lágrimas: ");y++;
						gotoxy(20,y);
						printf("(1) reduzida, (2) normal: ");y+=2;
						scanf("%d",&lag);
						if(lag==1)
						{
							gotoxy(20,y);
							printf("O senhor não deve usar lentes de contato!!");y++;
						}
						else
						{
							if(lag==1)
							{
								gotoxy(20,y);
								printf("O senhor deve usar lentes de contato rígidas!!");y++;;
							}	
							else
							{
								gotoxy(20,y);
								printf("O senhor não deve usar lentes de contato!!");y++;
							}
						}			
					}
				}
			break;
			
		case 3:
				gotoxy(20,y);
				printf("Prescrição de óculos: ");y++;
				gotoxy(20,y);
				printf("(1) Míope, (2) Hipermetropia: ");y+=2;
				scanf("%d",&pres);
				if(pres==1)
				{
					gotoxy(20,y);
					printf("Astigmático: ");y++;
					gotoxy(20,y);
					printf("(1) Não, (2) Sim: ");y+=2;
					scanf("%d",&ast);
					if(ast==1)
					{
						gotoxy(20,y);
						printf("Taxa de Produção de lágrimas: ");y++;
						gotoxy(20,y);
						printf("(1) reduzida, (2) normal: ");y+=2;
						scanf("%d",&lag);
						if(lag==1)
						{
							gotoxy(20,y);
							printf("O senhor não deve usar lentes de contato!!");y++;
						}
						else
						{
							gotoxy(20,y);
							printf("O senhor não deve usar lentes de contato!!");y++;
						}
					}
					else
					{
						gotoxy(20,y);
						printf("Taxa de Produção de lágrimas: ");y++;
						gotoxy(20,y);
						printf("(1) reduzida, (2) normal: ");y+=2;
						scanf("%d",&lag);
						if(lag==1)
						{
							gotoxy(20,y);
							printf("O senhor não deve usar lentes de contato!!");y++;
						}
						else
						{
							gotoxy(20,y);
							printf("O senhor deve usar lentes de contato rígidas!!");y++;
						}
					}	
				}
				else
				{
					gotoxy(20,y);
					printf("Astigmático: ");y++;
					gotoxy(20,y);
					printf("(1) Não, (2) Sim: ");y+=2;
					scanf("%d",&ast);
					if(ast==1)
					{
						gotoxy(20,y);
						printf("Taxa de Produção de lágrimas: ");y++;
						gotoxy(20,y);
						printf("(1) reduzida, (2) normal: ");y++;
						scanf("%d",&lag);
						if(lag==1)
						{
							gotoxy(20,y);
							printf("O senhor não deve usar lentes de contato!!");y++;
						}
						else
						{
							gotoxy(20,y);
							printf("O senhor deve usar lentes de contato gelatinosas!!");y++;
						}
					}
					else
					{
						gotoxy(20,y);
						printf("Taxa de Produção de lágrimas: ");y++;
						gotoxy(20,y);
						printf("(1) reduzida, (2) normal: ");y+=2;
						scanf("%d",&lag);
						if(lag==1)
						{
							gotoxy(20,y);
							printf("O senhor não deve usar lentes de contato!!");y++;
						}
						else
						{
							gotoxy(20,y);
							printf("O senhor não deve usar lentes de contato!!");y++;	
						}
					}
				}	
			break;	
		}
		gotoxy(20,24);
		printf("Deseja uma nova consulata:(Digite-1) (SAIR-0)");
		scanf("%d",&opcao);
		system("cls");
		clrscr();
		//QUADRO1
	    Quadro(1,1,80,30,1,3);
	    //QUADRO DO TITULO
	    Quadro(4,3,76,7,1,0);
	    //QUADRO MEIO
	    Quadro(4,8,76,28,1,0);
	    textcolor(15);
		y=10;
		gotoxy(20,5);
		textcolor(15);
		printf("### TRABALHO DE CIENCIA DE DADOS - LENSES ###");
	}while(opcao!=0);
	return 1;

}

