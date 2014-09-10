#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetVerticalSync(true);
    
    rect.init();
    toggle = 0;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    pct += 0.01f;
    
    if (pct > 1.0f) {
        pct = 0.0f;
    }
    
    rect.powUpdatePct(pct, 0.3);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(30,30,30);
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
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
    if (toggle) {
        rect.setSrc(x, y);
        toggle = 0;
    } else {
        rect.setDst(x, y);
        toggle = 1;
    }
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