/* Create two forward lists of int type, and swap the elements of both forward lists with
each other. */

#include<iostream>
#include<forward_list>
#include<iterator>

using namespace std;

int main()
{
    forward_list<int> f1,f2;

    f1.assign({1,2,3,4});
    f2.assign({4,3,2,1});

    f1.swap(f2);

    forward_list<int>::iterator i;

    for(i=f1.begin(); i!=f1.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    for(i=f2.begin(); i!=f2.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;

    return 0;

}
