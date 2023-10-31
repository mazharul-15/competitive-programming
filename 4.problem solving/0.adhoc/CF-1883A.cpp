#include<bits/stdc++.h>
using namespace std;

int main() {

    int test;
    char str[4];
    string ans;

    //cin>> t;
    scanf("%d", &test);

    while(test--) {

        //fflush(stdin);
        scanf("%s", str);

        if(str[0] == 'a') ans = "YES";
        else if(str[0] == 'b') {
            if(str[1] == 'a') ans = "YES";
            else ans = "NO";
        }
        else {
            if(str[1] == 'b') ans = "YES";
            else ans = "NO";
        }

        cout<< ans << "\n";
    }

    return 0;
}
