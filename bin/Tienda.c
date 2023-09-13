#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <mouse.h>
#include <string.h>
#include <time.h>


void interfaz(void);
void menuprincipal(void);
void presentacion(void);
void logo(void);
char caracterrandom(void);
char numerorandom(void);
int i,j;

void main(void){
	presentacion();
	logo();
	interfaz();
	menuprincipal();
}

void interfaz(void){
    int raya1=0;
        int raya2=2;
        int raya3=2;
        int raya4=1;
        system("cls");
		textcolor(MAGENTA);
		fflush(stdin);
		while(raya1<=25)
		{
			gotoxy(1,raya1);
			cprintf("%c",186);
			raya1++;
		}

		while(raya2<=79)
		{
			gotoxy(raya2,25);
			cprintf("%c",205);
			raya2++;
		}

		while(raya3<=79)
		{
			gotoxy(raya3,1);
			cprintf("%c",205);
			raya3++;
		}

		while(raya4<=25)
		{
			gotoxy(79,raya4);
			cprintf("%c",186);
			raya4++;
		}
		gotoxy(79,1);
		cprintf("%c",187);

		gotoxy(1,1);
		cprintf("%c",201);

		gotoxy(1,25);
		cprintf("%c",200);

		gotoxy(79,25);
		cprintf("%c",188);
}

