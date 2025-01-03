#include <iostream>
#include <string>
using namespace std;

void AreYouSure(string Answer){
    cout<<"Are you sure?"<<endl;
    cin>>Answer;
    if(Answer=="yes"){
        cout<<"bad boy(\n";
    }
    else{
        cout<<"good boi\n";
    }
}

void UsersCount(){
    cout<<"how many users are use this program?\n";
}
int main() {
    string name;
    string Answer;

    cout << "What is your name? ";
    getline(cin, name);

    cout << "Hello, " << name << " are you wanna learn git?" << "!\n";
    getline(cin, Answer);

    if (Answer == "yes") {
        cout << "good boy" << endl;
    } else {
        AreYouSure(Answer);
    }

    return 0;
}
