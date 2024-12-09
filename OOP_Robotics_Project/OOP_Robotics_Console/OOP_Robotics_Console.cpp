// OOP_Robotics_Console.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Pose.h"
#include "RobotControler.h"
#include "../../oop_project/Project_Packet/FestoRobotAPI.h"
#include "TestRobotControler.h"
#include "TestPose.h"

// burasý uygulamanýn çalýþacaðý konsol kýsmý
// burada þu anlýk testler çalýþtýrýlabilir. Daha sonra konsol uygulamasý
// yazýlacak ve burada çaðrýlacak. Aþaðýda örnek bir test çaðrýsý var.

int main() {

    
	TestPose testPose;
	testPose.runAllTests();
}
