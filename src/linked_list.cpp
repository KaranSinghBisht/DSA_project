#include "linked_list.h"
#include <iostream>

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList()
{
    Node *current = head;
    while (current)
    {
        Node *next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::insertAtFirst(int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void LinkedList::insertAtMiddle(int position, int data)
{
    if (position < 1)
        return;
    Node *newNode = new Node(data);
    if (position == 1)
    {
        insertAtFirst(data);
        return;
    }
    Node *current = head;
    for (int i = 1; i < position - 1 && current; i++)
    {
        current = current->next;
    }
    if (current)
    {
        newNode->next = current->next;
        current->next = newNode;
    }
}

void LinkedList::deleteAtFirst()
{
    if (!head)
        return;
    Node *temp = head;
    head = head->next;
    delete temp;
}

void LinkedList::deleteAtMiddle(int position)
{
    if (position < 1 || !head)
        return;
    if (position == 1)
    {
        deleteAtFirst();
        return;
    }
    Node *current = head;
    for (int i = 1; i < position - 1 && current->next; i++)
    {
        current = current->next;
    }
    if (current->next)
    {
        Node *temp = current->next;
        current->next = temp->next;
        delete temp;
    }
}

void LinkedList::display()
{
    Node *current = head;
    while (current)
    {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "NULL\n";
}
