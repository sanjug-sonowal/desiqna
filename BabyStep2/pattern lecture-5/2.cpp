#include<iostream>
using namespace std;

int main(){
    int n = 5;

    for(int i = 0; i <= (n / 2); i++){
        // spaces
        for(int j = 0; j < (n / 2) - i; j++){
            cout<< " ";
        }

        // first half stars
        for(int j = 0; j < (2 * i) + 1; j++){
            cout<<"*";
        }



        cout<<endl;
    }

    for(int i = (n / 2); i >= 0; i--){
        

        // spaces
        for(int j = (n / 2) - i; j > 0; j--){
            cout<< " ";
        }

        // first half stars
        for(int j = (2 * i) + 1; j > 0; j--){
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}