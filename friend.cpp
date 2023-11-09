#include <iostream>
using namespace std;
class imran{
    public:
        imran(){imiVar=0;}
    private:
        int imiVar;
    friend void imiFriend(imran &imo);
};
void imiFriend(imran &imo){
    imo.imiVar = 43;
    cout << imo.imiVar << endl;
}

int main(){
    imran obj;
    imiFriend(obj);
}
