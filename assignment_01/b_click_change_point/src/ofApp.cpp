#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
    
    ofBackground(30,30,30);
    
    rect.setSrc(20, ofGetHeight() * 0.5f);
    rect.setDst(ofGetWidth()*0.9, ofGetHeight()*0.9);
    
    toggle = 0;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    pct += 30.0f;
    
    if (pct > ofGetWidth()) {
        pct = 0;
    } else if (pct < 0) {
        pct = ofGetWidth();
    }
    
    rect.updatePct(pct);
    rect.updatePos(pct, 0.1f);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    rect.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    //cout << "mousePressed: " << x << ", " << y << " button: " << button << endl;
    
    if (toggle == 0 && button == 0) {
        rect.setSrc(x, y);
        toggle = 1;
        if (pct <= 0){
            rect.reversePct(pct);
        }
    } else if (toggle == 1 && button == 0) { // this part is not working...
        rect.reversePct(pct);
        rect.setSrc(x, y);
        toggle = 0;
        cout << "pct: " << pct << endl;
    }
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}