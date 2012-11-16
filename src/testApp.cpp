#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    ofBackground(0, 0, 0);
    ofEnableSmoothing();
    ofSetCircleResolution(60);
    ofSetFrameRate(25);
    ofSetVerticalSync(true);
    
    ballsize=30;
    x=15;
    y=250;
    vx=10;
    vy=20;
    gravity=5;
    friction=0.75;

}

//--------------------------------------------------------------
void testApp::update(){
    
    x=x+vx;
    y=y+vy;
    
    if (y>490) {
        vy=-vy*friction;
    }
    else {
        vy=vy+gravity;
    }
    if (x>490) {
        x=520;
    }
    
}

//--------------------------------------------------------------
void testApp::draw(){

    ofSetColor(255, 255, 255);
    ofEllipse(x, y, ballsize, ballsize);

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}