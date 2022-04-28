#pragma once
#pragma comment(lib,"winmm.lib")
#include<iostream>
#include<string>
#include<vector>
#include<Windows.h>
#include<iomanip>


bool IntroScene1();
std::string IntroScene2();
int IntroScene3(std::string userName);
void CharacterCreationArt(int wizOrWar);
int Scene3Travel(std::string name);
void Scene3Chest(int choose);