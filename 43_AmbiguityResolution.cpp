#include <iostream>
using namespace std;


class parent1{
    public:
        void name(){
            cout<<"mother"<<endl;
        }
};

class parent2{
    public:
        void name()
        {
            cout << "father" << endl;
        }
};


class child : public parent1, public parent2{
   int a;
   public:
    void name(){
        parent2 :: name();
    }
};


int main(){
  // Ambibuity 1
     parent1 base1obj;
     parent2 base2obj;
     base1obj.name();
     base2obj.name();
     child d;
     d.name();

    return 0;
}
