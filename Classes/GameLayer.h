#ifndef __ddgame__GameLayer__
#define __ddgame__GameLayer__
#include "cocos2d.h"
#include "IMode.h"
#include "PigLayer.h"
#include "ControlLayer.h"
USING_NS_CC;

class GameLayer:public Layer
{
    Node* root;
    IMode mode;
    PigLayer* pigs;
    LabelTTF* labScore;
    ControlLayer* ctrl;
private: 
    void initEvent(); 
public:
    //void Drag(Vec2 Flag);
    //void Click();
    void addScore(int i);
    bool init();
    CREATE_FUNC(GameLayer);
    static Scene* CreateScene(IMode mode) ;
public:
    void ModeA();
    void onPigDelete(Pig *pig);
};






#endif /* defined(__ddgame__GameLayer__) */
