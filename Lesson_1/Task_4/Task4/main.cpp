#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a < 1000){
        cout << "Rabotai bolshe" <<endl;
    }
    if (1000 < a){
        if (a <1000000)
            cout << "Molodes"<<endl;
    }
    if(1000000 < a){
        cout <<"Milloener"<<endl;
    }
}
