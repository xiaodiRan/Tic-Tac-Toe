#include "first.h"

int main(){
    while(1){
        cout<<"enter your prefer symbol: \n";
        char t;
        cin>>t;
        if (t!='X' && t!='O'){
            cout<<"Invalid symbol, X or O is avaiable. Try again.\n";
            continue;
        }
        int x,y;
        board b(t);
        while(!b.done){
            cout<<b.curActive()<<" gamer enter your next pos:\n";
            cin>>x>>y;
            b.getOrder(x,y);
        }
        cout<<"play again ? Y for yes, others for no\n";
        cin>>t;
        if (t!='Y') break;
    }
}