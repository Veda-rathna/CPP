//Student management system
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

struct Branch {
    string name, branch, reg, ph;
    int sem, height = 0, weight = 0;
    char gender;
    float cgp;
};

bool compareBranches(const Branch &a, const Branch &b) {
    if (a.sem != b.sem)
        return a.sem < b.sem;
    return a.name < b.name;
}

int main() {
    int n;
    cin >> n;
    struct Branch b1[100];
    string str1[100], str2[100];
    int num1 = 0, num2 = 0;

    for (int i = 0; i < n; i++) {
        string str;
        int num;
        cin >> str >> num;
        if (num == 0) {
            str2[num1] = str;
            num1++;
        } else {
            str1[num2] = str;
            num2++;
        }
    }

    int x;
    cin >> x;
    int num3 = 0;

    for (int i = 0; i < x; i++) {
        string command;
        cin >> command;

        if (command == "ADD") {
            string n, b, r, p;
            int s, Height, Weight;
            char g;
            float cg;

            cin >> n >> b >> p >> s >> g >> cg >> r;
            int t = 1;

            for (int i = 0; i < num1; i++) {
                if (b == str2[i]) {
                    t = 0;
                    break;
                }
            }

            if (t == 1) {
                cin >> Height >> Weight;
                b1[num3].name = n;
                b1[num3].branch = b;
                b1[num3].ph = p;
                b1[num3].sem = s;
                b1[num3].gender = g;
                b1[num3].cgp = cg;
                b1[num3].reg = r;
                b1[num3].height = Height;
                b1[num3].weight = Weight;
                num3++;
            } else {
                b1[num3].name = n;
                b1[num3].branch = b;
                b1[num3].ph = p;
                b1[num3].sem = s;
                b1[num3].gender = g;
                b1[num3].cgp = cg;
                b1[num3].reg = r;
                num3++;
            }
        } else if (command == "GLD") {
            sort(b1, b1 + num3, compareBranches);
            string str4;
            char ch1;
            cin >> str4 >> ch1;

            for (int i = 0; i < num3; i++) {
                if (b1[i].gender == ch1 && b1[i].branch == str4) {
                    cout << b1[i].name << " " << b1[i].reg << " " << b1[i].branch << " " << b1[i].ph << " " << b1[i].sem << " ";
                    cout << fixed << setprecision(1) << b1[i].cgp << " ";
                    cout << b1[i].gender << " ";
                    if (b1[i].height != 0) {
                        cout << b1[i].height << " " << b1[i].weight;
                    }
                    cout << endl;
                }
            }
            cout << "END" << endl;
        } else if (command == "L") {
            sort(b1, b1 + num3, compareBranches);
            for (int i = 0; i < num3; i++) {
                cout << b1[i].name << " " << b1[i].reg << " " << b1[i].branch << " " << b1[i].ph << " " << b1[i].sem << " ";
                cout << fixed << setprecision(1) << b1[i].cgp << " ";
                cout << b1[i].gender << " ";
                if (b1[i].height != 0) {
                    cout << b1[i].height << " " << b1[i].weight;
                }
                cout << endl;
            }
            cout << "END" << endl;
        }
    }

    return 0;
}
