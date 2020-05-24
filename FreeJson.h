#ifndef __JSONPARSER__
#define __JSONPARSER__

#include <fstream>
#include <iostream> 
#include <map>
#include <string>
using std::ifstream;
using std::ofstream;
using std::fstream;
using std::istringstream;
using std::ostringstream;
using std::stringstream;
using std::istream;
using std::ostream;
using std::iostream;
using std::string;
using std::map;

class JsonParser{
private:
	vector<char> jsonStream;
	int ptr;
	struct KVPair{
		string k;
		JsonParser v;
	};
	KVPair Lexer();
	string value;
public:
	void toString(string &obj);
	void toInt(int &obj);
	void toDouble(double &obj);
	int toArray(JsonParser obj[]);
	void read(string name);
	JSONParser operator[](string key);
	JsonParser();
	~JsonParser();
};

#endif 
