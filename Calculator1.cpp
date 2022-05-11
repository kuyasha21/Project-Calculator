#include<bits/stdc++.h>

using namespace std;

void Add () {

     

     int num1 , num2  ;
    
    for( ; ; ){

        cin >> num1 >>num2 ;

       int sum = num1+num2 ;

       if(num1==0 && num2==0){

           break;
       }

       cout << sum <<endl;

    }
}

void Sub () {

     cout <<"Enter two number : ";

     int num1 , num2 ;
    
    for( ; ; ){

        cin >> num1 >>num2 ;

       int sub = num1-num2 ;

       if(num1==0 && num2==0){

           break;
       }

       cout << sub <<endl;

    }
}

void Mul () {

     cout <<"Enter two number : ";

     int num1 , num2 ;
    
    for( ; ; ){

        cin >> num1 >>num2 ;

       int mul = num1*num2 ;

       if(num1==0 && num2==0){

           break;
       }

       cout << mul <<endl;

    }
   
}

void Div () {

    cout <<"Enter two number : ";
  
    int num1 , num2 ;
    
    for( ; ; ){

        cin >> num1 >>num2 ;

       int Div = num1/num2 ;

       if(num1==0 && num2==0){

           break;
       }

       cout << Div <<endl;

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
