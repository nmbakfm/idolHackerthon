//
//  SquareMatrixScene.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/10/11.
//
//

#include "SquareMatrixScene.h"
#define SQUARE_MATRIX_SCENE_BLOCK_SIZE 200

//--------------------------------------------------------------
SquareMatrixScene::SquareMatrixScene(){
    color_id = 0;
    color_num = 4;
    ofBackground(255, 128, 0);
    current_rect_color.set(255, 128);
    angle=0;
    fieldRotateSpeed = -0.1;
}

//--------------------------------------------------------------
void SquareMatrixScene::update(){
    angle += 1;
    fieldRotateAngle += fieldRotateSpeed;
}

//--------------------------------------------------------------
void SquareMatrixScene::draw(){
    ofSetColor(current_rect_color);
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotate(fieldRotateAngle);
    for (int i=-(ofGetWidth()/SQUARE_MATRIX_SCENE_BLOCK_SIZE+50); i<ofGetWidth()/SQUARE_MATRIX_SCENE_BLOCK_SIZE+50; ++i) {
        for (int j=-(ofGetHeight()/SQUARE_MATRIX_SCENE_BLOCK_SIZE); j<ofGetHeight()/SQUARE_MATRIX_SCENE_BLOCK_SIZE; ++j) {
            ofPushMatrix();
            ofTranslate(i*SQUARE_MATRIX_SCENE_BLOCK_SIZE, j*SQUARE_MATRIX_SCENE_BLOCK_SIZE);
            ofRotate(angle, 0, 0, 1);
            ofRect(0, 0, SQUARE_MATRIX_SCENE_BLOCK_SIZE-2, SQUARE_MATRIX_SCENE_BLOCK_SIZE-2);
            ofPopMatrix();
        }
    }
    ofPopMatrix();
    ofSetRectMode(OF_RECTMODE_CORNER);
}

//--------------------------------------------------------------
void SquareMatrixScene::keyPressed(int key){
    if(key=='a'){
        angle+=10;
    }
}

//--------------------------------------------------------------
void SquareMatrixScene::keyReleased(int key){
    if(key == ' '){
        color_id = (color_id + 1) % color_num;
        switch (color_id) {
            case 0:
                // orange
                ofBackground(255, 128, 0);
                current_rect_color.set(255, 128);
                break;
            case 1:
                // green
                ofBackground(0,234,0);
                current_rect_color.set(255, 128);
                break;
            case 2:
                // blue
                ofBackground(0,128,255);
                current_rect_color.set(255, 128);
                break;
            case 3:
                ofBackground(234, 234, 0);
                current_rect_color.set(255, 128);
                
            default:
                break;
        }
    }
    
}

//--------------------------------------------------------------
void SquareMatrixScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void SquareMatrixScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void SquareMatrixScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void SquareMatrixScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void SquareMatrixScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void SquareMatrixScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void SquareMatrixScene::dragEvent(ofDragInfo dragInfo){
    
}
