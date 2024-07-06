#pragma once

class GameObject
{
public:
	Rect rect;
	Texture sprite;
	Vec2 position;

	GameObject(Rect InitRect, Texture initSprite, Vec2 initPosition);

	virtual void Intersects(GameObject* obje) {}
};

GameObject::GameObject(Rect initRect, Texture initSprite, Vec2 initPosition){
	rect = initRect;
	sprite = initSprite;
	position = initPosition;
}
