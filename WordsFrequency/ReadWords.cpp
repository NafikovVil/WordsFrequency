#include "ReadWords.h"

Reader::readWords::readWords(const string& flname){
	if (flname.length() == 0)
		throw std::errc::invalid_argument;
	file = ifstream(flname);
	if (!file)
		throw std::errc::io_error;
}

shared_ptr<vector<string>> Reader::readWords::read() {
	shared_ptr<vector<string>> words{new vector<string> };
	string word;
	while (file >> word) { 
		words->push_back(word);
	}
	return words;
}

