#include "rectangle.h"

void rectangle::init(){
    setSrc(ofGetWidth()*0.1, ofGetHeight()*0.1);
    setDst(ofGetWidth()*0.9, ofGetHeight()*0.1);
}

void rectangle::setSrc(float _x, float _y) {
    src.set(_x, _y);
}

void rectangle::setDst(float _x, float _y) {
    dst.set(_x, _y);
}

void rectangle::updatePct(float _pct){
    //pos.x = dst.x * _pct + src.x * (1.0 - _pct);
    //pos.y = dst.y * _pct + src.y * (1.0 - _pct);
    
    pos = dst * _pct + src * (1.0 - _pct);
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
    ofSetColor(255);
    ofLine(src,dst);
    ofCircle(src,10);
    ofCircle(dst, 10);
	
    ofFill();
	ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    ofSetColor(198,246,55);
    ofRect(pos.x, pos.y, 20,20);
}
