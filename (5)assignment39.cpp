/* 5. Write a program remove all consecutive duplicate elements from the forward list */

#include<iostream>
#include<forward_list>
#include<iterator>

using namespace std;

int main()
{
    forward_list<int> f1;
    f1.assign({1,2,2,3,4,5,5,6,6,7});

    f1.unique();

    forward_list<int>::iterator i;

    for(i=f1.begin(); i!=f1.end(); i++)
    {
        cout<<*i<<" ";
    }


    return 0;
}
