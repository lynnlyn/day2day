//
//  main.cpp
//  2017.12.15
//
//  Created by Lynn on 15/12/2017.
//  Copyright © 2017 Lynn. All rights reserved.
//

#include <iostream>

using namespace std;

int main(){
    int i;
    int j;
    bool keepgoing = true;
    int answer;
    for (int loop = 0; loop < 10; loop++)
    {
        cout << loop <<" ";
    }
    while (keepgoing ) {
        
    
        cout << "Enter a number: ";
        cin >> i;
        cout << "You entered "<< i <<".Enter another number: ";
        cin >> j;
        
        if (i < j)
        {
            cout <<"The first number "<< i << ",is less than the second number," << j << endl;
        }
        else{
            cout << "The first number"<< i << ",is not less than the second number,"<< j << endl;
            
        }
        if (i == j) {
            cout << "The first number " << i << ", is equal with the second number" << j << endl;
        }
        if (i > j) {
            cout << "The first number " << i << ", is greater than the second number " << j << endl;
        }
        cout << "Compare another? 0 for no: ";
        cin >> answer;
        if (answer == 0){
            keepgoing = false;
        }
    }
        return 0;
}
