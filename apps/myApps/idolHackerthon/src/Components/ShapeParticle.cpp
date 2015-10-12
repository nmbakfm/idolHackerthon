//
//  ShapeParticle.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "ShapeParticle.h"
#define STREAM_FUWAFUWA true

ShapeParticle::ShapeParticle(){
    pattern = (int)ofRandom(0, 3);
    r = ofRandom(50);
    angle = ofRandom(0, 360);
    color.setHsb(ofRandom(0, 255), 255, 255, 60);
    pos = ofVec2f(-100, ofRandom(-100, ofRandomHeight() + 500));
}

ShapeParticle::ShapeParticle(bool _isDirectionLeft){
    isDirectionLeft = _isDirectionLeft;
    pattern = (int)ofRandom(0, 3);
    r = ofRandom(30,100);
    angle = ofRandom(0, 360);
    color.setHsb(ofRandom(0, 255), 255, 255, 60);
    if(isDirectionLeft){
        pos =ofVec2f(-100, ofRandom(-100, ofRandomHeight() + 500));
    }else{
        pos = ofVec2f(ofGetWidth()+100,  ofRandom(-100, ofRandomHeight() + 500));
    }
}


void ShapeParticle::update(){
#if STREAM_FUWAFUWA
    vel += ofVec2f(ofRandom(-1, 1), ofRandom(-1,1)).normalize();
    vel = 15*vel.normalize();
    pos += vel;
#else
    if(isDirectionLeft){
        pos += ofVec2f(-15, 1);
    }else{
        pos += ofVec2f(-15, -1);
    }
#endif
    angle += 3;
}

void ShapeParticle::draw(){
    ofPushStyle();
    ofPushMatrix();
    ofTranslate(pos);
    ofRotate(angle, 11,13,17);
    ofSetColor(color);
    if (pattern == 0) {
        ofCircle(0, 0, r);
    }else if(pattern == 1){
        ofSetRectMode(OF_RECTMODE_CENTER);
        ofRect(0, 0, r, r);
        ofSetRectMode(OF_RECTMODE_CORNER);
    }else{
        ofTriangle(ofVec2f(0, -r*2/3), ofVec2f(r/2, r/3), ofVec2f(-r/2, r/3));
    }
    ofPopMatrix();
    ofPopStyle();
}

bool ShapeParticle::isDead(){
    return pos.x > ofGetWidth() + 300 || pos.x < - 300 || pos.y > ofGetHeight() + 300 || pos.y < -300;
}