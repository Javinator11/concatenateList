
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void concatenateList() {
    string word;
    string temp;
    vector<string> elements = {"a", "b", "c", "d", "e", "f" };

    for (int i = 0; i < elements.size(); i++) {
        temp = elements[i];
        if (i == elements.size() - 1) {
            word = word + temp;
        }
        else {
            word = word + temp + ",";
        }
    }
    cout << word;
}


int main()
{
    concatenateList();
    return 0;
}
