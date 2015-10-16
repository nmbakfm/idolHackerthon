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
    ofBackground(255, 128, 0);
    
    movieCompositionManager.setScene(SquareMatrixSceneId);
    movieCompositionManager.setScene(SquareRippleSceneId);
}

//--------------------------------------------------------------
void ofApp::update(){
    movieCompositionManager.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    movieCompositionManager.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    movieCompositionManager.keyPressed(key);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    movieCompositionManager.keyReleased(key);
    switch (key) {
        case '1':
            movieCompositionManager.clearScenes();
            break;
        case '2':
            movieCompositionManager.clearScenes();
            break;
        case '3':
            movieCompositionManager.clearScenes();
            break;
        case '4':
            movieCompositionManager.clearScenes();
            break;
        case '5':
            movieCompositionManager.clearScenes();
            break;
        case '6':
            movieCompositionManager.clearScenes();
            break;
        case '7':
            movieCompositionManager.clearScenes();
            break;
        case '8':
            movieCompositionManager.clearScenes();
            break;
        case '9':
            movieCompositionManager.clearScenes();
            break;
        case '0':
            movieCompositionManager.clearScenes();
            break;
            
        default:
            break;
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    movieCompositionManager.mouseMoved(x, y);
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    movieCompositionManager.mouseDragged(x, y, button);
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    movieCompositionManager.mousePressed(x, y, button);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    movieCompositionManager.mouseReleased(x, y, button);
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    movieCompositionManager.windowResized(w, h);
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    movieCompositionManager.gotMessage(msg);
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
