//
// Created by 26236 on 4/29/2024.
//

#include <bits/stdc++.h>
using namespace std;

int main(){

    // define the variables for menu text, single price and item count
    string dish;
    int price=0;
    long count=0;
    long total_real = 0;
    long total_claim;
    // read the input constantly except when read in "TOTAL"
    // first line is the dish name
    while (getline(cin, dish)){
        // if the input is total, we break
        if (dish == "TOTAL"){
            cin >> total_claim;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the buffer after reading a number
            if (total_claim <= total_real){
                cout<<"PAY"<<endl;
            }
            else{
                cout<<"PROTEST"<<endl;
            }
            break;
        }
        else{
            // get the unit price and the count
            cin>>price>>count;
            // add the price to total
            total_real += price * count;
//            cout<<"total price now: "<<total_real<<endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Clear the buffer after reading a number
        }
    }
    return 0;
}
