#include <iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        A(int a1){
            a = a1;
        }

        ~A(){
            cout<<"A\n";
        }
};

class B{
    protected:
        int b;
    public:
        B(int b1){
            b = b1;
        }

        ~B(){
            cout<<"B\n";
        }
};

class C: public A, B{
    protected:
        int c;
    public:
        C(int a1, int b1, int c1):A(a1),B(b1){
            c = c1;
        }

        void show(){
            cout<<a<<" "<<b<<" "<<c<<"\n";
        }

        ~C(){
            cout<<"C\n";
        }
};

int main(){
    C obj(1, 2, 3);
    obj.show();
    return 0;
}