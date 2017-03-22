#include "GameScene.h"
#include"DirectX.h"
#include"DebugTools.h"
bool GameScene::Init()
{
    return true;
}

void GameScene::End()
{
}

void GameScene::Render()
{
   
    PrintBorder();
    //Draw2DCircle(p, 100,D3DCOLOR_ARGB(0, 255, 179, 167)); 
    
    if (Global::Debug::ShowDebugInfo)
    {
        DebugTools::PrintGrid();
    }
}

void GameScene::Update()
{
}

//���Ƶ�ͼ�߽�
void GameScene::PrintBorder()
{
    POINT p;
    p.x = Global::Game::StartX;
    p.y = Global::Game::StartY;
    POINT p2;
    p2.x = p.x + Global::Game::MapSize;
    p2.y = p.y;
    POINT p3;
    p3.x = p.x;
    p3.y = p.y + Global::Game::MapSize;
    POINT p4;
    p4.x = p.x + Global::Game::MapSize;
    p4.y = p.y + Global::Game::MapSize;

    Draw2DRect(p, p2, p3, p4, D3DCOLOR_XRGB(255, 255, 255));
}