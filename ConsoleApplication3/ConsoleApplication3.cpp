#include "std_lib_facilities.h"
//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//inline void keep_window_open() { char ch; cin >> ch; }

vector<string> acceptedDays = {
 "Monday", "monday", "mon", "Mon",
 "Tuesday", "tuesday", "tue", "Tue",
 "Wednesday", "wednesday", "wed", "Wed",
 "Thursday", "thursday", "thurs", "Thurs",
 "Friday", "friday", "fri", "Fri",
 "Saturday", "saturday", "sat", "Sat",
 "Sunday", "sunday", "sun", "Sun" };
vector<string>dayys{ "Monday" ,"Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
vector <vector<int>>days{ {},{},{},{},{},{},{} };//2d vector

double sum(vector<int>s) {
    double result{};
    for (int i{}; i < s.size(); ++i)result += s.at(i);
    result /= s.size();
    return result;
}

void input(string s, int val) {
    while (cin >> s >> val) {
        //cancer begins
        if (s == acceptedDays[0] || s == acceptedDays[1] || s == acceptedDays[2] || s == acceptedDays[3])
            days[0].push_back(val);
        else if (s == acceptedDays[4] || s == acceptedDays[5] || s == acceptedDays[6] || s == acceptedDays[7])
            days[1].push_back(val);
        else if (s == acceptedDays[8] || s == acceptedDays[9] || s == acceptedDays[10] || s == acceptedDays[11])
            days[2].push_back(val);
        else if (s == acceptedDays[12] || s == acceptedDays[13] || s == acceptedDays[14] || s == acceptedDays[15])
            days[3].push_back(val);
        else if (s == acceptedDays[16] || s == acceptedDays[17] || s == acceptedDays[18] || s == acceptedDays[19])
            days[4].push_back(val);
        else if (s == acceptedDays[20] || s == acceptedDays[21] || s == acceptedDays[22] || s == acceptedDays[23])
            days[5].push_back(val);
        else if (s == acceptedDays[24] || s == acceptedDays[25] || s == acceptedDays[26] || s == acceptedDays[27])
            days[6].push_back(val);
        //finally!
        else {
            error("bad input");
        }
    }
}

void display() {
    for (int i{}; i < dayys.size(); ++i) {
        cout << '\n' << dayys[i] << " : ";
        if (!days[i].empty()) cout << sum(days[i]);
        else
            cout << "NOVALUE";
    }
}

int main() {
    try {
        string s{};
        int val{};
        input(s, val);
        display();
        return 0;
    }
    catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        return 2;
    }
}