#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

struct Node
{
    int data;
    Node* next; 
};


struct LinkedList
{
    Node* head;     
};


void initList(LinkedList* list);
void addToHead(LinkedList* list, int value);
int removeFromHead(LinkedList* list);
bool isEmpty(const LinkedList* list);
void cleanList(LinkedList* list);
void printList(const LinkedList* list);

#endif // LINKEDLIST_H
