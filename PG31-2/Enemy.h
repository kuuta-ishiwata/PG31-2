#pragma once
class Enemy
{
public:

    void Update();

    bool isGameLoop() { return GameLoop_; }

private:

    enum class Phase
    {
        kApproach,
        kFire,
        kLeave
    };

    //接近
    void Approach();
    //攻撃
    void Fire();
    //離脱
    void Leave();

    //メンバ変数
    Phase phase = Phase::kApproach;

    static void (Enemy::* FuncTable[])();

    bool GameLoop_ = true;


};


