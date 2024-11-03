#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct Node
{
    int data;
    Node *next;
    Node(int data) : data(data), next(nullptr) {}
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList();
    ~LinkedList();

    void insertAtFirst(int data);
    void insertAtMiddle(int position, int data);
    void deleteAtFirst();
    void deleteAtMiddle(int position);
    void display();
};

#endif
