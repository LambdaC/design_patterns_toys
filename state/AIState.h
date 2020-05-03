#pragma once

#include "Agent.h"

class Agent;

class State
{
protected:
    Agent *m_agent;
public:
    State(Agent* agent) :m_agent{ agent } {};
    virtual void handle() = 0;
    virtual ~State() = default;
};


class RunawayState : public State
{
public:
    RunawayState(Agent* agent) : State{ agent } {};

    virtual void handle() override;
};

class AttackState : public State
{
public:
    AttackState(Agent* agent) :State{ agent } {};

    virtual void handle() override;
};

class PatrolState : public State
{
public:
    PatrolState(Agent* agent) :State{ agent } {};
    virtual void handle() override;
};
