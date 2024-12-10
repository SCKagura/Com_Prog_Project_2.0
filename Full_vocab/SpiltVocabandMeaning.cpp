#include<iostream>
#include <fstream>
#include <string> 
using namespace std ;

int main() 
{ 
    ifstream vocab ;
    ofstream dest ;
    ofstream aaa;
    aaa.open  ("Full_vocab\\vocab1.txt");
    vocab.open("Full_vocab\\vocabandmeaning.txt") ;
    dest.open ("Full_vocab\\meaning2.txt") ;
    string textline ;
    int i = 1;
    while (getline(vocab,textline))
    {
        if(i%2 == 0) dest << textline <<endl ;
        else aaa << textline << endl;
        i++;
        
    }
    aaa.close();
    vocab.close() ;
    dest.close() ;
    return 0;
}