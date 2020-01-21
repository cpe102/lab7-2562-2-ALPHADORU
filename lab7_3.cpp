//status = "ONE-NIGHT-STAND";
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age ,H ,M ;
    cout << "Enter age: ";
    cin >> age;
    if(age <= 20){
        cout << "Enter Height: ";
        cin >> H;
        if(H < 160){
            cout << "status = UNFRIEND";
        }else if(H < 175){
            cout << "status = FRIEND";
        }else {
            cout << "Enter Money: ";
            cin >> M ;
            if(M > 69000000){
                cout << "status = MARRIED";
            }else{
                cout << "status = ONE-NIGHT-STAND";
            }
        }

    }else if(age < 30){
        cout << "Enter Money: ";
        cin >> M ;
        if(M > 10000000){
            cout << "status = BEST FRIEND";
        }else{
            cout << "status = UNFRIEND";
        }
    }else{
        cout << "status = UNFRIEND";
    }
}