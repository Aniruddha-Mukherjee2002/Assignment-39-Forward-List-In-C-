/* Below are two forward lists, first sort them and then merge them.
forwardlist1={3,2,9}
forwardlist2={8,1,2} */

#include<iostream>
#include<forward_list>
#include<iterator>

using namespace std;

int main()
{
    forward_list<int> f1,f2;

    f1.assign({3,2,9});
    f2.assign({8,1,2});

    f1.sort();
    f2.sort();

    f1.merge(f2);

    forward_list<int>::iterator i;

    for(i=f1.begin(); i!=f1.end(); i++)
    {
        cout<<*i<<" ";
    }

    return 0;
}
