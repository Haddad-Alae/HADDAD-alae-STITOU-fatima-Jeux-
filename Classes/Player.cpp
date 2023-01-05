

#include "Player.h"
#include "Definitions.h"




USING_NS_CC;

Player::Player(cocos2d::Layer* layer)
{
    visibleSize = Director::getInstance()->getVisibleSize();
    origin = Director::getInstance()->getVisibleOrigin();
    

    picopark = Sprite::create("pay.png");
    picopark->setPosition(Point(visibleSize.width * 0.1 + origin.x, visibleSize.height * 0.12 + origin.y));

    //creation de body 
 // auto picoparkbody  = PhysicsBody::createCircle(picopark->getContentSize().width / 2);
 // picopark->setPhysicsBody(picoparkbody);
    layer->addChild(picopark);
    layer->addChild(picopark, 100);

    auto action5 = JumpBy::create(5, Point(750, 0), 50, 10);
   picopark->runAction(action5);

   // auto action2 = MoveTo::create(5, Point(750, 0));
   // this->picopark->runAction(action2);
  
 

  
}
/*
// gestion du clavier
void Player::Left() {
    auto action1 = MoveTo::create(BALL_SPEED, Point(visibleSize.width / 2 + origin.x - 100.0f, visibleSize.height / 2 + origin.y - 100.0f));
    picopark->runAction(action1);

}
void Player::Right() {
    auto action2 = MoveTo::create(3, Vec2(200, 100));
    this->picopark->runAction(action2);
    direction = RIGHT;
}

void Player::Up() {
    auto action3 = MoveTo::create(BALL_SPEED, Point(visibleSize.width / 2 + origin.x + 100.0f, visibleSize.height / 2 + origin.y + 150.0f));
    picopark->runAction(action3);
}
void Player::Down() {

   auto action4 = MoveTo::create(BALL_SPEED, Point(visibleSize.width / 2 + origin.x + 100.0f, visibleSize.height / 2 + origin.y - 100.0f));
    picopark->runAction(action4);
}
*/