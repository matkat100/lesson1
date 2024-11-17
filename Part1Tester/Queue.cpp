#include "Queue.h"

// Initialize the queue with a fixed size
void initQueue(Queue* q, unsigned int size)
{
    q->data = new unsigned int[size]; 
    q->size = size;
    q->front = 0;
    q->rear = -1;
    q->count = 0;
}

// Clean the queue and free allocated memory
void cleanQueue(Queue* q)
{
    delete[] q->data; 
    q->data = 0;   
    q->size = 0;
    q->front = 0;
    q->rear = -1;
    q->count = 0;
}

// Add an element to the queue
void enqueue(Queue* q, unsigned int newValue)
{
    if (isFull(q))
    {
        return; // Queue is full
    }
    q->rear = (q->rear + 1) % q->size; // Circular increment
    q->data[q->rear] = newValue;
    q->count++;
}

// Remove and return the front element of the queue
int dequeue(Queue* q)
{
    if (isEmpty(q))
    {
        return -1; // Queue is empty
    }
    int value = q->data[q->front];
    q->front = (q->front + 1) % q->size; // Circular increment
    q->count--;
    return value;
}

// Check if the queue is empty
bool isEmpty(Queue* q)
{
    return q->count == 0;
}

// Check if the queue is full
bool isFull(Queue* q)
{
    return q->count == q->size;
}