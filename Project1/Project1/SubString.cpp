#include <iostream>

std::string SubString(std::string str, int index_start, int index_end) {
	std::string new_str = "";
	for (int i = index_start; i < index_end; ++i) {

		new_str.append(1, str.at(i));
	}

	return new_str;
}

std::string SubString(std::string str, int index_start) {
	std::string new_str = "";
	for (int i = index_start; i < str.size(); ++i) {

		new_str.append(1, str.at(i));
	}

	return new_str;
}