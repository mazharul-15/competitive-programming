#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,n;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        for(i=n-1;i>=0;)
        {
            if(s[i]=='a' || s[i]== 'e')
            {
                ans="."+s.substr(i-1,2)+ans;
                i-=2;
            }
            else
            {
                ans="."+s.substr(i-2,3)+ans;
                i-=3;
            }
        }
        cout<<ans.substr(1)<<endl;
    }
}
