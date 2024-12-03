//Dialog of the first example is given below.
#include<iostream>
using namespace std;

int gear(int studentID){
    //int studentID = 670612115;
    string strnum;
    strnum = to_string(studentID);
    string first2digit = strnum.substr(0,2);
    int num2digit = stoi(first2digit);
    num2digit = num2digit - 12;
    
    return num2digit;
}

int main(){
    string name;
    int studentID;
    string ans,day,movie;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name <<" is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> studentID;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << gear(studentID) <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    cout << name << ": ";
    getline(cin,ans);
    cout << "Fahsai: 555+ see you "<< day <<". Bye Bye \\(^ ^)/";


}

