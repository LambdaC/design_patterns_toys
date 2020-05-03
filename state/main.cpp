#include "Agent.h"
#include "AIState.h"
#include <iostream>

int main()
{
    Agent agent;
    while (true)
    {
        agent.update();
        std::cin.get();
    }
    return 0;
}