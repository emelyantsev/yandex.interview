#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {

    string J, S;
    cin >> J;
    cin >> S;

    set<char> setJ;

    for (auto it = J.begin();  it != J.end(); ++it) {

        if (setJ.count(*it) == 0) {
            setJ.insert(*it);
        }
    }


    int result = 0;

    for (auto it = S.begin(); it != S.end(); ++it ) {

        if (setJ.count(*it)) {
            ++result;
        }
    }

    cout << result;


    return EXIT_SUCCESS;
}
