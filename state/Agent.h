#pragma once

#include "AIState.h"
#include <cstdlib>

class State;

class PatrolState;

class Agent
{
    State* m_state;

public:
    Agent();

    // 状态对象通过调用该方法来转换Agent的状态
    void changeState(State* state);

    // 游戏更新，Agent已经委托状态对象来完成相关行为以及状态转换
    void update();

public:
    bool isSafe() { return rand() % 2 == 1; };
    bool isWeakerThanEnemy() { return rand() % 2 == 1; };
    bool isStrongerThanEnemy() { return rand() % 2 == 1; }
    bool isThreatened() { return rand() % 2 == 1; }
};
