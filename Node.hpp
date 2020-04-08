#include  <iostream>
using namespace std;


class Node
{
    private:
        string payload;
        Node* nextNode;
        

    public:
        Node(string payload);
        string getPayload();
        Node* getNextNode();
        void setNextNode(Node* n);
        
        
};