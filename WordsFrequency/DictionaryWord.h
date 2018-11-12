#pragma once
#include "Header.h"

using std::string;
using std::vector;
using std::map;
using std::shared_ptr;

namespace WordFreq {
	class wordDictionary {
	private:
		const shared_ptr <vector<string>> words;
	public:
		wordDictionary(const shared_ptr<vector<string>> wrds);
		shared_ptr <map<string, int>> GetDictionary();
	};
}