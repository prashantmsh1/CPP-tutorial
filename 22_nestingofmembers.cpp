#include<iostream>
#include<string>
using namespace std;

 class binary{
        string s; //by default its private
        public:
            void read(void);
            void chk_bin(void);
            void ones(void);
            void display(void);

    };

void binary:: read(void){
        cout<<"enter a binary number"<<endl;
        cin>>s;
}
void binary:: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!= '0' && s.at(i)!='1'){
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
        
    }
    
    
}
void binary:: ones(){
    chk_bin(); // called nesting of member
    // int count =0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        s.at(i)='0';
    }
    // cout<<count<<endl;
    // cout<<s;
}
void binary:: display(){
    // int count =0;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
}
int main(){
   binary b;
   b.read();
//    b.chk_bin(); it can be made private also and no one can access it
   b.ones();
   b.display();
return 0;
}