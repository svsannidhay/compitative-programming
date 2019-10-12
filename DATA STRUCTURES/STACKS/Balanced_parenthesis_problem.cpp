problem statement :- You have a bracket sequence made up of opening '(' and closing ')' parentheses. You must check if this bracket sequence is balanced.
A bracket sequence is considered balanced if for every prefix of the sequence, the number of opening brackets is greater than or equal to the number of closing brackets, and the total number of opening brackets is equal to the number of closing brackets
#include <iostream>
    using namespace std;
    int top;
    void  check (char str[ ], int n, char stack [ ])
    {
        for(int i = 0 ; i < n ; i++ )
        {
            if (str [ i ] == ‘(’)
            {
                top = top + 1;
                stack[ top ] = ‘ ( ’;
            }
            if(str[ i ] == ‘)’ )
            {
                if(top == -1 )
                {
                    top = top -1 ;
                    break ;
                 }
                else
                {
                     top = top -1 ;
                }
            }
        }
        if(top == -1)
            cout << “String is balanced!” << endl;
        else
            cout << “String is unbalanced!” << endl ;
    }

    int main ( ) 
    {
        //balanced parenthesis string.
        char str[  ] = { ‘(‘ , ‘a’ , ‘+’, ‘ ( ’, ‘b ’ , ‘-’ , ‘ c’ ,‘)’ , ‘ ) ’} ;

        // unbalanced string . 
        char str1 [ ] = { ‘(’ , ‘(’ , ‘a’ , ‘ + ’ , ‘ b’ , ‘)’ } ;
        char stack [ 15 ] ;
        top = -1;   
        check (str , 9 , stack );      //Passing balanced string   
        top = -1 ;
        check(str1 , 5 , stack) ;    //Passing unbalanced string
        return 0;

    } 