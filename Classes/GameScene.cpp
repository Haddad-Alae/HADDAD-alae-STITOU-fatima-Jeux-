


#include "GameScene.h"
#include "Definitions.h"
#include "player.h"




USING_NS_CC;
Scene* GameScene::createScene()
{


    auto scene = Scene::createWithPhysics( );
    scene->getPhysicsWorld( )->setDebugDrawMask( PhysicsWorld::DEBUGDRAW_ALL);

    auto layer = GameScene::create();
    layer->SetPhysicsWorld(scene->getPhysicsWorld( ) );

    scene->addChild(layer);
    return scene;
}
// on "init" you need to initialize your instance
bool GameScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }

    auto visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    auto backgroundSprite = Sprite::create( "lev.png" );
    backgroundSprite->setPosition( Point (visibleSize.width / 2 + origin.x, visibleSize.height / 2 + origin.y));

    this->addChild(backgroundSprite);

     auto edgeBody = PhysicsBody::createEdgeBox(visibleSize, PHYSICSBODY_MATERIAL_DEFAULT, 3);

     auto edgeNode = Node::create();
    edgeNode->setPosition(Point(visibleSize.width / 2 + origin.x, visibleSize.height / 1.7 + origin.y));

    edgeNode->setPhysicsBody(edgeBody);

    this->addChild(edgeNode);
     player = new Player(this);
    
     
     }




     //touch


   








/*
void GameScene::keyPressed(cocos2d::EventKeyboard::KeyCode keyCode, cocos2d::Event* event) {
    if (keyCode == EventKeyboard::KeyCode::KEY_UP_ARROW) {
        this->player->Up();

    }
    else  if (keyCode == EventKeyboard::KeyCode::KEY_DOWN_ARROW) {
        this->player->Down();

    }
    else  if (keyCode == EventKeyboard::KeyCode::KEY_LEFT_ARROW) {
        this->player->Left();

    }
    else  if (keyCode == EventKeyboard::KeyCode::KEY_RIGHT_ARROW) {
        this->player->Right();

    }

}
*/



