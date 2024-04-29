//
// Created by 26236 on 4/29/2024.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    int width;
    long N;
    long l_i, w_i;
    long area = 0;

    cin>>width;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the buffer after reading a number
    cin>>N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the buffer after reading a number

    for (int i = 0; i < N; i++){
        cin>>l_i>>w_i;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the buffer after reading a number
        area += l_i * w_i;
    }
    long length;
    length = area / width;
    cout<<length<<endl;
    return 0;
}
