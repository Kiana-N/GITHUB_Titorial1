#include <iostream>
using namespace std;
int main()
{
    float i,n,a,sum=0;
    cout<<"How many degrees would you enter?\t";
    cin>>n;
    for(i=1;i<=n;i++) {
        cout << "\n Enter degree" << i <<":" ;
        cin >> a;
        if(a>=29.5)
        {cout<<"\t It is hot.";}
        else if(a<=29.5&&a>=15.5){
            cout<<"\t It is pleasant.";}
        else if(a<=15.5){
            cout<<"\t It is cold.";}
        sum = sum + a;
    }
    cout<<"\t Average is: "<<sum/n;
    return 0;
}