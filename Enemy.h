#pragma once

class Enemy {
public:
	Rect enemy;
	Texture sprite;
	Vec2 velocity;


	Enemy() : enemy(Size{50, 50}), sprite() {};
};
