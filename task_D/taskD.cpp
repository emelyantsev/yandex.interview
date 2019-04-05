
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;


bool is_correct(const string & s) {

    int level = 0;

    for (const auto & si : s) {

        if (si == '(') {
            ++level;
        }
        else {
            --level;
        }

        if (level < 0) {
            return false;
        }
    }

    return true;
}


int main() {

    ifstream ifs;
    ifs.open ("input.txt", std::ifstream::in);

    size_t n;
    ifs >> n;
    ifs.close();


    string s(n, '(');
    s.append(string(n, ')'));



    ofstream ofs;
    ofs.open ("output.txt", ios::out);

    do {

        if (is_correct(s)) {
            ofs << s << '\n';
        }
        
    } while ( std::next_permutation(s.begin(), s.end()) );

    ofs.close();

    return EXIT_SUCCESS;
}