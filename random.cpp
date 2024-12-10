#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;




int main() {
    srand(time(0));
    ifstream vocab,mean;
    vocab.open("Full_vocab\\vocab.txt");
    mean.open("Full_vocab\\meaning2.txt");
    string textline,text;
    string wordlist[100],meaning[100];
    int i=0,a=0;
    int size = sizeof(wordlist)/sizeof(wordlist[0]);
    while(getline(vocab,textline)){
        wordlist[i]=textline;
        i++;
    }
    while(getline(mean,text)){
        meaning[a]=text;
        a++;
    }
    for(int j = 0 ; j< 100 ; j++ )
   {

       cout<<wordlist[j] <<" = "<<meaning[j] << endl  ;
    }
    // cout << "Word: " << wordlist[rand()%76];
    
    return 0;
}
