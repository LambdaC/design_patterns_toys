#include "Agent.h"

Agent::Agent()
{
    m_state = new PatrolState{ this };
}

// ״̬����ͨ�����ø÷�����ת��Agent��״̬
void Agent::changeState(State* state)
{
    delete m_state;
    m_state = state;
}

// ��Ϸ���£�Agent�Ѿ�ί��״̬��������������Ϊ�Լ�״̬ת��
void Agent::update()
{
    m_state->handle();
}

Agent::~Agent()
{
    if (m_state != nullptr)
        delete m_state;
}