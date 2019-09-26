#ifndef _CUBE_H_
#define _CUBE_H_

#ifdef __APPLE__
#include <OpenGL/gl3.h>
#else
#include <GL/glew.h>
#endif

#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtx/string_cast.hpp>
#include <vector>
#include <iostream>

class Cube
{
private:
	GLuint vao;
	GLuint vbos[2];
	glm::mat4 model;
	glm::vec3 color;
public:
	Cube(float size);
	~Cube();

	glm::mat4 getModel() { return model; }
	glm::vec3 getColor() { return color; }

	void draw();
	void update();

	void spin(float deg);
};

#endif

