#include <iostream>

using namespace std;

int main()
{
    int money;
    cin >> money;
    if (money < 1000){
        cout << "Rabotai bolshe" <<endl;
    }
    if (money > 1000){
        if (money <1000000)
            cout << "Molodes"<<endl;
    }
    if(money > 1000000 ){
        cout <<"Milloener"<<endl;
    }
}
