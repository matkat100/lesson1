#include "LinkedList.h"

void initList(LinkedList* list)
{
    list->head = 0;
}

void addToHead(LinkedList* list, int value)
{
    if (value <= 0)
    {
        return;
    }
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = list->head;
    list->head = newNode;
}

int removeFromHead(LinkedList* list)
{
    if (isEmpty(list))
    {
        return -1;
    }

    Node* temp = list->head;
    int value = temp->data;
    list->head = list->head->next;
    delete temp;
    return value;
}

bool isEmpty(const LinkedList* list)
{
    return list->head == 0;
}

void cleanList(LinkedList* list)
{
    while (!isEmpty(list))
    {
        removeFromHead(list);
    }
}

void printList(const LinkedList* list)
{
    Node* current = list->head;
    while (current != 0)
    {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "NULL\n";
}
