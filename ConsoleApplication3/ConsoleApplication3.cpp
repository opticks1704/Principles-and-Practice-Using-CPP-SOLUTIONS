#include "std_lib_facilities.h"


class Token {
public:
    char kind;      // what kind of token
    double value;   // for numbers: a value
};

vector<Token>tok;

Token get_token() {
    // Token t;
    // t.kind = '+';
    // Token t2;
    // t2.kind ='8';
    // t2.valie = '3.14';
    char t;
    int l = 0;
    Token m;

    cin >> l >> t;
    switch (t) {
    case'+':
        m.kind = '+';
        return m;
        break;
    case'-':
        m.kind = '-';
        return m;
        break;
    case'*':
        m.kind = '*';
        return m;
        break;
    case'/':
        m.kind = '/';
        return m;
        break;
    case'(':
        m.kind = '(';
        return m;
        break;
    case')':
        m.kind = ')';
        return m;
        break;
    case'8':
        m.kind = '8';
        m.value = l;
        return m;
        break;
    default:
        error("illegal input!");
    }
}



int main() {
    try {
        
        return 0;
    }
    catch (exception& e) {
        cerr << "error: " << e.what() << '\n';
        return 1;
    }
}