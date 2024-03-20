//Account less than minimum balance
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char **argv) {
    if (argc < 3) {
        cout << "Usage: " << argv[0] << " <filename> <min_balance>\n";
        return 1;
    }

    string name = argv[1];
    int min_bal = atoi(argv[2]); // Convert char* to integer

    ifstream file(name);
    if (!file.is_open()) {
        cout << "File not found or unable to open.\n";
        return 1;
    }

    string acc_id;
    int bal;
    int c = 0;
    while (file >> acc_id >> bal) {
        if (bal < min_bal) {
            c++;
        }
    }

    cout << c << "\n";
    file.close();
    return 0;
}
