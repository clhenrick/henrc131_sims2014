#include "rectangle.h"


//------------------------------------------------------------------
rectangle::rectangle(){
    
    speedX = 5;
    speedY = 5.5;
    
}

//------------------------------------------------------------------
//void rectangle::update(){
//    
//	pos.x = pos.x + speedX;
//    pos.y = pos.y + speedY;
//}

void rectangle::setSrc(float _x, float _y) {
    src.set(_x, _y);
}

void rectangle::setDst(float _x, float _y) {
    dst.set(_x, _y);
}

void rectangle::updatePct(float _pct){
    pos.x = dst.x * _pct + src.x * (1.0 - _pct);
    pos.y = dst.y * _pct + src.y * (1.0 - _pct);
    
    //pos = dst * _pct + src * (1.0 - _pct);
}

void rectangle::powUpdatePct(float _pct, float _shaper){
    float powPct = powf(_pct, _shaper);
    pos = dst * powPct + src * (1.0-powPct);
}

void rectangle::updatePos(float _x, float _y){
    pos.x = src.x + _x;
    pos.y = src.y + _y;
}

void rectangle::draw() {
	ofFill();
	ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    ofSetColor(198,246,55, 100);
    ofRect(pos.x, pos.y, 20,20);
}
