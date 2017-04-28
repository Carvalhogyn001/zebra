#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <windows.h>
#include <conio.h>
#include <locale.h>
#include <unistd.h>
#include <fstream>
#include <stdio.h>
#include <conio.h> 


using namespace std;


static int opcao;
static int coluna;
static int linha;
static int tamanho;
static int qtd;
static int i;
static int j;


/*String senha;*/
char senha[11];
static string passwd = "PRO@102030";
static string p;
ofstream outfile;

int menu(){

	do{	
		system("cls");
		cout << "[1] DIGITAR PALAVRA DESEJADA";
		cout << "\n[2] AJUSTAR TAMANHO E POSICAO";
		cout << "\n[0] SAIR";
		cout << "\nESCOLHA SUA OPCAO: ";
		cin >> opcao;

		if((opcao != 0) && (opcao != 1) && (opcao !=2)){
			cout << "\n\n\t\tOPCAO INVALIDA!!!\n\n";
			Sleep (500);
			system ("cls");
		}
	}while((opcao != 0) && (opcao != 1) && (opcao !=2));

	outfile.open("ETIQUETA-PERSONALIZADA.txt");

	if (outfile.is_open() && outfile.good()){

		switch (opcao){
/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
			case 0:
			cout << "........\n";
			cout << "...................\n";
			cout << "................................\n";
			cout << ".............................................\n";
			cout << "............................................................\n";
			cout << "..........................................................................\n\n";
			cout << "\t\t\tSAINDO DO PROGRAMA";
			Sleep (500);
			system("exit");
			break;
/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
			case 1:
			system("cls");
			cout << "DIGITE A PALAVRA DESEJADA: ";
			cin >> p;

			cout << "\nDIGITE A QUANTIDADE DESEJADA: ";
			cin >> qtd;

			outfile << "^XA\n";
			outfile << "^LH040,05\n";
			outfile << "# Coluna,linha, tamanho\n";
			outfile << "^FO060,25^AS,180,85^FD";
			outfile << p;
			outfile << "^FS^FS\n";
			outfile << "^PQ";
			outfile << qtd;
			outfile << ",0,2,Y\n";
			outfile << "^XZ\n";
			outfile.close();
			system ("type ETIQUETA-PERSONALIZADA.txt > lpt2 ");
			cout << "........\n";
			cout << "...................\n";
			cout << "................................\n";
			cout << ".............................................\n";
			cout << "............................................................\n";
			cout << "..........................................................................\n\n";
			cout << "\t\t\tIMPRIMINDO\n\n";
			Sleep (500);
			system ("cls");
			return menu();
			break;
/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
			case 2:
			system ("cls");
			cout << "DIGITE A PALAVRA DESEJADA: ";
			cin >> p;

			cout << "\nDIGITE A QUANTIDADE DESEJADA: ";
			cin >> qtd;

			cout << "\nDIGITE O VALOR DO CAMPO COLUNA: ";
			cin >> coluna;

			cout << "\nDIGITE O VALOR DO CAMPO LINHA: ";
			cin >> linha;

			cout << "\nDIGITE O VALOR DO CAMPO TAMANHO: ";
			cin >> tamanho;

			outfile << "^XA\n";
			outfile << "^LH040,05\n";
			outfile << "# Coluna,linha, tamanho\n";
			outfile << "^FO";
			outfile << coluna;
			outfile << ",25^AS,";
			outfile << linha;
			outfile << ",";
			outfile << tamanho;
			outfile << "^FD";
			outfile << p;
			outfile << "^FS^FS\n";
			outfile << "^PQ";
			outfile << qtd;
			outfile << ",0,2,Y\n";
			outfile << "^XZ\n";
			outfile.close();
			system ("type ETIQUETA-PERSONALIZADA.txt > lpt2 ");
			cout << "........\n";
			cout << "...................\n";
			cout << "................................\n";
			cout << ".............................................\n";
			cout << "............................................................\n";
			cout << "..........................................................................\n\n";
			cout << "\t\t\tIMPRIMINDO\n\n";
			Sleep (500);
			system ("cls");
			return menu();
			break;
/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
			default:
			cout << "\n\n\t\tOPCAO INVALIDA!!!\n\n";
			Sleep (500);
			system ("cls");
			return menu();
		}
	}
}	
/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
int main(){	

SetConsoleTitle("Developed by | CHRISTIAN ALVES");
system("color 0a");

do{ 	

	cout << "DIGITE A SENHA: ";
	senha[0] = getch();
	cout << "*";

	senha[1] = getch();
	cout << "*";

	senha[2] = getch();
	cout << "*";

	senha[3] = getch();
	cout << "*";

	senha[4] = getch();
	cout << "*";

	senha[5] = getch();
	cout << "*";

	senha[6] = getch();
	cout << "*";

	senha[7] = getch();
	cout << "*";

	senha[8] = getch();
	cout << "*";

	senha[9] = getch();
	cout << "*";

	if(senha != passwd){
		cout << "\n\t\tSENHA INVALIDA!!!\n";	
		Sleep (500);
		system ("cls");		
	}
}while(senha != passwd);


menu();
return 0;
}
