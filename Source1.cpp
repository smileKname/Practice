#include <iostream>
#include <string>
using namespace std;


void TestingWork() {
    cout << "So lets start The first question is...."; 
}

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

int main() {
    string name;
    string Answer;

    cout << "What is your name? ";
    getline(cin, name);

    cout << "Hello, " << name << " are you wanna learn git?" << "!\n";
    getline(cin, Answer);

    if (Answer == "yes") {
        cout << "good boy" << endl;
        TestingWork();
    } else {
        AreYouSure(Answer);
    }

    return 0;
}
