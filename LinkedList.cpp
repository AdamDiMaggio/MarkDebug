#include "LinkedList.hpp"

LinkedList::LinkedList()
{
    this->head =0;
    this->count = 0;
}

string LinkedList::get(int index)
{
    Node* currNode = this->head;
    for(int i = 0;i < index; i++ )
    {
        currNode = currNode->getNextNode();
    }
    return currNode->getPayload();
}

void LinkedList::addEnd(string payload)
{
    Node* n = new Node(payload);
    if(!this->head)
    {
        this->head = n;
    }
    else
    {
        //run to the end of the list
        Node* currNode = this->head;
        while(currNode->getNextNode())
        {
            currNode = currNode->getNextNode();
        }
        currNode->setNextNode(n);
    }
    this->count++;
    
}

string* LinkedList::toStringArray() //convert linked list to string array
{
    //cout<<"ll count: "<< this->count << "\n";
    
    string strtok[this->count];
    Node* currNode = this->head;

    for(int i= 0; i < this->count; i++)
    {
        //cout << "currNode: " << currNode->getPayload()<<"\n";
        strtok[i] = currNode->getPayload();
        cout << &strtok[i]<<"\n";
        //cout << i<<": "<<strtok[i]<<"\n";
        currNode = currNode->getNextNode();
    }
    /*for(int i=0;i< this->count;i++)
    {
        cout << strtok[i] << ", ";
    }
    cout << "\n";
    */
    //string* ptr = &strtok[0];
    //return strtok; 
}

void LinkedList::display()
{
    for(int i= 0; i < this->count; i++)
    {
        cout << this->get(i) << "\n";
    }
}