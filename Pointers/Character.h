#pragma once
class Character
{
public:
	void attack(Character other);
	float takeDamage(float damageAmount);
	float getDamage() { return m_damage; }
private:
	float m_health;
	float m_damage;
};

