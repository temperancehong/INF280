//
// Created by 26236 on 4/29/2024.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    string input_line;
    string date;
    int t_low = INT_MAX;
    int t_high = INT_MIN;
    int t_tmp;
    while (getline(cin, input_line)){
        stringstream ss(input_line);
        ss>>date;
//        cout<<"date: "<<date<<endl;
        while (ss>>t_tmp){
            if (t_tmp > t_high){
                t_high = t_tmp;
            }
            else if(t_tmp < t_low){
                t_low = t_tmp;
            }
        }
    }
    cout<<t_low<<" "<<t_high<<endl;
    return 0;

}
