//
//  MyObj.cpp
//  test
//
//  Created by Chris Lee Henrick on 8/27/14.
//
//

#include "MyObj.h"

void MyObj::setSrc(float _x, float _y) {
    src.set(_x, _y);
}

void MyObj::setDst(float _x, float _y) {
    dst.set(_x, _y);
}

void MyObj::updatePct(float _pct){
    pos.x = dst.x * _pct + src.x * (1.0 - _pct);
    pos.y = dst.y * _pct + src.y * (1.0 - _pct);
    
    //pos = dst * _pct + src * (1.0 - _pct);
}

void MyObj::powUpdatePct(float _pct, float _shaper){
    float powPct = powf(_pct, _shaper);
    pos = dst * powPct + src * (1.0-powPct);
}

void MyObj::updatePos(float _x, float _y){
    pos.x = src.x + _x;
    pos.y = src.y + _y;
}

void MyObj::render(){
    ofSetColor(255, 255, 0);
    ofLine(src, dst);
    
    ofSetColor(255, 0, 0);
    ofCircle(pos, 10);
    
}


