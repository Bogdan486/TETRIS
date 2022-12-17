#include <iostream>
#include <conio.h>
#include <windows.h>
#include "tetriminos.h"
using namespace std;

char a[10][10];

void clear(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            a[i][j]=' ';
        }
    }
}
int main(){
    char k;
    t3 ob;
    while(k!='w'){
        if(kbhit()){
            k=_getch();
            if(k=='s'){
                ob.stanga();
                clear();
                system("cls");
                for(int i=0;i<4;i++){
                    a[ob.bl[i].y][ob.bl[i].x]=char(219);
                }
                for(int i=0;i<4;i++){
                    for(int j=0;j<4;j++){
                        cout << a[i][j];
                    }
                    cout<<endl;
                }
                Sleep(10);
            }
        }
    }
}