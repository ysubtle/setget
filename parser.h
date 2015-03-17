#ifndef parser_h
#define parser_h

#include <string>

using namespace std;

class Parser {
public:
	Parser(string);
	vector<string*>* parse();
private:
};

#endif