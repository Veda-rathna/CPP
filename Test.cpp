#include<iostream>
using namespace std;
class car{
    public:
        string name;
        int modelyear;
        string modelname;
        car() {
            getline(cin, name);
            cin >> modelyear;
            cin.ignore();
            getline(cin, modelname);
        }
        ~car() {
            cout << "\n" << "vartaa maame durrr....";
        }
        void display(){
            cout << name << " " << modelyear << " " << modelname;
        }

};
int main() {
    car obj1;
    obj1.display();
    return 0;
}
