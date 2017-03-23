#include "PlayerObject.h"
#include"Resource.h"
#include"DirectX.h"
using namespace Resource;
bool PlayerObject::Init(int which)
{
    PlayerObject::which = which;
    if (which == 1)
    {
        texture = LoadTexture(Game::Player1);
    }
    else {
        texture = LoadTexture(Game::Player2);
    }
    sprite.x = Global::Game::StartX;
    sprite.y = Global::Game::StartY;
    moveSpeed = 8;
    level = 1;
    return true;
}

void PlayerObject::Update()
{
    Move();

    Sprite_Animate(sprite.frame, direction * 4 + (level - 1) * 2, direction * 4 + (level - 1) * 2 + 1, 1, sprite.starttime, 40);
}

void PlayerObject::Render()
{
    Sprite_Draw_Frame(texture, sprite.x, sprite.y, sprite.frame, Global::Game::UnitSize, Global::Game::UnitSize, 4);
}

void PlayerObject::Move()
{
    if (PlayerObject::which == 1)
    {
        if (Key_Down(DIK_S))
        {
            direction = DIRECTION::DOWN;

            if (sprite.y < Global::Game::StartY + Global::Game::MapSize - Global::Game::UnitSize)
            {
                sprite.y += moveSpeed;
            }
        }
        else if (Key_Down(DIK_W))
        {
            direction = DIRECTION::UP;
            if (sprite.y > Global::Game::StartY)
            {
                sprite.y -= moveSpeed;
            }
        }
        else if (Key_Down(DIK_A))
        {
            direction = DIRECTION::LEFT;

            if (sprite.x > Global::Game::StartX)
            {
                sprite.x -= moveSpeed;
            }
        }
        else if (Key_Down(DIK_D))
        {
            direction = DIRECTION::RIGHT;

            if (sprite.x < Global::Game::StartX + Global::Game::MapSize - Global::Game::UnitSize)
            {
                sprite.x += moveSpeed;
            }
        }
    }
    else {
        if (Key_Down(DIK_DOWN))
        {
            direction = DIRECTION::DOWN;

            if (sprite.y < Global::Game::StartY + Global::Game::MapSize - Global::Game::UnitSize)
            {
                sprite.y += moveSpeed;
            }
        }
        else if (Key_Down(DIK_UP))
        {
            direction = DIRECTION::UP;

            if (sprite.y > Global::Game::StartY)
            {
                sprite.y -= moveSpeed;
            }
        }
        else if (Key_Down(DIK_LEFT))
        {
            direction = DIRECTION::LEFT;

            if (sprite.x > Global::Game::StartX)
            {
                sprite.x -= moveSpeed;
            }
        }
        else if (Key_Down(DIK_RIGHT))
        {
            direction = DIRECTION::RIGHT;

            if (sprite.x < Global::Game::StartX + Global::Game::MapSize - Global::Game::UnitSize)
            {
                sprite.x += moveSpeed;
            }
        }
    }
}
