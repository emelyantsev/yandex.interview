#include <fstream>

using namespace std;

int main() {

    ifstream ifs;
    ifs.open ("input.txt", std::ifstream::in);

    size_t n;
    ifs >> n;


    ofstream ofs;
    ofs.open ("output.txt", ios::out);

    for (size_t i = 0; i < n; ++i) {

        int current;
        ifs >> current;

        int prev;

        if (i == 0 || current != prev ) {
            
            ofs << current << '\n';
        }
        
        prev = current;

        if (i / 1000 == 0) {
            ofs.close();
            ofs.open ("output.txt", ios::out | ios::app);
        }
    }

    ifs.close();
    ofs.close();


    return EXIT_SUCCESS;
}