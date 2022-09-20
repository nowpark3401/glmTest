
#include <iostream>
#include <glm/glm.hpp>
#include <glm/mat4x4.hpp>
#include <glm/gtx/string_cast.hpp>

int main()
{
	/*
	// 1
	glm::vec3 p(1, -4, 5);
	glm::vec3 v(5, 1, 4);

	p += v;
	std::cout << glm::to_string(p) << std::endl;

	// 2
	glm::vec3 v1(1, 0, 0);
	glm::vec3 v2(0, 1, 0);

	v1 += v2;
	std::cout << glm::to_string(v1) << std::endl;

	// 3
	glm::vec3 v3(0, 1, 0);

	v3 = v3 * 2.0f;
	std::cout << glm::to_string(v3) << std::endl;

	// 4
	glm::vec3 s(8, 2, 5);
	glm::vec3 e(1, -1, 4);

	glm::vec3 l = e - s;
	std::cout << glm::to_string(l) << std::endl;


	// 5
	glm::vec3 v5(1, 3, 4);

	glm::vec3 n = glm::normalize(v5);
	std::cout << glm::to_string(n) << std::endl;

	// 6
	glm::vec3 v6(1, -1, 4);
	glm::vec4 V6 = glm::vec4(v6, 0.0);

	std::cout << glm::to_string(V6) << std::endl;

	// dot
	glm::vec3 v7(7, 3, -2);
	glm::vec3 u7(10, 4, 2);

	float d = glm::dot(v7, u7);
	std::cout << d << std::endl;

	// dot
	const double DEGREES_TO_RADIANS = glm::pi<float>() / 180.0;
	const double RADIANS_TO_DEGREES = 180.0 / glm::pi<float>();

	glm::vec3 v(2, -1, 1);
	glm::vec3 u(1, 1, 2);

	float a = glm::dot(v, u);
	float b = a / (glm::length(u) * glm::length(v));
	float d = glm::acos(b) * RADIANS_TO_DEGREES;

	std::cout << d << std::endl;*/

	glm::vec4 v1 = { 1, 0, 1, -1 };
	glm::vec4 v2 = { 1, 0, 1, -1 };
	glm::vec4 v3 = { 1, 0, 1, -1 };
	glm::vec4 v4 = { 1, 0, 1, -1 };

	glm::mat4 m;
	m[0] = v1;
	m[1] = v2;
	m[2] = v3;
	m[3] = v4;

	std::cout << to_string(m) << std::endl;

	return 0;
}