void menuprincipal(void){
	int productos[7]={0};
	int mouseenx,mouseeny;
	int total=0;
	interfaz();
	textcolor(RED);
	gotoxy(76,3);
	cprintf("X");
	mver();
	textcolor(YELLOW);
	gotoxy(20,2);
	cprintf("Ingrese los productos que va a llevar OwO");
	textcolor(CYAN);
	gotoxy(10,4);
	cprintf("Calamares deshidratados");
	gotoxy(10,7);
	cprintf("Galletas POCKI de chocolate");
	gotoxy(10,10);
	cprintf("Algas marinas caramelizadas");
	gotoxy(10,13);
	cprintf("Lychees deshidratados");
	gotoxy(10,16);
	cprintf("Papitas de camaron");
	gotoxy(10,19);
	cprintf("Te de burbujas");
	gotoxy(10,22);
	cprintf("Sake con sabor a pera (+18)");
	gotoxy(50,4);
	textcolor(YELLOW);
	cprintf("<");
	gotoxy(54,4);
	cprintf(">");
	gotoxy(50,7);
	cprintf("<");
	gotoxy(54,7);
	cprintf(">");
	gotoxy(50,10);
	cprintf("<");
	gotoxy(54,10);
	cprintf(">");
	gotoxy(50,13);
	cprintf("<");
	gotoxy(54,13);
	cprintf(">");
	gotoxy(50,16);
	cprintf("<");
	gotoxy(54,16);
	cprintf(">");
	gotoxy(50,19);
	cprintf("<");
	gotoxy(54,19);
	cprintf(">");
	gotoxy(50,22);
	cprintf("<");
	gotoxy(54,22);
	cprintf(">");
	for(i=4;i<=22;i+=3){
		gotoxy(52,i);
		printf("0");
	}
	textcolor(GREEN);
	for(i=4,j=35;i<=22 && j<=185;i+=3,j+=25){
		gotoxy(56,i);
		cprintf("%s %d","C$ ",j);
	}
	gotoxy(64,14);
	printf("C$");
	gotoxy(66,13);
	printf("Total:");
	gotoxy(66,14);
	textcolor(LIGHTGRAY);
	cprintf("%d",total);
	textcolor(LIGHTMAGENTA);
	gotoxy(66,18);
	cprintf("%s %c","PAGAR",1);
	while(1){
		gotoxy(30,10);
		mouseenx= mxpos(8);
		gotoxy(30,11);
		mouseeny= mypos(8);

		/* Boton salir */
		if(mclick()==1 && mouseenx==75 && mouseeny==2){
			system("cls");
			exit(0);
		}

		/* Producto 1 */
		if(mclick()==1 && mouseenx==49 && mouseeny==3){

			productos[0]--;
			if(productos[0]!=-1)total-=35;
			if(productos[0]==-1)productos[0]=0;
			gotoxy(52,4);
			printf("%d",productos[0]);
			gotoxy(66,13);
			printf("Total:");
			gotoxy(64,14);
			cprintf("C$");
			gotoxy(66,14);
			textcolor(BLACK);
			cprintf("%c %c %c %c %c",219,219,219,219,219);
			gotoxy(66,14);
			textcolor(LIGHTGRAY);
			cprintf("%d",total);
			delay(700);
		}

		if(mclick()==1 && mouseenx==53 && mouseeny==3){

			productos[0]++;
			if(productos[0]!=10)total+=35;
			if(productos[0]==10) productos[0]=9;
			gotoxy(52,4);
			printf("%d",productos[0]);
			gotoxy(66,13);
			printf("Total:");
			gotoxy(64,14);
			cprintf("C$");
			gotoxy(66,14);
			textcolor(BLACK);
			cprintf("%c %c %c %c %c",219,219,219,219,219);
			gotoxy(66,14);
			textcolor(LIGHTGRAY);
			cprintf("%d",total);
			delay(700);
		}

		/* Producto 2 */
		if(mclick()==1 && mouseenx==49 && mouseeny==6){

			productos[1]--;
			if(productos[1]!=-1)total-=60;
			if(productos[1]==-1)productos[1]=0;
			gotoxy(52,7);
			printf("%d",productos[1]);
			gotoxy(66,13);
			printf("Total:");
			gotoxy(64,14);
			cprintf("C$");
			gotoxy(66,14);
			textcolor(BLACK);
			cprintf("%c %c %c %c %c",219,219,219,219,219);
			gotoxy(66,14);
			textcolor(LIGHTGRAY);
			cprintf("%d",total);
			delay(700);
		}

		if(mclick()==1 && mouseenx==53 && mouseeny==6){

			productos[1]++;
			if(productos[1]!=10)total+=60;
			if(productos[1]==10) productos[1]=9;
			gotoxy(52,7);
			printf("%d",productos[1]);
			gotoxy(66,13);
			printf("Total:");
			gotoxy(64,14);
			cprintf("C$");
			gotoxy(66,14);
			textcolor(BLACK);
			cprintf("%c %c %c %c %c",219,219,219,219,219);
			gotoxy(66,14);
			textcolor(LIGHTGRAY);
			cprintf("%d",total);
			delay(700);
		}

		/* Producto 3 */
		if(mclick()==1 && mouseenx==49 && mouseeny==9){

			productos[2]--;
			if(productos[2]!=-1)total-=85;
			if(productos[2]==-1)productos[2]=0;
			gotoxy(52,10);
			printf("%d",productos[2]);
			gotoxy(66,13);
			printf("Total:");
			gotoxy(64,14);
			cprintf("C$");
			gotoxy(66,14);
			textcolor(BLACK);
			cprintf("%c %c %c %c %c",219,219,219,219,219);
			gotoxy(66,14);
			textcolor(LIGHTGRAY);
			cprintf("%d",total);
			delay(700);
		}

		if(mclick()==1 && mouseenx==53 && mouseeny==9){

			productos[2]++;
			if(productos[2]!=10)total+=85;
			if(productos[2]==10) productos[2]=9;
			gotoxy(52,10);
			printf("%d",productos[2]);
			gotoxy(66,13);
			printf("Total:");
			gotoxy(64,14);
			cprintf("C$");
			gotoxy(66,14);
			textcolor(BLACK);
			cprintf("%c %c %c %c %c",219,219,219,219,219);
			gotoxy(66,14);
			textcolor(LIGHTGRAY);
			cprintf("%d",total);
			delay(700);
		}

		/* Producto 4 */
		if(mclick()==1 && mouseenx==49 && mouseeny==12){

			productos[3]--;
			if(productos[3]!=-1)total-=110;
			if(productos[3]==-1)productos[3]=0;
			gotoxy(52,13);
			printf("%d",productos[3]);
			gotoxy(66,13);
			printf("Total:");
			gotoxy(64,14);
			cprintf("C$");
			gotoxy(66,14);
			textcolor(BLACK);
			cprintf("%c %c %c %c %c",219,219,219,219,219);
			gotoxy(66,14);
			textcolor(LIGHTGRAY);
			cprintf("%d",total);
			delay(700);
		}

		if(mclick()==1 && mouseenx==53 && mouseeny==12){

			productos[3]++;
			if(productos[3]!=10)total+=110;
			if(productos[3]==10) productos[3]=9;
			gotoxy(52,13);
			printf("%d",productos[3]);
			gotoxy(66,13);
			printf("Total:");
			gotoxy(64,14);
			cprintf("C$");
			gotoxy(66,14);
			textcolor(BLACK);
			cprintf("%c %c %c %c %c",219,219,219,219,219);
			gotoxy(66,14);
			textcolor(LIGHTGRAY);
			cprintf("%d",total);
			delay(700);
		}

		/* Producto 5 */
		if(mclick()==1 && mouseenx==49 && mouseeny==15){

			productos[4]--;
			if(productos[4]!=-1)total-=135;
			if(productos[4]==-1)productos[4]=0;
			gotoxy(52,16);
			printf("%d",productos[4]);
			gotoxy(66,13);
			printf("Total:");
			gotoxy(64,14);
			cprintf("C$");
			gotoxy(66,14);
			textcolor(BLACK);
			cprintf("%c %c %c %c %c",219,219,219,219,219);
			gotoxy(66,14);
			textcolor(LIGHTGRAY);
			cprintf("%d",total);
			delay(700);
		}

		if(mclick()==1 && mouseenx==53 && mouseeny==15){

			productos[4]++;
			if(productos[4]!=10)total+=135;
			if(productos[4]==10) productos[4]=9;
			gotoxy(52,16);
			printf("%d",productos[4]);
			gotoxy(66,13);
			printf("Total:");
			gotoxy(64,14);
			cprintf("C$");
			gotoxy(66,14);
			textcolor(BLACK);
			cprintf("%c %c %c %c %c",219,219,219,219,219);
			gotoxy(66,14);
			textcolor(LIGHTGRAY);
			cprintf("%d",total);
			delay(700);
		}

		/* Producto 6 */
		if(mclick()==1 && mouseenx==49 && mouseeny==18){

			productos[5]--;
			if(productos[5]!=-1)total-=160;
			if(productos[5]==-1)productos[5]=0;
			gotoxy(52,19);
			printf("%d",productos[5]);
			gotoxy(66,13);
			printf("Total:");
			gotoxy(64,14);
			cprintf("C$");
			gotoxy(66,14);
			textcolor(BLACK);
			cprintf("%c %c %c %c %c",219,219,219,219,219);
			gotoxy(66,14);
			textcolor(LIGHTGRAY);
			cprintf("%d",total);
			delay(700);
		}

		if(mclick()==1 && mouseenx==53 && mouseeny==18){

			productos[5]++;
			if(productos[5]!=10)total+=160;
			if(productos[5]==10) productos[5]=9;
			gotoxy(52,19);
			printf("%d",productos[5]);
			gotoxy(66,13);
			printf("Total:");
			gotoxy(64,14);
			cprintf("C$");
			gotoxy(66,14);
			textcolor(BLACK);
			cprintf("%c %c %c %c %c",219,219,219,219,219);
			gotoxy(66,14);
			textcolor(LIGHTGRAY);
			cprintf("%d",total);
			delay(700);
		}

		/* Producto 7 */
		if(mclick()==1 && mouseenx==49 && mouseeny==21){

			productos[6]--;
			if(productos[6]!=-1)total-=185;
			if(productos[6]==-1)productos[6]=0;
			gotoxy(52,22);
			printf("%d",productos[6]);
			gotoxy(66,13);
			printf("Total:");
			gotoxy(64,14);
			cprintf("C$");
			gotoxy(66,14);
			textcolor(BLACK);
			cprintf("%c %c %c %c %c",219,219,219,219,219);
			gotoxy(66,14);
			textcolor(LIGHTGRAY);
			cprintf("%d",total);
			delay(700);
		}

		if(mclick()==1 && mouseenx==53 && mouseeny==21){

			productos[6]++;
			if(productos[6]!=10)total+=185;
			if(productos[6]==10) productos[6]=9;
			gotoxy(52,22);
			printf("%d",productos[6]);
			gotoxy(66,13);
			printf("Total:");
			gotoxy(64,14);
			cprintf("C$");
			gotoxy(66,14);
			textcolor(BLACK);
			cprintf("%c %c %c %c %c",219,219,219,219,219);
			gotoxy(66,14);
			textcolor(LIGHTGRAY);
			cprintf("%d",total);
			delay(700);
		}

		/* Pagar */
		if(mclick()==1 && mouseenx>=65 && mouseenx<=71 && mouseeny==17 && total!=0){
			int semilla=(time(0));
			interfaz();
			mver();
			textcolor(RED);
			gotoxy(76,3);
			cprintf("X");
			gotoxy(25,2);
			printf("Tienda de snacks asiaticos Nyanko UWU");
			gotoxy(10,3);
			printf("Fecha: 26-09-2022");
			gotoxy(60,3);
			printf("Factura ");
			printf("%c",numerorandom());
			gotoxy(69,3);
			srand(semilla-rand());
			printf("%c",caracterrandom());
			srand(semilla+rand());
			gotoxy(70,3);
			printf("%c",numerorandom());
			srand(semilla*rand());
			gotoxy(71,3);
			printf("%c",caracterrandom());
			srand(semilla%rand());
			gotoxy(72,3);
			printf("%c",numerorandom());
			gotoxy(10,5);
			printf("Nombre del cliente: Jose Marin Zelaya");
			gotoxy(10,7);
			printf("Producto");
			gotoxy(40,7);
			printf("Cantidad");
			gotoxy(56,7);
			printf("Precio");
			gotoxy(55,8);
			printf("Unitario");
			gotoxy(70,7);
			printf("Total");

			gotoxy(64,21);
			printf("%s %d","Subtotal:",total);
			gotoxy(67,22);
			printf("%s %.2f","IVA:",total*0.15);
			gotoxy(56,23);
			printf("%s %.2f","Total a pagar:",total+(total*0.15));

			gotoxy(10,22);
			printf("Del Parque de Ferias 500 mts al sur 500 mts al oeste");
			gotoxy(10,23);
			printf("Tel: 774771772");
			gotoxy(29,23);
			textcolor(RED);
			cprintf("GRACIAS POR SU COMPRA UWU");
			textcolor(LIGHTGRAY);
			if(productos[0]!=0){
				gotoxy(10,9);
				printf("Calamares deshidratados");
				gotoxy(43,9);
				printf("%d",productos[0]);
				gotoxy(57,9);
				printf("C$35");
				gotoxy(71,9);
				printf("%d",productos[0]*35);
			}
			if(productos[1]!=0){
				gotoxy(10,10);
				printf("Galletas POCKY de chocolate");
				gotoxy(43,10);
				printf("%d",productos[1]);
				gotoxy(57,10);
				printf("C$60");
				gotoxy(71,10);
				printf("%d",productos[1]*60);
			}
			if(productos[2]!=0){
				gotoxy(10,12);
				printf("Algas marinas caramelizadas");
				gotoxy(43,12);
				printf("%d",productos[2]);
				gotoxy(57,12);
				printf("C$85");
				gotoxy(71,12);
				printf("%d",productos[2]*85);
			}
			if(productos[3]!=0){
				gotoxy(10,14);
				printf("Lychees deshidratados");
				gotoxy(43,14);
				printf("%d",productos[3]);
				gotoxy(57,14);
				printf("C$110");
				gotoxy(71,14);
				printf("%d",productos[3]*110);
			}
			if(productos[4]!=0){
				gotoxy(10,16);
				printf("Papitas de camaron");
				gotoxy(43,16);
				printf("%d",productos[4]);
				gotoxy(57,16);
				printf("C$135");
				gotoxy(71,16);
				printf("%d",productos[4]*135);
			}
			if(productos[5]!=0){
				gotoxy(10,18);
				printf("Te de burbujas");
				gotoxy(43,18);
				printf("%d",productos[5]);
				gotoxy(57,18);
				printf("C$160");
				gotoxy(71,18);
				printf("%d",productos[5]*160);
			}
			if(productos[6]!=0){
				gotoxy(10,20);
				printf("Sake con sabor a pera");
				gotoxy(43,20);
				printf("%d",productos[6]);
				gotoxy(57,20);
				printf("C$185");
				gotoxy(71,20);
				printf("%d",productos[6]*185);
			}
		}
	}
}


