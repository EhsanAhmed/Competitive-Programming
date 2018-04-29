#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <string>
 long long a[10000000]={0}, b[10000000]={0};
using namespace std;
int main()
{
    long long n,m,sum=0,l,r,t;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
         b[i]=a[i];
    }
    sort(b,b+n);
     for(int i=0; i<n; i++)
    {
        a[i]+=a[i-1];
        b[i]+=b[i-1];
    }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        cin>>t>>l>>r;
        if(t==1)
        {
            if(l==0)
                cout<<a[r-1]<<endl;
            else
                cout<<a[r-1]-a[l-2]<<endl;
        }
        else
        {
          if(l==0)
                cout<<b[r-1]<<endl;
            else
               {
                    cout<<b[r-1]-b[l-2]<<endl;
               // cout<<a[r-1]<<" "<<b[l-2]<<endl;
               }
        }

    }

    return 0;
}
