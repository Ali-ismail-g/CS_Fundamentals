#include <iostream>

using namespace std;
class point{
private:
    int x,y;
public:
    point(){}
    point(int xc,int yc){
    x = xc,y = yc;
    }
    int get_x(){
        return x;
    }
    int get_y(){
        return y;
    }
    point operator+(point& obj){
        point res;
        res.x = this->x + obj.x;
        res.y = y + obj.y;
        return res;
    }
    void operator++(int x){
        this->x++;
        this->y++;
    }
    bool operator>(point& obj){
        return (x>obj.x && y>obj.y);
    }

};
int main()
{
    point p1(2,8);
    point p2(1,4);
    point p3;
    p3 = p1+p2;///p1.operator+(p2)
    p1++;///p1.operator++(1)
    //++p2;
    cout<<p3.get_x()<<" "<<p3.get_y()<<endl;
    cout<<p1.get_x()<<" "<<p1.get_y()<<endl;
    //cout<<p2.get_x()<<" "<<p2.get_y()<<endl;
    cout<<(p1>p2);


    return 0;
}
