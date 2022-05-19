#pragma once
#pragma comment(lib,"winmm.lib")
#include"Player.h"
#include "Theif.h"
#include "Orch.h"
#include "Anatos.h"
#include "Natas.h"
#include<iostream>
#include<string>
#include<Windows.h>
#include<iomanip>




bool IntroScene1();
std::string IntroScene2();
int IntroScene3(std::string userName);
void CharacterCreationArt(int wizOrWar);
int Scene3Travel(std::string name);
void SceneChestIntro(int choice);
void SceneEquiping(Player* player);
void SceneTheCity(Player *player);
void FightScene(Player* player, Enemy* enemy);
Enemy* GenerateEnemy(Player* player);
bool RestCity();
void RestCityRefuse();