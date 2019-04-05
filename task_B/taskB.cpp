#include <fstream>
#include <vector>

using namespace std;

int main() {

    ifstream ifs;

    ifs.open ("input.txt", std::ifstream::in);

    size_t n;
    ifs >> n;

    vector<int> v;

    for (size_t i = 0; i < n; ++i) {

        int temp;
        ifs >> temp;
        v.push_back(temp);
    }

    ifs.close();

    int max_result = 0;
    int current_result = 0;

    for (auto it = v.begin(); it != v.end(); ++it ) {

        int current = *it;

        if (current == 1 ) {
            ++current_result;
        }
        else {
            current_result = 0;
        } 

        if (current_result > max_result) {
            max_result = current_result;
        }
    }

    ofstream ofs;

    ofs.open ("output.txt", std::ofstream::out);

    ofs << max_result << '\n';

    ofs.close();

    return EXIT_SUCCESS;
}
