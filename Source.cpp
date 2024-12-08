#include "DoublyLinkedList.h"

int main()
{
	setlocale(LC_ALL, "rus");
	DoublyLinkedList list;
	int choise, value;
	enum MENU {
		EXIT = 0,
		ADD,
		DELETE,
		PRINT,
		SEARCH,
	};

	cout << "1 - Добавление элемента в конец списка\n2 - Удаление элемента из конца списка\n3 - Печать списка\n4 - Поиск элемента в списке\n";
	
	do
	{
		try {
			cin >> choise;

			switch (choise)
			{
			case ADD:
				cout << "Введите элемент для добавления: ";
				cin >> value;
				list.append(value);
				break;
			case DELETE:
				list.removeLast();
				break;
			case PRINT:
				list.print();
				break;
			case SEARCH:
				cout << "Введите элемент для поиска: ";
				cin >> value;
				if (list.search(value) == true)
				{
					cout << "Элемент найден\n";
				}
				break;
			}
		}

		// Обработка исключений типа const char* 
		catch (const char* s) {
			cout << s;
		}

		// Универсальный catch
		catch (...) {
			cout << "Произошла неизвестная ошибка\n";
		}
	} while (choise != 0);

	return 0;
}