#include"FreeJson.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <cstdlib>
using std::ifstream;
using std::ofstream;
using std::fstream;
using std::istringstream;
using std::ostringstream;
using std::stringstream;
using std::istream;
using std::ostream;
using std::iostream;

/*implemente*/ 
void JsonParser::toString(string &obj){
	obj="";
	for(int i=1;i<value.length()-1;i++){
		obj+=value[i];
	}
}

void JsonParser::toInt(int &obj){
	obj=atoi(value.c_str());
}
 
void JsonParser::toDouble(double &obj){
	obj=atof(value.c_str());
}

int JsonParser::toArray(JsonParser obj[]){
	
}

void JsonParser::read(string name){
	
}

JsonParser JsonParser::operator[](string key){
	
}

JsonParser::KVPair JsonParser::Lexer(){
	
}

JsonParser::JsonParser() : ptr(0){
	
}

JsonParser::~JsonParser(){
	
}
