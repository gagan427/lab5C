#include<iostream>
#include<math.h>

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    int x,y;
    cout<<"Enter any two integers"<<endl;
    cout<<"The width x="<<endl;
    cin>>x;
    cout<<"The height x="<<endl;
    cin>>y;

    auto c=sqrt(pow(x,3)+pow(y,4));

    cout<<"The third side="<<c<<endl;

    return 0;
}