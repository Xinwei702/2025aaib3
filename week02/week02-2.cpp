///week02-2.cpp
///C++
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout<<"�п�J�Ʀr";
    string a,ans;
    cin>>a;
    for(int i=a.length()-1;i>=0;i--){
        ans=ans+a[i];
    }
    cout<<a<<ans;
}
