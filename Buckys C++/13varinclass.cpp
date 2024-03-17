#include<iostream>
using namespace std;

class prem{
    public :
        void setname(string x){
            name = x;
        }
        string getname(){
            return name;
        }
    private :
        string name;
};

int main(){
    prem a;
    a.setname("i am prem");
    cout<<a.getname();
}