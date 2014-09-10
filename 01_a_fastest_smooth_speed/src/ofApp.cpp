#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
    
    ofBackground(30,30,30);
    
    rect.setSrc(20, ofGetHeight() * 0.5f);
    rect.setDst(ofGetWidth()*0.9, ofGetHeight()*0.9);
    
//    rect.pos.x = 0;
//	rect.pos.y = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
    
    pct += 30.0f;
    
    if (pct > ofGetWidth()) {
        pct = 0;
    }
    
//    rect.update();
    rect.updatePct(pct);
    rect.updatePos(pct, 0.2f);

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