#pragma once
#include "BaseObject.h"
#include"DirectX.h"
class PlayerObject :
    public virtual BaseObject
{
public:
    bool Init(int which);
    void Update();
    void Render();
    int moveSpeed;
    enum DIRECTION
    {
        UP = 0,
        RIGHT = 1,
        DOWN = 2,
        LEFT = 3,
    };
private:
    SPRITE sprite;
    LPDIRECT3DTEXTURE9 texture;
    //玩家1或玩家2
    int which;
    //方向
    DIRECTION direction;
    //等级
    int level ;
    void Move();
};

