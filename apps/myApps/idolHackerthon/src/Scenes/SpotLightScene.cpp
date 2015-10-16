//
//  SpotLightScene.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/10/11.
//
//

#include "SpotLightScene.h"
//--------------------------------------------------------------
SpotLightScene::SpotLightScene(){
    for(int i=0; i<3; ++i){
        angle[i] = ofRandom(360);
        color[i].setHsb(ofRandom(255), 128, 255);
    }
    moving_count = 30;
}

//--------------------------------------------------------------
void SpotLightScene::update(){
    if (moving_count < 30){
        for (int i=0; i<3; ++i) {
            angle[i] += targetAngle[i];
        }
        ++moving_count;
    }
}

//--------------------------------------------------------------
void SpotLightScene::draw(){
    fbo.begin();
//    ofEnableBlendMode(OF_BLENDMODE_ADD);
    for(int i=0; i<3; ++i){
        ofSetColor(color[i]);
        ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotate(angle[i], 0, 0, 5);
        ofTranslate(100, -20);
        ofTriangle(-100, 1000, 100, 1000, 0, -1000);
        ofPopMatrix();
    }
//    ofEnableBlendMode(OF_BLENDMODE_ALPHA);
    fbo.end();
    fbo.draw(0,0);
}

//--------------------------------------------------------------
void SpotLightScene::keyPressed(int key){
}

//--------------------------------------------------------------
void SpotLightScene::keyReleased(int key){
    if(key == ' '){
        for (int i=0; i<3; ++i) {
            targetAngle[i] = (720 + ofRandom(-180, 180))/30.f;
        }
        moving_count = 0;
        
        for(int i=0; i<3; ++i){
            color[i].setHsb(ofRandom(255), 128, 255);
        }
    }
}

//--------------------------------------------------------------
void SpotLightScene::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void SpotLightScene::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void SpotLightScene::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void SpotLightScene::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void SpotLightScene::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void SpotLightScene::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void SpotLightScene::dragEvent(ofDragInfo dragInfo){
    
}
