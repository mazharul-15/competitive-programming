#include<bits/stdc++.h>
using namespace std;

int main() {

    int t, n, id, ans;
    int arr[10];

    scanf("%d", &t);

    while(t--) {

        int mn = 10;
        ans = 1;

        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
            if(mn > arr[i]){
                id = i;
                mn = arr[i];
            }
        }
        arr[id] += 1;

        for(int i = 0; i < n; i++) ans *= arr[i];

        printf("%d\n", ans);
    }
    return 0;
}
