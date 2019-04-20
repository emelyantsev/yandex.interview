#include <fstream>
#include <array>

using namespace std;

int main() {

    ifstream ifs;
    ifs.open ("input.txt", std::ifstream::in);

    int k;
    ifs >> k;

    array<int, 101> a;
    a.fill(0);

    for (int i = 0; i < k; ++i) {

        int t;
        ifs >> t;

        for (int j = 0; j < t; ++j) {

            int temp;
            ifs >> temp;
            ++a[temp];
        }

    }

    ifs.close();

    ofstream ofs;
    ofs.open ("output.txt", ios::out);

    for (auto it = a.begin(); it != a.end(); ++it) {

        for (int i = 0; i < (*it); ++i) {
            ofs << (it - a.begin()) << ' ' ;
        }
    }

    ofs << '\n' ;

    ofs.close();

    return EXIT_SUCCESS;
}