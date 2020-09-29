#include "std_lib_facilities.h"
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//inline void keep_window_open() { char ch; cin >> ch; }

vector <vector<int>>days{ {},{},{},{},{},{},{} };//2d vector NUMBERS
vector <vector<string>>daysname{ {"Monday", "monday", "mon", "Mon"},
                                 {"Tuesday", "tuesday", "tue", "Tue"},
                                 {"Wednesday", "wednesday", "wed", "Wed"},
                                 {"Thursday", "thursday", "thurs", "Thurs"},
                                 {"Friday", "friday", "fri", "Fri"},
                                 { "Saturday", "saturday", "sat", "Sat"},
                                 { "Sunday", "sunday", "sun", "Sun"} };//2d vector NAMES


double sum(vector<int>s) {
    double result{};
    for (int i{}; i < s.size(); ++i)result += s.at(i);
    result /= s.size();
    return result;
}

void input() {
    string s{};
    int val{};
    while (cin >> s >> val) {
        for (int i{}; i < daysname.size(); ++i) {
            for (int j{}; j < daysname[i].size(); ++j)
                if (s == daysname[i][j]) days[i].push_back(val);
        }
        
    }
}

void display() {
    for (int i{}; i < daysname.size(); ++i) {
        cout << '\n' << daysname[i][0] << " : ";
        if (!days[i].empty()) cout << sum(days[i]);
        else
            cout << "NOVALUE";
    }
}

int main() {
    try {
        input();
        display();
        return 0;
    }
    catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        return 2;
    }
}