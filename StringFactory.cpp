#include "StringFactory.hpp"
#include  <iostream>
using namespace std;



string* StringFactory::split(string s, string delims)
{
    cout << s <<"\n";
    cout << delims <<"\n";
    LinkedList* ll = new LinkedList();
    int stringLength = s.length();
    //cout << stringLength << "\n";
    int delimsLength = delims.length();
    //cout << delimsLength << "\n";
    string token = "";
    string letters = "";

    for(int i = 0; i<stringLength;i++)  //runs through whole string
    {
        for(int j = 0; j< delimsLength;j++)  //checks each character in string against the delims
        {
            if(s[i] != delims[j])  //if the string element is not equal
            {
                //option 1: we've checked all delims against the current string element and should add it to the substring
                if(j == 3)
                {
                    letters = letters + s[i];
                    if(i == stringLength - 1)
                    {
                        ll->addEnd(letters);
                    }
                    break;
                }
                //option 2: we haven't checked all delims and need to check the next one
                else
                {
                    continue;   //increment j and check the next delim                 
                }
            }
            else    //if the current string element is equal to a delim
            {
                int holder = letters.length();
                //substring is empty
                if(holder == 0) 
                {
                    token = delims[j];
                    ll->addEnd(token);
                    break;
                }
                //substring isn't empty
                else
                {
                    ll->addEnd(letters);
                    letters = "";
                    token = delims[j];
                    ll->addEnd(token);
                    break;
                }
            }

        }
    }
    cout << "*****\n";
    //ll->display();
    return ll->toStringArray();
    delete ll;
}
