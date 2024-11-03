#include "linked_list.h"
#include <iostream>
using namespace std;

void displayMenu()
{
    cout << "1. Insert at First\n";
    cout << "2. Insert at Middle\n";
    cout << "3. Delete at First\n";
    cout << "4. Delete at Middle\n";
    cout << "5. Display List\n";
    cout << "6. Exit\n";
    cout << "Choose an option: ";
}

int main()
{
    LinkedList list;
    int choice, data, position;

    while (true)
    {
        displayMenu();
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter data: ";
            cin >> data;
            list.insertAtFirst(data);
            break;
        case 2:
            cout << "Enter position and data: ";
            cin >> position >> data;
            list.insertAtMiddle(position, data);
            break;
        case 3:
            list.deleteAtFirst();
            break;
        case 4:
            cout << "Enter position: ";
            cin >> position;
            list.deleteAtMiddle(position);
            break;
        case 5:
            list.display();
            break;
        case 6:
            return 0;
        default:
            cout << "Invalid option\n";
        }
    }
}
