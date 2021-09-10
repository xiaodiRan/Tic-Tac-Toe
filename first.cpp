#include"first.h"



void board::set(char symbol){
    firstHand=symbol=='X' ? true:false;
}

void board::display() const{
    for (int i=0;i<3;++i){
        for (int j=0;j<3;++j){
            cout<<B[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"___________\n";
}

void board::getOrder(int x,int y){
    num++;
    bool cur=(num%2==0 ? !firstHand:firstHand);
    if (x<0 || x>=3 || y<0 || y>=3 || B[x][y]!='*'){
        cout<<"Invalid input, please enter again: \n";
        return;
    }
    B[x][y]=cur ? 'X':'O';
    display();
    if ( B[0][0]!='*' && B[0][0]==B[0][1] && B[0][1]==B[0][2]) done=true;
    if ( B[1][0]!='*' && B[1][0]==B[1][1] && B[1][1]==B[1][2]) done=true;
    if ( B[2][0]!='*' && B[2][0]==B[2][1] && B[2][1]==B[2][2]) done=true;
    if ( B[0][0]!='*' && B[0][0]==B[1][0] && B[0][0]==B[2][0]) done=true;
    if ( B[0][1]!='*' && B[0][1]==B[1][1] && B[0][1]==B[2][1]) done=true;
    if ( B[0][2]!='*' && B[0][2]==B[1][2] && B[0][2]==B[2][2]) done=true;
    if ( B[0][0]!='*' && B[0][0]==B[1][1] && B[0][0]==B[2][2]) done=true;
    if ( B[0][2]!='*' && B[0][2]==B[1][1] && B[0][2]==B[2][0]) done=true;
    if (done) cout<<B[x][y]<<" Gamer wins!\n";
}
char board::curActive() const{
    bool cur=(num%2==0 ? !firstHand:firstHand);
    return cur ? 'O':'X';
}