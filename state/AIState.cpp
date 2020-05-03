#include "AIState.h"
#include <iostream>

void RunawayState::handle()
{
    std::cout << "I am Runing away!!" << std::endl;
    if (m_agent->isSafe())
        m_agent->changeState(new PatrolState{ m_agent });
}

void AttackState::handle()
{
    std::cout << "I am Attcking!" << std::endl;
    if (m_agent->isWeakerThanEnemy())
        m_agent->changeState(new RunawayState{ m_agent });
}

void PatrolState::handle()
{
    std::cout << "I am Patrolling." << std::endl;
    if (m_agent->isThreatened() && m_agent->isStrongerThanEnemy())
        m_agent->changeState(new AttackState{ m_agent });
    else if (m_agent->isThreatened() && m_agent->isWeakerThanEnemy())
        m_agent->changeState(new RunawayState{ m_agent });
}