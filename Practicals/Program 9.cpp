//Employee pay slip
#include<iostream>
using namespace std;
class employee{
    string eid,name,desig;
    int basic,hra,allowance,bdate,bmonth,byear,gdate,gmonth,gyear;
    public:
    void setinfo(){
        cin>>eid;
        cin>>name;
        cin>>desig;
        cin>>basic;
        cin>>hra;
        cin>>allowance;
    }
    void putinfo(){
        cout<<eid<<endl;
        cout<<name<<endl;
        cout<<desig<<endl;
    }
    void salary(){
        cout<<basic<<endl;
        cout<<hra<<endl;
        cout<<allowance<<endl;
        cout<<basic+allowance<<endl;
    }
    void setdate(int d, int m, int y){
        bdate=d;
        bmonth=m;
        byear=y;
    }
    void input(int d,int m,int y){
        gdate=d;
        gmonth=m;
        gyear=y;
    }
    void printdate(){
        cout<<bdate<<"/"<<bmonth<<"/"<<byear<<endl;
        cout<<gdate<<"/"<<gmonth<<"/"<<gyear<<endl;
    }
};
int main(){
    employee emp;
    emp.setinfo();
    emp.putinfo();
    emp.setdate(22,10,05);
    emp.input(17,11,23);
    emp.printdate();
    emp.salary();
}