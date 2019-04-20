#include <fstream>
#include <algorithm>
#include <deque>
#include <vector>
#include <iterator>

using namespace std;


int main() {

    ifstream ifs;
    ifs.open ("input.txt", std::ifstream::in);

    int k;
    ifs >> k;

    deque<vector<int>> qv;

    for (int i = 0; i < k; ++i) {

        int t;
        ifs >> t;

        vector<int> tv;

        for (int j = 0; j < t; ++j) {

            int temp;
            ifs >> temp;
            tv.push_back(temp);
        }

        qv.emplace_back(tv);

    }

    ifs.close();

    while (qv.size() != 1) {

        qv.emplace_back(vector<int>());
        merge(qv[0].begin(), qv[0].end(), qv[1].begin(), qv[1].end(), back_inserter(qv.back()));
        qv.pop_front();
        qv.pop_front();

    } 

    ofstream ofs;
    ofs.open ("output.txt", ios::out);


    for (const int & item : qv.front() ) {

        ofs << item << " ";
    }

    ofs << '\n' ;

    ofs.close();

    return EXIT_SUCCESS;
}