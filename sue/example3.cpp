#include<iostream>
using namespace std;

int main(){
    enum days{MON=-1,TUE,WED=6,THU,FRI,SAT};
    cout << MON << TUE << WED << THU << FRI << SAT << endl;
    return 0;
}