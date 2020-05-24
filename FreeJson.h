#ifndef __JSONPARSER__
#define __JSONPARSER__

/*init*/
#include <string>
#include <vector> 
#include <map>
using std::string;
using std::map;
using std::vector;

/*
	JsonParser class.
	Parse json to units(string) and from unit(string) to value.
*/
class JsonParser{
private:
	vector<char> jsonStream; //char stream
	int ptr; //char stream ptr 
	struct KVPair{ //structure: key-value pair
		string k; //key
		JsonParser v; //value
	};
	KVPair Lexer(); //Lexer json to key-value pair
	string value; //unit value
public:
	void toString(string &obj); //unit(string) to string
	void toInt(int &obj);//unit(string) to int
	void toDouble(double &obj);//unit(string) to double
	int toArray(JsonParser obj[]);//unit(string) to array
	void read(string path);//read json file from path
	JsonParser operator[](string key);//overload operator[]
	JsonParser();//construction function
	~JsonParser();//deconstruction function
};

#endif 
