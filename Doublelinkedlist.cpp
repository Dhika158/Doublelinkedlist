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

class Doublelinkedlist
{
    private:
      Node *START;

    public:
      Doublelinkedlist()
      {
        START = NULL;
      }

      void addNode()
      {
        int nim;
        string nm;
        cout << "\nEnter the roll number of the student: ";
        cin >> nim;

        // Step 1: Allocate memory for new node
        Node *newNode = new Node();

        // Step 2: Assign value to the data new fields
        newNode->noMhs = nim;
      }
}