#pragma once
#include<string>
#include<iostream>


class Item
{
public:
	Item();
	inline virtual ~Item() {};
	void createItem(std::string name, int AD, int AP, int Dex, int Int);

	inline const std::string& getItemName()const { return this->name; }
	inline const int& getAD()const { return this->ad; }
	inline const int& getAP()const { return this->ap; }
	inline const int& getDex()const { return this->dex; }
	inline const int& getInte()const { return this->inte; }
	inline const bool& getEquiped()const { return this->equiped; }


	void setItemName(std::string name);
	void setAD(int AD);
	void setAP(int AP);
	void setDex(int DEX);
	void setInt(int INT);

	void ItemInfo();

	bool equiped;
private:
	std::string name;
	int ad;
	int ap;
	int dex;
	int inte;
	
};

