#include "HelloWorldScene.h"
#include "ShaderNode.h"

USING_NS_CC;

Scene* HelloWorld::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = HelloWorld::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    
    ShaderNode *sn = ShaderNode::create("shaders/example_Monjori.vsh", "shaders/example_Monjori.fsh");

    sn->setPosition(Point(visibleSize.width/2, visibleSize.height/2));
    sn->setContentSize(Size(visibleSize.width, visibleSize.height));
    addChild(sn);

    return true;
}

