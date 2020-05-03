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

    // ״̬����ͨ�����ø÷�����ת��Agent��״̬
    void changeState(State* state);

    // ��Ϸ���£�Agent�Ѿ�ί��״̬��������������Ϊ�Լ�״̬ת��
    void update();

public:
    bool isSafe() { return rand() % 2 == 1; };
    bool isWeakerThanEnemy() { return rand() % 2 == 1; };
    bool isStrongerThanEnemy() { return rand() % 2 == 1; }
    bool isThreatened() { return rand() % 2 == 1; }
};
