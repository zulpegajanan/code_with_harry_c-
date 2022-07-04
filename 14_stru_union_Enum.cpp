#include <iostream>
using namespace std;

struct employee
{
    int id;
    char favChar;
    float salary;
};

typedef struct new_employee
{
    int id;
    char favChar;
    float salary;
}ep;


int main()
{
    struct employee gajanan;
    gajanan.id=374;
    gajanan.favChar='g';
    gajanan.salary=6342879313;
    
    ep zulpe;
    zulpe.id=73;
    
    cout<<"id of gajanan is "<<gajanan.id<<endl;
    cout<<"id of zulpe is "<<zulpe.id;
    
    cout<<"\nUNION IS SIMILLAR WITH STRUCT FOR BETTER MEMORY MANAGMENT UNION IS USED \nMEMORY IS SHARED WITH ALL DATA TYPE\n";
   
    enum name{raju,kaku,mamu,nanu};
    cout<<"\n use of enum example "<<nanu;
    
   
   return 0;
}
