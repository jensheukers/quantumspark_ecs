// Written by Jens Heukers.

#include "vector.h"

#include <math.h>
#include <string>

float open_entity::Vec2::Distance(Vec2 other) {
	float dx = other.x - this->x;
	float dy = other.y - this->y;
	return (float)sqrt(dx * dx + dy * dy);
}

open_entity::Vec2 open_entity::Vec2::Direction(Vec2 other) {
	return Vec2(other.x - this->x, other.y - this->y);
}

open_entity::Vec2 open_entity::Vec2::DirectionNormalized(Vec2 other) {
	return Vec2(other.x - this->x, other.y - this->y) / Vec2::Distance(*this, other);
}

float open_entity::Vec2::Angle(Vec2 other) {
	return (float)atan2(this->y - other.y, this->x - other.x);
}

float open_entity::Vec2::Magnitude() {
	return (float)sqrt(this->x * this->x + this->y * this->y);
}

const char* open_entity::Vec2::ToString() {
	return (std::to_string(x) + " , " + std::to_string(y)).c_str();
}

float open_entity::Vec2::Distance(Vec2 a, Vec2 b) {
	float dx = b.x - a.x;
	float dy = b.y - a.y;
	return (float)sqrt(dx * dx + dy * dy);
}

open_entity::Vec2 open_entity::Vec2::Lerp(Vec2 a, Vec2 b, float amount) {
	return b * amount + a * (1.f - amount);
}

float open_entity::Vec2::RadToDeg(float radians) {
	return (float)(radians * 180 / PI) + 180;
}

float open_entity::Vec2::DegToRad(float degrees) {
	return (float)(degrees * PI / 180);
}