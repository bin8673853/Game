//
//  Seting.h
//  ddgame
//
//  Created by aaa on 14-10-10.
//
//

#ifndef __ddgame__Seting__
#define __ddgame__Seting__

#include <stdio.h>
#include "cocos2d.h"
USING_NS_CC;

class Seting:Scene
{
public:
    virtual bool init();
    Scene * SceneCreate();
    CREATE_FUNC(Seting);
}
;


#endif /* defined(__ddgame__Seting__) */
