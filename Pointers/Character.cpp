#include "Character.h"

void Character::attack(Character other)
{
	other.takeDamage(getDamage());
}

float Character::takeDamage(float damageAmount)
{
	m_health -= damageAmount;
	return damageAmount;
}
