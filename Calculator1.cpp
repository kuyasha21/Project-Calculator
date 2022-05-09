#include<bits/stdc++.h>

using namespace std;

void Add () {
    cout << "Hello" ;
}

void Sub () {
    cout << "Hello" ;
}

void Mul () {
    cout << "Hello" ;
}

void Div () {
    cout << "Hello" ;
}

int main(){

    cout << "What operation you want to do : " ;

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
