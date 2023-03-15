/* 10. Write a program to assign values in forward_list using the values of another list */

#include<iostream>
#include<forward_list>
#include<iterator>

using namespace std;

int main()
{
    forward_list<int> f1,f2;

    f1.assign({1,2,3});

    f2.assign(f1.begin(),f1.end());

    forward_list<int>::iterator i;

    for(i=f2.begin(); i!=f2.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;

    return 0;
}
