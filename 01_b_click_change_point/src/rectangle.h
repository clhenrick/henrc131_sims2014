#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "ofMain.h"

class rectangle {
    
public:
	
    rectangle();
	
    void update();
    void draw();
    void setSrc(float _x, float _y);
    void setDst(float _x, float _y);
    
    void updatePct(float _pct); // number between 0 and 1
    void powUpdatePct(float _pct, float _shaper);
    void updatePos(float _x, float _y);
    void reversePct(float _pct);
    
private:
    
    ofPoint pos;
    ofPoint dst, src;
    
    float speedX;
    float speedY;
	
    
};

#endif // RECTANGLE_H
