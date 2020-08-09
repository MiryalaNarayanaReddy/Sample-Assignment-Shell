#include "main.h"

#ifndef SPEEDOMETER_H
#define SPEEDOMETER_H


class Speedometer {
public:
    Speedometer() {}
    Speedometer(float x, float y, float z, color_t color);
    glm::vec3 position;
    float rotation;
    void draw(glm::mat4 VP);
    void set_position(float x, float y, float z);
    void set_angle(float speed_of_airplane);

private:
    VAO *object_radar;
};

#endif // SPEEDOMETER_H
