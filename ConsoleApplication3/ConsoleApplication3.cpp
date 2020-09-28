//#include "std_lib_facilities.h"

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

class Bad_area {};

int area(int d, int e) {
    if (d <= 0 || e <= 0)throw Bad_area();
    return d * e;
}
void error(string s) {
    throw runtime_error(s);
}

int main() {
    try {
        string s;
        int gg;
        cin >> s >> gg;// read string int pair
        cout << gg << s;

        int d{ 1 }, e{ 0 };
        double f{ 2.7 };
        area(1, 0);
        return 0;//indicates success
    }
    catch (runtime_error& e) {
        cerr << "runtime error:" << e.what() << "\n";
        //The call e.what() extracts the error message from the runtime_error.
        return 1;//indicates failure
    }
    catch (out_of_range) { //off-by-one error etc
        cerr << "Oops! Range error\n";
        return 1;
    }
    catch (Bad_area) {
        cerr << "BAD ARGUMENT!" << endl;
        return 2;//indicates failure
    }
    catch (...) {
        //catch(...) to handle exceptions of any type whatsoever.
        cerr << "unknown exception!";
        keep_window_open();
        return 3;
    }
}