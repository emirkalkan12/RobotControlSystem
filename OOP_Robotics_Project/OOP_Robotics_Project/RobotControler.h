#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "Pose.h"
#include "../../oop_project/Project_Packet/FestoRobotAPI.h"


class RobotControler {
private:
    FestoRobotAPI* robotAPI;
    Pose* position;
    bool connectionStatus;

public:
    void turnLeft();
    void turnRight();
    void moveForward();
    void moveBackward();
    void moveLeft();
    void moveRight();
    void stop();
    Pose getPose();
    void print();
    bool connectRobot();
    bool disconnectRobot();
};