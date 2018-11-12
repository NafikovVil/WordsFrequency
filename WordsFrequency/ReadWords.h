#pragma once
#include "Header.h"
using std::ifstream;
using std::string;
using std::vector;
using std::shared_ptr;

namespace Reader {
	class readWords {
	private:
		ifstream file;
	public:
		readWords(const string& flname);
		shared_ptr<vector<string>> read();
	};
}