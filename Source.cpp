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

	cout << "1 - ���������� �������� � ����� ������\n2 - �������� �������� �� ����� ������\n3 - ������ ������\n4 - ����� �������� � ������\n";
	
	do
	{
		try {
			cin >> choise;

			switch (choise)
			{
			case ADD:
				cout << "������� ������� ��� ����������: ";
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
				cout << "������� ������� ��� ������: ";
				cin >> value;
				if (list.search(value) == true)
				{
					cout << "������� ������\n";
				}
				break;
			}
		}

		// ��������� ���������� ���� const char* 
		catch (const char* s) {
			cout << s;
		}

		// ������������� catch
		catch (...) {
			cout << "��������� ����������� ������\n";
		}
	} while (choise != 0);

	return 0;
}