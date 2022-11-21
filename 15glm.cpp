//
// Created by fancy on 21/11/2022.
//
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <iostream>
#include <iomanip>
std::ostream& operator << (std::ostream& out, const glm::vec4& vec4){
    out <<std::fixed << std::setw(10) <<  vec4.x << "," << vec4.y << "," << vec4.z << "," << vec4.w;
    return out;
}
std::ostream& operator << (std::ostream& out, const glm::mat4& mat4){
    for(int i=0;i<mat4.length();i++){
        auto &col = mat4[i];
        out << col << std::endl;
    }
    return out;
}
int main(int argc,char**argv){
    glm::vec4 vec{1.0f, 0.0f, 0.0f, 1.0f};
    glm::mat4 trans(1.0f);
    //单位矩阵组合位移矩阵
    trans = glm::translate(trans, glm::vec3{1.0f, 1.0f, 0.0f});
    vec = trans * vec;
    std::cout << vec << std::endl;
    trans = glm::mat4{1.0f};
    trans = glm::rotate(trans, glm::radians(90.0f), glm::vec3{0.0,0.0,1.0});
    trans = glm::scale(trans, glm::vec3{0.5,0.5,0.5});
    std::cout << "trans matrix" << std::endl;
    std::cout << trans << std::endl;
    return 0;
}