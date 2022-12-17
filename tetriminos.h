#include <iostream>
using namespace std;

struct cord{
    int x;
    int y;
};

class miscare{
    public:
    void diagonala(int &x,int &y){
        if(y==2){
            y--;
            x--;
            return;
        }
        if(x==0 && y==1){
            y--;
            x++;
            return;
        }
        if(y==0){
            x++;
            y++;
            return;
        }
        if(x==2 && y==1){
            x--;
            y++;
        }
    }
    void colturi(int &x,int &y){
        if(x==2 && y==2){
            x-=2;
            return;
        }
        if(x==0 && y==2){
            y-=2;
            return;
        }
        if(x==0 && y==0){
            x+=2;
            return;
        }
        if(x==2 && y==0){
            y+=2;
        }
    }
};

class t1{
    private:
        miscare ob;
    public:
        cord bl[4];
        t1(){
            bl[0].x=1;
            bl[0].y=1;
            bl[1].x=0;
            bl[1].y=1;
            bl[2].x=1;
            bl[2].y=0;
            bl[3].x=2;
            bl[3].y=0;
        }
        void stanga(){
            ob.diagonala(bl[1].x,bl[1].y);
            ob.diagonala(bl[2].x,bl[2].y);
            ob.colturi(bl[3].x,bl[3].y);
        }
};
class t2{
    private:
        miscare ob;
    public:
        cord bl[4];
        t2(){
            bl[0].x=1;
            bl[0].y=1;
            bl[1].x=2;
            bl[1].y=1;
            bl[2].x=1;
            bl[2].y=0;
            bl[3].x=0;
            bl[3].y=0;
        }
        void stanga(){
            ob.diagonala(bl[1].x,bl[1].y);
            ob.diagonala(bl[2].x,bl[2].y);
            ob.colturi(bl[3].x,bl[3].y);
        }
};
class t3{
    private:

        miscare ob;
    public:
            cord bl[4];
        t3(){
            bl[0].x=1;
            bl[0].y=1;
            bl[1].x=0;
            bl[1].y=2;
            bl[2].x=1;
            bl[2].y=2;
            bl[3].x=2;
            bl[3].y=2;
        }
        void stanga(){
            ob.colturi(bl[1].x,bl[1].y);
            ob.diagonala(bl[2].x,bl[2].y);
            ob.colturi(bl[3].x,bl[3].y);
        }
};
class t4{
    private:

        miscare ob;
    public:
            cord bl[4];
        t4(){
            bl[0].x=1;
            bl[0].y=1;
            bl[1].x=1;
            bl[1].y=2;
            bl[2].x=1;
            bl[2].y=0;
            bl[3].x=2;
            bl[3].y=0;
        }
        void stanga(){
            ob.diagonala(bl[1].x,bl[1].y);
            ob.diagonala(bl[2].x,bl[2].y);
            ob.colturi(bl[3].x,bl[3].y);
        }
};
class t5{
    private:

        miscare ob;
    public:
            cord bl[4];
        t5(){
            bl[0].x=1;
            bl[0].y=1;
            bl[1].x=1;
            bl[1].y=2;
            bl[2].x=1;
            bl[2].y=0;
            bl[3].x=0;
            bl[3].y=0;
        }
        void stanga(){
            ob.diagonala(bl[1].x,bl[1].y);
            ob.diagonala(bl[2].x,bl[2].y);
            ob.colturi(bl[3].x,bl[3].y);
        }
};
class t6{
    private:

        int k=0;
    public:
            cord bl[4];
        t6(){
            bl[0].x=1;
            bl[0].y=0;
            bl[1].x=1;
            bl[1].y=1;
            bl[2].x=1;
            bl[2].y=2;
            bl[3].x=1;
            bl[3].y=3;
        }
        void stanga(){
            if(k==0){
                bl[0].x=0;
                bl[0].y=1;
                bl[1].x=1;
                bl[1].y=1;
                bl[2].x=2;
                bl[2].y=1;
                bl[3].x=3;
                bl[3].y=1;
                k=1;
                return;
            }
            else{
                bl[0].x=1;
                bl[0].y=0;
                bl[1].x=1;
                bl[1].y=1;
                bl[2].x=1;
                bl[2].y=2;
                bl[3].x=1;
                bl[3].y=3;
                k=0;
            }
        }
};
class t7{
    public:
            cord bl[4];
        t7(){
            bl[0].x=0;
            bl[0].y=0;
            bl[1].x=1;
            bl[1].y=0;
            bl[2].x=0;
            bl[2].y=1;
            bl[3].x=1;
            bl[3].y=1;
        }
};