#include <iostream>

using namespace std;
class rectangle{
private:
    double width,length;
public:
    friend class calculations;
    rectangle(){}
    rectangle(double l,double w){
        length = l;
        width = w;
    }

};
class calculations{ /// use static to be easy to be called by the name of the class with ::
    public:
static double calc_area(const rectangle& obj){ ///in order to not copy the object and increase the size that's why we pass by ref
    return obj.length * obj.width;
}/// const used to read value and not change anything in the obj sent

static double calc_pr(const rectangle& obj){
    return (obj.length+obj.width)*2;
}
};

int main()
{
    rectangle r1(3,4);
    cout<<calculations::calc_area(r1)<<endl;
    cout<<calculations::calc_pr(r1)<<endl;

    return 0;
}
