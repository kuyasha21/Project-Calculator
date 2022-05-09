#include<bits/stdc++.h>

using namespace std;

void multiple () {
    cout << "Hello" ;
}

int main(){

    cout << "what opperation you want to do : " ;

    char ch ;

    cin >> ch ;

    switch (ch){

        case '+' : cout << "Addition" ;

        break;

        case '-' : cout << "Substraction" ;

        break ;

        case '*' : cout << "Multiplication" ;

        break;

        case '/' : cout << "Division" ;

        break;

        default : cout << "Error" ;
    }



    return 0;
}
