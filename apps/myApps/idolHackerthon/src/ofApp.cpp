#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofEnableSmoothing();
    ofSetCircleResolution(128);
    ofSetFrameRate(100);
    
    Heart::init();
    StarDust::init();
    DropStarDust::init();
    
    scene = new SquareMatrixScene();
}

//--------------------------------------------------------------
void ofApp::update(){
    scene -> update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    scene -> draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    scene -> keyPressed(key);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if(key == '1'){
        scene = new SquareMatrixScene();
    }else if(key == '2'){
        scene = new CircleRippleScene();
    }else if(key == '3'){
        scene = new StreamLeftScene();
    }else if(key == '4'){
        scene = new StarDustScene();
    }else if(key == '5'){
        scene = new SquareRippleScene();
    }else if(key == '6'){
        scene = new StreamRightScene();
    }else if(key == '7'){
        scene = new DropStarDustScene();
    }else if(key == '8'){
        scene = new StroboScene();
    }else if(key == '9'){
        scene = new WhiteScene();
    }
    scene -> keyReleased(key);
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    scene -> mouseMoved(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    scene -> mouseDragged(x, y, button);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    scene -> mousePressed(x, y, button);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    scene -> mouseReleased(x, y, button);
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    scene -> windowResized(w, h);
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    scene -> gotMessage(msg);
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
