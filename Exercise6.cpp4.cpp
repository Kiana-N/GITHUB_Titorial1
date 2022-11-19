#include <iostream>
using namespace std;
int main()
{int n,x=2,i,k;
    cout<<"\n Enter a number:";
    cin>>n;
    do{for (i=2,k=0;i<=x/2&&k==0;++i)
            if(x%i==0)
                ++k;
        if(k==0)
            cout << x<<"\t";
        x++;}
    while(x<=n);
    return 0;}