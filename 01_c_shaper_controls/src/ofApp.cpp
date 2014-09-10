#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
    
    ofBackground(30,30,30);
    
    rect.setSrc(ofGetWidth()*0.5f, ofGetHeight() * 0.5f);
    rect.setDst(ofGetWidth()*0.5f, ofGetHeight()*0.5f);
    
    count = 0;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //pct += 30.0f;
    
    if (pct > ofGetWidth()) {
        pct = 0;
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
    
    // increase rect size with mouse click
    rect.w *= 1.1;
    rect.h *= 1.1;
    
    
    
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