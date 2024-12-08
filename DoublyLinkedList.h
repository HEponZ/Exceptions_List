#pragma once
#include <iostream>

using namespace std;


class Node 
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList
{
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void append(int value);

    void removeLast();

    void print() const;

    bool search(int value) const;

    ~DoublyLinkedList();
};