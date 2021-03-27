
#include <iostream>
#include <string>

using namespace std;

void concatenateList() {
    string word;
    string temp;
    string elements[6] = {" a", "b", "c", "d", "e", "f" };

    for (int i = 0; i < 6; i++) {
        temp = elements[i];
        word = word + temp + ",";
    }
    cout << word;
}


int main()
{
    concatenateList();
    return 0;
}
