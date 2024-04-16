#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int k;
	puts("Какая сегодня погода ? (1 - Идёт дождь, 2 - Солнечно, 3 - Я не знаю)"); 
	cin >> k;
	switch (k)
	{
	case 1: { puts("У тебя есть зонт и если есть можешь дать мне его? (1-Да,конечно, 2-У меня нет зонта, 3-Есть, но я не смогу тебе его дать)");
		cin >> k;
		switch (k)
		{
		case 1: puts("Большое спасибо!"); break;
		case 2: puts("Жаль"); break;
		case 3: puts("Очень жаль"); break;
		default: puts("Некорректный вариант");
		}
		break;
	          }
	
	case 2:  puts("Отличная новость");
		break;
		
	case 3: puts("Очень жаль"); break;
	default: puts("Некорректный вариант");
		break;
	}
	return 0;
}