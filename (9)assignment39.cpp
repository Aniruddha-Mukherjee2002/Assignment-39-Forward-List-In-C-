/* Write a C++ code to demonstrate working of splice_after() in forward list. */

#include<iostream>
#include<forward_list>
#include<iterator>

using namespace std;

int main()
{
    forward_list<int> f1,f2;
    f1.assign({1,2,3,4});
    f2.assign({10,50});

    f2.splice_after(f2.begin(),f1,f1.begin(),f1.end());

    forward_list<int>::iterator i;

    for(i=f2.begin(); i!=f2.end(); i++)
    {
        cout<<*i<<" ";
    }

    cout<<endl;
    return 0;
}
