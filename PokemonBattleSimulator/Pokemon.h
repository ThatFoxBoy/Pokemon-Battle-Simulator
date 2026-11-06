#pragma once
#include <string>

class Pokemon {

protected:
	std::string name;
	std::string type;
	int level;
	int health;
	int xp;

public:
	Pokemon(std::string& name, std::string& type, int& level, int& health, int& xp);
	~Pokemon();

	std::string getType() const;
	std::string getName() const;
	int getLevel() const;
	int getHealth() const;
	int getXp() const;

	void setType(const std::string& type);
	void setName(const std::string& name);
	void setLevel(const int& level);
	void setHealth(const int& health);
	void setXp(const int& xp);

	Pokemon* evolve(Pokemon& pokemon) const {}

	virtual std::string basicAttack() const {}

	virtual std::string specialAttack() const {}
};