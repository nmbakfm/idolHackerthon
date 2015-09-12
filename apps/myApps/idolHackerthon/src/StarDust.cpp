//
//  StarDust.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/09/12.
//
//

#include "StarDust.h"

StarDust::StarDust(ofVec2f _pos){
    alpha = 255;
    pos = _pos;
    vel = ofVec2f(ofRandom(-1,1), ofRandom(-1, 1)).normalize() * ofRandom(5);
}

void StarDust::update(){
    vel += ofVec2f(0,0.1);
    pos += vel;
    alpha -= 5;
}

void StarDust::draw(){
    ofSetColor(255, 255, 0,alpha);
    ofCircle(pos, 5);
}

bool StarDust::isDead(){
    return alpha <= 0;
}
