#include  "Node.hpp"


class LinkedList
{
    public:
        LinkedList();
        void addEnd(string payload);
        string* toStringArray();
        string get(int index);
        void display();

    private:
        Node* head;
        int count;
};