#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;


char arr[15][15];
int r, c;

void menu()
{
	system("cls");
	system("color 6");
	cout << "        .^!77?777777??7!^.    " << endl;
	cout << "     .~7?7~^^^::::::^^^~!7?!. " << endl;
	cout << "   .7J!^:::^^^^^^:^^^^^^:::!5!" << endl;
	cout << "  ~Y!^:^^^^^^^^^^~^^^^^::~??^." << endl;
	cout << " !Y^:^^^^^^^^^:!&@#~::^!?7:   " << endl;
	cout << "^5^^^^^^^^^^^^^^JY?^^7?!" << endl;
	cout << "5!:^^^^^^^^^^^^^::~??~        " << endl;
	cout << "P^^^^^^^^^^^^^^^^Y7:          " << endl;
	cout << "P^^^^^^^^^^^^^^^^7?~          " << endl;
	cout << "J7:^^^^^^^^^^^^^^:^7J~        " << endl;
	cout << ".5~:^^^^^^^^^^^^^^^:^?J^      " << endl;
	cout << " :Y!:^^^^^^^^^^^^^^^^:^??^" << endl;
	cout << "  .?J~::^^^^^^^^^^^^^^^:^??:  " << endl;
	cout << "    :7?!^^::^^^^^^^^^^:::^7P~ " << endl;
	cout << "      .~777!~~^^^^^^^~!777~:  " << endl;
	cout << "         .:^!!777777!!~:.     " << endl;
	cout << "---------------------------" << endl;
	cout << "|                         |" << endl;
	cout << "|      1.Start Game       |" << endl;
	cout << "|                         |" << endl;
	cout << "---------------------------" << endl;
	cout << "|                         |" << endl;
	cout << "|       2.Exit		  |" << endl;
	cout << "|                         |" << endl;
	cout << "---------------------------" << endl;


}

void loadingBar()
{
	system("cls");
	system("color 0A");
	char a = 177, b = 219;
	printf("\n\n\n\n");
	printf("\n\n\n\n\t\t\t\t\tLoading...\n\n");
	printf("\t\t\t\t\t");

	for (int i = 0; i < 26; i++)
		printf("%c", a);

	printf("\r");
	printf("\t\t\t\t\t");


	for (int i = 0; i < 26; i++) {
		printf("%c", b);
		Sleep(200);
	}
}


void design()
{

	for (size_t r = 0; r < 15; r++)
	{
		for (size_t c = 0; c < 15; c++)
		{
			if (r == 0 || r == 14)
			{
				arr[r][c] = '#';
			}
			else if (c == 0 || c == 14)
			{
				arr[r][c] = '#';
			}
			else if (r == 5 && c > 3 && c < 11)
			{
				arr[r][c] = '#';
			}
			else if (r == 9 && c > 3 && c < 11)
			{
				arr[r][c] = '#';
			}
			else if (c == 10 && r > 4 && r < 9)
			{
				arr[r][c] = '#';
			}
			else if (c == 2 && r > 2 && r < 10)
			{
				arr[r][c] = '#';
			}			
			else if (c == 12 && r > 2 && r < 11)
			{
				arr[r][c] = '#';
			}			
			else if (c == 1 && c > 6 && c < 10)
			{
				arr[r][c] = '#';
			}

			else
				arr[r][c] = '*';
		}
	}
}
void board()
{
	system("color e9");
	for (size_t r = 0; r < 15; r++)
	{
		for (size_t c = 0; c < 15; c++)
		{
			cout << arr[r][c] << " ";
		}cout << endl;
	}
}


int main()
{
	srand(time(0));
	design();
	//loadingBar();
	char move;
	int a = 1 + rand() % (14 - 1), b = 1 + rand() % (14 - 1);
	int score = 0;
	int choice;
	char selected;
	menu();
	cout << "Make a choice: "; cin >> choice;
	if (choice == 1)
	{
		int secim;
		system("cls");
		cout << "Choose your symbol\n1.$\n2.@\n3.%\n4.&\n5." << char(219) << "\nMake a choice"; cin >> secim;

		if (secim == 1)
		{
			selected = '$';
			cout << "ugurla secildi!!!";
		}
		else if (secim == 2)
		{
			selected = '@';
			cout << "ugurla secildi!!!";
		}
		else if (secim == 3)
		{
			selected = '%';
			cout << "ugurla secildi!!!";
		}
		else if (secim == 4)
		{
			selected = '&';
			cout << "ugurla secildi!!!";
		}		
		else if (secim == 5)
		{
			selected = char(219);
			cout << "ugurla secildi!!!";
		}
		while (true)
		{
			system("cls");
			arr[a][b] = selected;
			cout << "\t\tScore: " << score << endl;
			board();
			move = _getch();
			//down arrow
			if (int(move == 80))
			{
				a++;
				if (a > 0)
				{
					arr[a - 1][b] = ' ';
				}
			}
			//up arrow
			else if (int(move) == 72)
			{
				a--;
				if (a > 0)
				{
					arr[a + 1][b] = ' ';
				}
			}
			//right arrow
			else if (int(move) == 77)
			{
				b++;
				if (b > 0)
				{
					arr[a][b - 1] = ' ';
				}
			}
			//left arrow
			else if (int(move) == 75)
			{
				b--;
				if (b > 0)
				{
					arr[a][b + 1] = ' ';
				}
			}
			if (arr[a][b] == '#')
			{
				cout << "Uduzdunuz!!!" << endl;
				break;
			}
			if (arr[a][b] == '*')
			{
				score++;
			}
			system("cls");
		}
	}
	else
	{
		return 0;
	}


	return 0;
}

