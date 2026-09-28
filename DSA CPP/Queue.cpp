#include <iostream>
using namespace std;

class Queue
{
    struct Node
    {
        int data;
        Node *next;
    };

    Node *front = NULL;
    Node *rear = NULL;

public:

    void enqueue(int x)
    {
        Node *newNode = new Node;
        newNode->data = x;
        newNode->next = NULL;

        if (rear == NULL)
        {
            front = rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }

        cout << x << " inserted\n";
    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout << "Queue is empty\n";
            return;
        }

        Node *temp = front;
        cout << temp->data << " deleted\n";

        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }

    void display()
    {
        if (front == NULL)
        {
            cout << "Queue is empty\n";
            return;
        }

        Node *temp = front;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue: ";
    q.display();

    q.dequeue();

    cout << "Queue after deletion: ";
    q.display();

    return 0;
}