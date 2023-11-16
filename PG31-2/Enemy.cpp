#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::FuncTable[])()
{
    &Enemy::Approach,
        & Enemy::Fire,
        & Enemy::Leave
};

void Enemy::Update()
{
    (this->*FuncTable[(int)phase])();
}

void Enemy::Approach()
{
    printf("接近\n");

    phase = Phase::kFire;
}

void Enemy::Fire()
{
    printf("攻撃\n");

    phase = Phase::kLeave;
}

void Enemy::Leave()
{
    printf("離脱\n");
}