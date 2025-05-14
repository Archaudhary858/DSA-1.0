#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int ans = 0;
    int place = 1;

    while(n != 0){
        int bit = n & 1;
        ans = (bit * place) + ans;
        n = n >> 1;
        place *= 10;
    }

    cout << "Binary representation: " << ans << endl;
    return 0;
}