void presentacion(void)
{
    FILE *p;
    char ch;
    system("cls");
    p=fopen("BBB.txt","r");

    if(p==NULL)
    {
        printf("Archivo no encontrado");
    }
	else ch=fgetc(p);

    while(ch!=EOF)
    {
		delay(50);
		printf("%c",ch);
		ch=fgetc(p);

    }

    fclose(p);
}

void logo(void)
{
    int figura1=13;
    int figura2=22;
    int figura3=17;
    int figura4=13;
    int figura5=13;
    int figura6=13;
    int figura7=17;
    int figura8=22;
    int figura9=13;
        textcolor(BLUE);
        while(figura1<=24)
        {

            gotoxy(17,figura1);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura1++;
        }

        while(figura2<=24)
        {

            gotoxy(18,figura2);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura2++;
        }

        while(figura3<=24)
        {

            gotoxy(35,figura3);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura3++;
        }

        while(figura4<=20)
        {

            gotoxy(26,figura4);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura4++;
        }

        while(figura5<=24)
        {

            gotoxy(44,figura5);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura5++;
        }

        while(figura6<=15)
        {

            gotoxy(54,figura6);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura6++;
        }

        while(figura7<=24)
        {

            gotoxy(54,figura7);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura7++;
        }

        while(figura8<=24)
        {

            gotoxy(44,figura8);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura8++;
        }

        while(figura9<=15)
        {

            gotoxy(28,figura9);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            cprintf("%c",219);
            figura9++;
        }

        gotoxy(19,25);
        textcolor(WHITE+BLINK);
        cprintf("Presione Enter para continuar");
        getch();
}

char caracterrandom(void){
	int caracterchatel;
	caracterchatel=rand() % (90 + 1 - 65) + 65;
	return caracterchatel;
}

char numerorandom(void){
	int numerochatel;
	numerochatel= rand() % (57 + 1 - 49) + 49;
	return numerochatel;
}