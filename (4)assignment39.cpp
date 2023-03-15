/* Write a program to reverse forward list elements. */

#include<iostream>
#include<forward_list>
#include<iterator>

using namespace std;

int main()
{
    forward_list<int> f1;

    f1.assign({78,45,67,90,23});

    f1.reverse();

    forward_list<int>::iterator i;

    for(i=f1.begin(); i!=f1.end(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}
