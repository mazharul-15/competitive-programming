#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool isSquare(ll x)
{
    ll l = 1, r = 1e9;
    ll mid;

    while(l <= r)
    {
        mid = (l + r) / 2;
        if(mid * mid == x) return true;
        if(mid * mid > x) r = mid - 1;
        else l = mid + 1;
    }

    return false;
}

int main()
{
    int t, n, val;
    ll sum;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        sum = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &val);
            sum += val;
        }

        if(isSquare(sum)) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
