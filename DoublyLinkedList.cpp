#include "DoublyLinkedList.h"


void DoublyLinkedList::append(int value)
{
    Node* newNode = new Node(value);

    if (tail == nullptr)
    {
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void DoublyLinkedList::removeLast()
{
    if (head == nullptr)
    {  
        // Возбуждение исключения
        throw "\nСписок пуст. Удаление невозможно\n";
    }
    else if (head == tail)
    {
        delete head;
        head = tail = nullptr;
    }
    else
    {
        Node* temp = tail;

        tail = tail->prev;
        tail->next = nullptr;

        delete temp;
    }
}

void DoublyLinkedList::print() const
{
    Node* current = head;

    if (head == nullptr)
    {
        throw "\nСписок пуст. Вывод невозможен\n";
    }

    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

bool DoublyLinkedList::search(int value) const
{
    Node* current = head;

    if (head == nullptr)
    {
        throw "\nСписок пуст. Поиск невозможен\n";
    }

    while (current != nullptr)
    {
        if (current->data == value)
        {
            return true;
        }

        current = current->next;
    }

    throw "Такого элемента не существует\n";
}

DoublyLinkedList::~DoublyLinkedList()
{
    Node* current = head;

    while (current != nullptr)
    {
        Node* nextNode = current->next;

        delete current;
        current = nextNode;
    }
}