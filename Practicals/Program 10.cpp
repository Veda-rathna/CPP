//Internal mark calculation
#include <iostream>
#include <list>
using namespace std;

class Subject {
    string name;
    int total;
public:
    Subject(string name, list<double> score) : name(name), total(0) {
        for (auto i = score.begin(); i != score.end(); i++) {
            total += *i;
        }
    }

    void printInfo() {
        cout << "Subject: " << name << endl;
        cout << "Marks: " << total << endl;
    }
};

int main() {
    int N;
    cin >> N;

    for (int ctr = 1; ctr <= N; ctr++) {
        string name;
        list<double> scores;

        cin >> name;
        int M;
        cin >> M;

        for (int param = 1; param <= M; param++) {
            int score;
            double weightage;
            cin >> score >> weightage;
            scores.push_back(score * weightage);
        }

        Subject subj(name, scores);
        subj.printInfo();
    }

    return 0;
}
