#include <iostream>
using namespace std;

class Stack
{
    struct Node
    {
        int data;
        Node *next;
    };

    Node *top = NULL;

public:

    void push(int x)
    {
        Node *newNode = new Node{x, top};
        top = newNode;
    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow\n";
            return;
        }

        Node *temp = top;
        top = top->next;
        delete temp;
    }

    void display()
    {
        Node *temp = top;

        if (temp == NULL)
        {
            cout << "Stack is empty\n";
            return;
        }

        cout << "Stack: ";

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
    Stack s;
    int choice, x;

    do
    {
        cout << "\n1.Push";
        cout << "\n2.Pop";
        cout << "\n3.Display";
        cout << "\n0.Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> x;
            s.push(x);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.display();
            break;
        }

    } while (choice != 0);

    return 0;
}