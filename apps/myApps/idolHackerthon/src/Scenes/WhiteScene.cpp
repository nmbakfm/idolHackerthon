//
//  WhiteScene.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "WhiteScene.h"


//--------------------------------------------------------------
WhiteScene::WhiteScene(){
}

//--------------------------------------------------------------
void WhiteScene::update(){
}

//--------------------------------------------------------------
void WhiteScene::draw(){
}

//--------------------------------------------------------------
void WhiteScene::keyPressed(int key){
}

//--------------------------------------------------------------
void WhiteScene::keyReleased(int key){
    if(key == ' '){
        ofColor color;
        color.setHsb(ofRandom(255), 128, 255);
        ofBackground(color);
    }
}

//--------------------------------------------------------------
void WhiteScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void WhiteScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void WhiteScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void WhiteScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void WhiteScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void WhiteScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void WhiteScene::dragEvent(ofDragInfo dragInfo){
    
}
