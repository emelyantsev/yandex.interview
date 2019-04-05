
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;


int main() {

    ifstream ifs;
    ifs.open ("input.txt", std::ifstream::in);

    string s1, s2;
    ifs >> s1 >> s2;
    ifs.close();

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    ofstream ofs;
    ofs.open ("output.txt", ios::out);

    ofs << (s1 == s2) << '\n';

    ofs.close();

    return EXIT_SUCCESS;
}