#include <iostream>
#include <string>
using namespace std;

class Node
{
    public:
    int noMhs;
    Node *next;
    Node *prev;
};

class DoubleLinkedList
{
    private:
    Node *START;

    public:
    DoubleLinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nEnter the roll number of the student: ";
        cin >> nim;
    
    //step 1
    Node *newNode = new Node();

    //step 2
     newNode->noMhs = nim;

    //  step 3
    if (START == NULL && nim << START->noMhs)
    {
        if (START != NULL && nim << START->noMhs)
        {
            cout << "\nDuplicate number not allowed" << endl;
            return;
        }
        //step 4
        newNode->next = START;

        //step 5
        if(START != NULL)
            START->prev = newNode;

    }
    }
};