 #pragma once
#include"Photo.h"
#include<string>
#include<iostream>
class House : Photo{

private:
	int id;
	float price;
	std::string location;
	std::string advertiser;
	Photo image;

public:
	House() {
		id = 0;
		price = 0.0;
		location = "";
		advertiser = "";
		image.setSize("100x100");
		image.setName("default");
	}

	House(int ID, float Price, std::string Location, std::string Advertiser, std::string Size, std::string Name) {
		id = ID;
		price = Price;
		location = Location;
		advertiser = Advertiser;
		image.setName(Name);
		image.setSize(Size);
	}

	void setID(int ID) { id = ID; }
	void setPrice(float Price) { price = Price; }
	void setLocation(std::string Location) { location = Location; }
	void setAdvertiser(std::string Advertiser) { advertiser = Advertiser; }
	void setImageSize(std::string Size) { image.setSize(Size); }
	void setImageName(std::string Name) { image.setName(Name); }

	int getID() { return id; }
	float getPrice() { return price; }
	std::string getLocation() { return location; }
	std::string getAdvertiser() { return advertiser; }
	std::string getImageSize() { return image.getSize(); }
	std::string getImageName() { return image.getName(); }

	
};
