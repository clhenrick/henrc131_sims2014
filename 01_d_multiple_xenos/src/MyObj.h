//
//  MyObj.h
//  test
//
//  Created by Chris Lee Henrick on 8/27/14.
//
//

#pragma once
#include "ofMain.h"

class MyObj {
    
public:
    
    void setSrc(float _x, float _y);
    void setDst(float _x, float _y);
    
    void updatePct(float _pct); // number between 0 and 1
    void powUpdatePct(float _pct, float _shaper);
    void updatePos(float _x, float _y);
    
    void render(); // this is for drawing
    
private:

    ofPoint pos;
    ofPoint dst, src;
    
};
