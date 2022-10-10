// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// int main()
// {
//     ll t;
//     cin>>t;
//     while(t--){
//         ll a,b,c,d;
//         cin>>a>>b>>c>>d;
//         ll x,y;
//         double x=a/b;
//         double y=c/d;
        
//         if(x>y){
//             if(rem1>1){
//                 cout<<"2"<<endl;
//             }
//             else{
//                 cout<<"1"<<endl;
//             }
            
//         }
//         else if(y>x){
//             if(rem2>1){
//                 cout<<"2"<<endl;
//             }
//             else {
//                 cout<<"1"<<endl;
//             }
//         }
//         else if(x==y){
//             cout<<"0"<<endl;
//         }
        
//     }
// }

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
 // here the code begins
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        double x = (double) a / (double) b;
        double y = (double) c / (double) d;
        if(x==y)
        cout<<"0"<<endl;
        else
        {
            if(x==0 || y==0)
            cout<<"1"<<endl;
            else
            {
                if(x>y)
                {
                    double hanoi = (double)(a*d)/(double)(b*c);
                    if(hanoi-(ll)hanoi==0)
                    {
                        cout<<"1"<<endl;
                    }
                    else
                    cout<<"2"<<endl;
                }
                else
                {
                    double good = (double)(b*c)/(double)(a*d);
                    if(good-(ll)good==0)
                    {
                        cout<<"1"<<endl;
                    }
                    else
                    cout<<"2"<<endl;
                }
            }
        }
    }
    return 0;
}