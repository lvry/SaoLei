#include "game.h"

int main()
{
	int quit = 0;
	int select = 0;
	while (quit != 1){
		Menu();
		scanf("%d", &select);
		switch (select){
		case 1:
			Game();
			break;
		case 2:
			quit = 1;
			break;
		default:
			printf("��������������ѡ��");
			break;
		}
	}
	printf("ByeBye!");
	system("pause");
	return 0;
}