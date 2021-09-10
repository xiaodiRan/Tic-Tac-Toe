#include<iostream>
#include<string>
using namespace std;

class board{
    private:
        char B[3][3];
        bool firstHand=true;//default 'X';
        int num=0;
    public:
        bool done=false;
        board(){
            for (int i=0;i<3;++i){
                for (int j=0;j<3;++j) B[i][j]=' ';
            }
        }
         void set(char symbol);
        board(char symbol){
            firstHand=symbol=='X' ? true:false;
            for (int i=0;i<3;++i){
                for (int j=0;j<3;++j) B[i][j]='*';
            }
        };
       
        void display() const;
        void getOrder(int x,int y);  
        char curActive() const;
};