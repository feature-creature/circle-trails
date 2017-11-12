#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    ofSetBackgroundAuto(false);
    ofSetBackgroundColor(0);
    ofSetCircleResolution(50);
    //ofSetFrameRate(60);

    myofFbo.allocate(ofGetWidth(),ofGetHeight(), GL_RGBA32F_ARB);
    myofFbo.begin();
    ofClear(0,0,0,0);
    myofFbo.end();

}

//--------------------------------------------------------------
void ofApp::update(){
    ofEnableAlphaBlending();
    myofFbo.begin();
    ofSetColor(0,5);
    ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());
    ofSetColor(255);
    ofDrawCircle(mouseX,mouseY,50);
    ofSetColor(255,0,0);
    ofDrawCircle(mouseX,mouseY,40);
    myofFbo.end();
}

//--------------------------------------------------------------
void ofApp::draw(){

    myofFbo.draw(100,10);
    myofFbo.draw(10,100);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
