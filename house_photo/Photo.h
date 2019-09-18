#include <iostream>
#ifndef PHOTO_H
#define PHOTO_H
#include<string>
class Photo {

private:
	std::string size;
	std::string name;
public:
	Photo() {
		size = "100x100";
		name = "default";
	}

	Photo(std::string Size, std::string Name){
		size = Size;
		name = Name;
	}

	void setSize(std::string Size) { size = Size; }
	void setName(std::string Name) { name = Name; }

	std::string getSize() { return size; }
	std::string getName() { return name; }

};#endif
