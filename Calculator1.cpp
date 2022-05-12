#include<bits/stdc++.h>

using namespace std;

void Add () {
    cout << "Hello 911" << endl;
}

void Sub () {

}

void Mul () {

    int n=1;
    cout << "----------Enter '00' to quit----------" << endl; ;
    
    for (int i=1; ; i++) {
        int s;
        cout << "Enter " << i << " value: ";
        cin >> s;

        if (s == 0){
            break;
        }

        n *= s;
        cout << "Result : " << n << endl;
    }
   
}

void Div () {

    cout << "----------Enter '00' to quit----------" << endl;

    double n;
    cout << "Enter 1 value: ";
    cin >> n;

    for(int i=2; ; i++){
        double s;
        cout << "Enter " << i << " value : " ;
        cin >> s;

        if (s == 0){
            break;
        }

        n /= s;
        cout << "Result : " << n << endl;
    }
}

int main(){

    cout << "What operation you want to do : " ;

    char ch ;
    cin >> ch ;

    switch (ch){

        case '+' : Add() ;
        break;

        case '-' :Sub() ;
        break ;

        case '*' : Mul() ;
        break;

        case '/' :Div() ;
        break;

        default : cout << "Error" ;
    }

    return 0;
}