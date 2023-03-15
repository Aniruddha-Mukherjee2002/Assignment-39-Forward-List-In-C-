/* Create two forward lists of int type, and merge them. */

#include<iostream>
#include<forward_list>
#include<iterator>

using namespace std;

int main()
{
    forward_list<int> f1,f2;

    f1.assign({1,2,3,4,5});
    f2.assign({6,7,8,9,10});

     f1.merge(f2);

    forward_list<int>::iterator i;

   cout<<"After merging : "<<endl;
    for(i=f1.begin(); i!=f1.end(); i++)
    {
        cout<<*i<<" ";
    }

    return 0;
}
