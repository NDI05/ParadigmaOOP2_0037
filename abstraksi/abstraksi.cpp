#include <iostream>
using namespace std;

class AbstraksiClass{
    private: string x, y;
    public:
        void setY(string a, string b){
            y=a;
            x=b;
        }
        void display(){
            cout << "X = " << x << endl;
            cout << "Y = " << y << endl;
        }
};

int main(){
    AbstraksiClass ab;
}