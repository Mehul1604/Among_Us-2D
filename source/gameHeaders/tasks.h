#ifndef TASKS_H
#define TASKS_H

#include "utilityHeaders/global.h"
using namespace std;

class Task{
    public:
        Task() {}
        Task(int n_x , int n_y , float x , float y , float width , float height, color_t color);

        //position and node coordinates
        glm::vec2 position;
        int node_x;
        int node_y;

        // properties
        float width;
        float height;
        color_t color;
        bool exist;
        void create();
        void draw();
        void draw_light(int dist);
        vector<float> vertices;
        VAO* vao_object;
        

};

#endif