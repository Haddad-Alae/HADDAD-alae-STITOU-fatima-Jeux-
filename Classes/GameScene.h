

#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__

#include "cocos2d.h"

#include "player.h"


class GameScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
   

    virtual bool init();
    void keyPressed(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event);
    

    // a selector callback
   // void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);
private:
    void SetPhysicsWorld(cocos2d::PhysicsWorld *world) { sceneWorld = world; };
   
    cocos2d::PhysicsWorld *sceneWorld;
    Player *player;
    
  
};

#endif // __GAME_SCENE_H__
