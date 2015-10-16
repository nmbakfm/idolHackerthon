//
//  StroboScene.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/10/12.
//
//

#include "StroboScene.h"

//--------------------------------------------------------------
StroboScene::StroboScene(){
}

//--------------------------------------------------------------
void StroboScene::update(){
}

//--------------------------------------------------------------
void StroboScene::draw(){
    if (ofGetFrameNum()%4 < 2) {
        ofBackground(0);
    }else{
        ofBackground(255);
    }
}

//--------------------------------------------------------------
void StroboScene::keyPressed(int key){
}

//--------------------------------------------------------------
void StroboScene::keyReleased(int key){
    
}

//--------------------------------------------------------------
void StroboScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void StroboScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void StroboScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void StroboScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void StroboScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void StroboScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void StroboScene::dragEvent(ofDragInfo dragInfo){
    
}
