#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
int t,a,b;
int main()
{
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr[n+1];
        int firstmaxval=0,scndmaxval=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        firstmaxval = arr[n];
        scndmaxval = arr[n-1];
        if(firstmaxval-scndmaxval > 1){
            cout>>"NO\n";
        }
        else{
            cout>>"YES\n";
        }

    }
}
