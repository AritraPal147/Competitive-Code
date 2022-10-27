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

class B:public A{
    protected:
        int b;
    public:
        B(int a1, int b1):A(a1){
            b = b1;
        }

        ~B(){
            cout<<"B\n";
        }
};

class C: public B{
    protected:
        int c;
    public:
        C(int a1, int b1, int c1):B(a1, b1){
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
