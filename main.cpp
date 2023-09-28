#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    string password = "";
    int pass_length = 12;
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%&*+";

    srand(time(0));

    int index = 0;
    for (int i = 0; i < pass_length; ++i) {
        index = rand() % characters.length();
        password += characters[index];
    }

    cout << "generated password : " << password;
}