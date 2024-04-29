//
// Created by 26236 on 4/29/2024.
//

#include <bits/stdc++.h>
using namespace std;

int main(){
    string input_line;
    float single_money;
    float total=0;
    while (getline(cin, input_line)){
        if (input_line.empty()){
//            cout<<total<<endl;
            break;
        }
        try{// exception management
//            cout<<"read in"<<input_line<<endl;
            single_money = stof(input_line);
            total += single_money;
        }
        catch (const invalid_argument& e) {
            cout << "Invalid input, please enter numbers only." << endl;
        }
        catch (const out_of_range& e) {
            cout << "Input out of range." << endl;
        }
    }
    cout<<total<<endl;
    return 0;
}