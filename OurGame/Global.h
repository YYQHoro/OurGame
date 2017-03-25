#pragma once
#include<iostream>
#include<Windows.h>
#include"Resource.h"
#include"WinMain.h"
#include"DirectX.h"

using namespace std;
enum GAME_STATE
{
    //无任何场景（初始状态）
    None = 0,
    //欢迎场景
    Home = 1,
    //游戏场景
    Playing = 2,
    //关于场景
    About = 3
};
namespace Global {
    namespace Window {
        const string GameTitle = "Our Game";
        const int ScreenWidth = 1024;
        const int ScreenHeight = 768;
        //窗口的坐标
        extern int x, y;
        extern bool EnableBackgroundRunning;
        extern bool isActity;
        //鼠标灵敏度
        const float CursorSensitivity = 1.0f;
        const bool FullScreen = false;
        //指定逻辑刷新速度
        const float targetFps = 200.0f;
    }
    namespace Home {
        //最终的选项，0：单人游戏；1：多人游戏；2：关于我们
        extern int selectedType;
    }
    namespace Debug {
        //是否显示调试信息
        const bool ShowDebugInfo = true;
        //当前总帧率
        extern int currentFPS;
    }
    namespace Game {
        //地图大小
        const int MapSize = 640;
        //单元格大小
        const int UnitSize = 32;
        const int MapGridNum = MapSize / UnitSize;//20
        //地图在屏幕的起始点
        const int StartX = Global::Window::ScreenWidth / 2 - MapSize / 2;
        const int StartY = Global::Window::ScreenHeight / 2 - MapSize / 2;

    }
}
