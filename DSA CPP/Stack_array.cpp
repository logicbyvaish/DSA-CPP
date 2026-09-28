#include <iostream>
using namespace std;

class Stack
{
    int stack[50];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int x)
    {
        if (top == 49)
        {
            cout << "Stack Overflow!" << endl;
        }
        else
        {
            top++;
            stack[top] = x;
            cout << x << " pushed into stack." << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow!" << endl;
        }
        else
        {
            cout << stack[top] << " popped from stack." << endl;
            top--;
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty!" << endl;
        }
        else
        {
            cout << "Top element: " << stack[top] << endl;
        }
    }

    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty!" << endl;
        }
        else
        {
            cout << "Stack elements are:" << endl;

            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << endl;
            }
        }
    }
};

int main()
{
    Stack s;
    int choice, value;

    do
    {
        cout << "\n--- STACK MENU ---" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            s.push(value);
            break;

        case 2:
            s.pop();
            break;

        case 3:
            s.peek();
            break;

        case 4:
            s.display();
            break;

        case 5:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}