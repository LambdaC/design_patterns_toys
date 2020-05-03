#include "Agent.h"

Agent::Agent()
{
    m_state = new PatrolState{ this };
}

// 状态对象通过调用该方法来转换Agent的状态
void Agent::changeState(State* state)
{
    delete m_state;
    m_state = state;
}

// 游戏更新，Agent已经委托状态对象来完成相关行为以及状态转换
void Agent::update()
{
    m_state->handle();
}

Agent::~Agent()
{
    if (m_state != nullptr)
        delete m_state;
}