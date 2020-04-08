#include <string.h>
#include <iostream>
#include "StringFactory.hpp"

using namespace std;

void displayArrayHelper(string* ar, int size)
{
    for(int i=0;i<size;i++)
    {
        cout << ar[i] << ", ";
    }
    cout << "/n";
}

void displayArray(string* ar)
{
    displayArrayHelper(ar, ar->length());
}

int main()
{
    string s = "1+51+91-71*91/181*1-";
    string delims = "+-*/";
    //StringFactory* sf = new StringFactory();
    string* ptr = StringFactory::split(s,delims);
    //cout << ptr[0] << "\n";
    //cout << ptr[1] << "\n";
    //cout << ptr[2] << "\n";
    //cout << ptr[3] << "\n";




    //cout << *ptr <<"\n";
    //cout << *ptr <<"\n";
    //cout << ptr + sizeof(string) <<"\n";
    //cout << ptr[1] << "\n";
    //cout<< sizeof(string)<<"\n";
    //cout<<sizeof(ptr)<<"\n";

    //ar[2] -> (ar + (2 * sizeof(int))
    /*for(int i=0;i< 14;i++)
    {
        cout << ptr[i] << ", ";
    }
    cout << "\n";*/
    //int length = sizeof(ar)/sizeof(string);
    //cout<<"length: "<<length<<"\n";
    //cout << "**"<<ar[0] <<"\n";
    // displayArray(ar);


     

    /*LinkedList* ll = new LinkedList();
    ll->addEnd("Hello");
    ll->addEnd("yolo");
    ll->addEnd("World");
    ll->addEnd("bazinga");
    ll->display();
    delete ll;
    */
    /*
    char s[] = "123+12-2";  //s[] is actually a char*, pointing at the firts element in this char array, '1'
    char delims[] = "+-/*";
    char* tempString;
    do
    {
        tempString = strtok(s, delims);
        cout << tempString << "\n";
    } 
    while (tempString);
    */

   /*char s[] = "123+13-2";
   string s2 = "123+13-2";  //solid object, use .length
   string s4 = "123+13-2";  //solid object, use .length
   string* s3 = &s2;    //pointer, use ->length
   char ar[20];

   //cout << sizeof(ar)/sizeof(int) << "\n";
    cout << sizeof(ar)/sizeof(char) << "\n";
    cout << sizeof(s)/sizeof(char) << "\n";
    cout << s2.length()<< "\n";
    cout << s3->length()<< "\n";
    cout << (*s3).length()<< "\n";
    cout << &s2 << "\n";
    cout << &s4 << "\n";*/


    
}