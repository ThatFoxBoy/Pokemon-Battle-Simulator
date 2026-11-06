#include <iostream>
#include "Pokemon.h"


//Constructor and Destructors
Pokemon::Pokemon(
	std::string& name,
	std::string& type,
	int& level,
	int& health,
	int& xp
): name(name),
	type(type),
	level(level),
	health(health),
	xp(xp) {
}

Pokemon::~Pokemon() {}

std::string Pokemon::getType() const {
	return this->type;
}
std::string Pokemon::getName() const {
	return this->name;
}
int Pokemon::getLevel() const {
	return this->level;
}
int Pokemon::getHealth() const {
	return this->health;
}
int Pokemon::getXp() const {
	return this->xp;
}


void Pokemon::setType(const std::string& type) {
	this->type = type;
}
void Pokemon::setName(const std::string& name) {
	this->name = name;
}
void Pokemon::setLevel(const int& level) {
	this->level = level;
}
void Pokemon::setHealth(const int& health) {
	this->health = health;
}
void Pokemon::setXp(const int& xp) {
	this->xp = xp;
}

Pokemon* Pokemon::evolve(Pokemon& pokemon) const {
	return &pokemon;
}

std::string Pokemon::basicAttack() const {
	return "basicAttack";
}
std::string Pokemon::specialAttack() const {
	return "specialAttack";
}