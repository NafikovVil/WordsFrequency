#include "DictionaryWord.h"


WordFreq::wordDictionary::wordDictionary(const shared_ptr<vector<string>> wrds): words{wrds}
{
	if (words == nullptr)
		throw std::errc::invalid_argument;
}

shared_ptr<map<string, int>> WordFreq::wordDictionary::GetDictionary()
{
	shared_ptr<map<string, int>> dict{new map<string, int> };
	for (const auto& p: *words) {
		dict->operator[](p)++;
	}
	return dict;
}
