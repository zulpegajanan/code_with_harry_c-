#include<iostream>
using namespace std;
/*
    CLASS ARE THE EXTENTION OF TYPEDEF STRUCTURE
    BUT STRUCTURE HAVE LIMITATION
    LIKE -->NO DATA HIDING
         -->NO METHOD
*/

class binary{
    string s;
    public:
        void read(void);
        void chk_bin(void);
};

void binary::read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
    
}

void binary::chk_bin(void){
    read();
            //NESTING OF MEMBER
    int ok=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0' || s[i]=='1'){
            ok=1;
        }
        else{
            cout<<"incorrect";
            exit(0);
        }
    }
    if(ok==1){
        cout<<"correct";
    }
}
int main(){
    binary b;
    
    b.chk_bin();
    return 0;
}
