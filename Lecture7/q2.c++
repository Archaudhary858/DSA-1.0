#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // int place = 1;
    // int bit = 0;
    // int binary = 0;

    // Step 1: Convert to binary (in decimal representation)
    // int temp = n;
    // while (temp != 0) {
    //     bit = (temp & 1);
    //     binary = bit * place + binary;
    //     temp = temp >> 1;
    //     place *= 10;
    // }

    // // Step 2: Take 1's complement of the binary number
    // int complement = 0;
    // place = 1;
    // int tempBinary = binary;
    // while (tempBinary != 0) {
    //     int digit = tempBinary % 10;
    //     digit = (digit == 0) ? 1 : 0; // flip 0 to 1 and 1 to 0
    //     complement = digit * place + complement;
    //     place *= 10;
    //     tempBinary /= 10;
    // }

    // // Step 3: Convert the complemented binary back to decimal
    // int answer = 0;
    // int i = 0;
    // while (complement != 0) {
    //     int digit = complement % 10;
    //     answer += digit * pow(2, i);
    //     complement /= 10;
    //     i++;
    // }     

    // cout << "1's Complement value: " << answer << endl;
    // return 0;


    //Another approach 
    
    int m = n;
    int mask = 0;
    if(n == 0){
        cout << 1;
    }
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int ans = (~n) & mask;
    cout<<ans;
}
