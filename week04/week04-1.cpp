///week04-1.cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    cout<<"a�����׬O"<<a.size()<<endl;
    a.push_back(99);
    cout<<"�g�Lpush_back��"<<a.size()<<endl;
    vector<int> b(3);
    cout<<"b�����׬O"<<b.size()<<endl;
    b.push_back(99);
    for(int i=0;i<b.size();i++) cout<<b[i]<<' ';
    cout<<"�g�Lpush_back��b�ܪ��F"<<endl;
    vector<int> c(3,88);
    for(int i=0;i<c.size();i++) cout<<c[i]<<' ';
    cout<<"��l��(3,88)�N�|�O3��88"<<endl;
}
