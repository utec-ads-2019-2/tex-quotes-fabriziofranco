#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string quote;
    int contador=0;
    while (getline(cin, quote)){
        if(quote.empty())
            break;
        for(int i=0 ; i<quote.size();i++){
            if(quote[i]=='\"'){
                if(contador==0)
                    quote.replace(quote.find('\"'),1, "``");
                else if(contador==1)
                    quote.replace(quote.find('\"'),1, "\'\'");
                contador++;
                if(contador==2)
                    contador=0;
        }}
    cout<<quote<<endl;}
    return 0;
}
