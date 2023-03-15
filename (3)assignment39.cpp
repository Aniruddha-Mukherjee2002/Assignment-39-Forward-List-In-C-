/* Create a forward list insert elements from 1 to 10 and find the sum of elements. */

#include<iostream>
#include<forward_list>
#include<iterator>

using namespace std;

int main()
{
    int sum=0;
    forward_list<int> f1;

    f1.assign({1,2,3,4,5,6,7,8,9,10});

    forward_list<int>::iterator i;

    for(i=f1.begin(); i!=f1.end(); i++)
    {
       sum+=*i;
    }
    cout<<"Sum from 1 - 10 is : "<<sum<<endl;

    return 0;
}
