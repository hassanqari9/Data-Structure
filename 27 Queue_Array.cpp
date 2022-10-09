// Queue
// FIFO(First In First Out)
// This is mainly used in case of resource allocation

#include <iostream>
#define max 100
using namespace std;
void enque(int );
int deque();
void view();
int queue[max];
int front = -1, rear = -1;

int main()
{
    int ch, item;
    while (1)
    {
        cout << "\n1 For Enque, 2 For Deque, 3 For View, 4 For Exit: " << endl;
        cin >> ch;
        if (ch == 1)
        {
            cout << "Enter item to Enque: " << endl;
            cin >> item;
            enque(item);
        }
        else if (ch == 2)
        {
            item = deque();
            if (item == -1)
                cout << "Underflow";
            else
                cout << item;
        }
        else if (ch == 3)
            view();
        else
            break;
    }
}

void enque(int item)
{
    if (rear < max)

        queue[++rear] = item;
    else
        cout << "OVerlflow" << endl;
}

int deque()
{
    if (front <= rear)

        return queue[front++];
    else 
    return -1;
        
}

void view()
{
    int i;
    if(front>rear)
    cout<<"empty"<<endl;
    else
    {
        for(i=front;i<=rear;i++)
        cout<<queue[i];
    }
}