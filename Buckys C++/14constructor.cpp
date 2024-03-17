#include<iostream>
#include <string>
using namespace std;

class prem {
    public: 
        prem (string z){
            setname(z);
        }
        
        void setname(string x){
            name = x;
        }
        string getname(){
            return name;
        }
    private :
        string name ;
};

int main() {
    prem a ("hello prem ");
    cout<<a.getname();
    
    cout<<endl;

    prem b("holle premmmmm");
    cout<<b.getname();
}