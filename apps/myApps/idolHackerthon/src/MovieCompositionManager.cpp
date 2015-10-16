//
//  MovieCompositionManager.cpp
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/10/12.
//
//

#include "MovieCompositionManager.h"

//--------------------------------------------------------------
MovieCompositionManager::MovieCompositionManager(){
    ofBackground(255);
}

//--------------------------------------------------------------
void MovieCompositionManager::update(){
    for (vector<SceneBase*>::iterator it = scenes.begin(); it != scenes.end(); ++it) {
        (*it)->update();
    }
}

//--------------------------------------------------------------
void MovieCompositionManager::draw(){
    for (vector<SceneBase*>::iterator it = scenes.begin(); it != scenes.end(); ++it) {
        (*it)->draw();
    }
}

//--------------------------------------------------------------
void MovieCompositionManager::keyPressed(int key){
    for (vector<SceneBase*>::iterator it = scenes.begin(); it != scenes.end(); ++it) {
        (*it)->keyPressed(key);
    }
}

//--------------------------------------------------------------
void MovieCompositionManager::keyReleased(int key){
    for (vector<SceneBase*>::iterator it = scenes.begin(); it != scenes.end(); ++it) {
        (*it)->keyReleased(key);
    }
}

//--------------------------------------------------------------
void MovieCompositionManager::mouseMoved(int x, int y ){
    
    for (vector<SceneBase*>::iterator it = scenes.begin(); it != scenes.end(); ++it) {
        (*it)->mouseMoved(x, y);
    }
}

//--------------------------------------------------------------
void MovieCompositionManager::mouseDragged(int x, int y, int button){
    
    for (vector<SceneBase*>::iterator it = scenes.begin(); it != scenes.end(); ++it) {
        (*it)->mouseDragged(x, y, button);
    }
}

//--------------------------------------------------------------
void MovieCompositionManager::mousePressed(int x, int y, int button){
    
    for (vector<SceneBase*>::iterator it = scenes.begin(); it != scenes.end(); ++it) {
        (*it)->mousePressed(x, y, button);
    }
}

//--------------------------------------------------------------
void MovieCompositionManager::mouseReleased(int x, int y, int button){
    
    for (vector<SceneBase*>::iterator it = scenes.begin(); it != scenes.end(); ++it) {
        (*it)->mouseReleased(x, y, button);
    }
}

//--------------------------------------------------------------
void MovieCompositionManager::windowResized(int w, int h){
    
    for (vector<SceneBase*>::iterator it = scenes.begin(); it != scenes.end(); ++it) {
        (*it)->windowResized(w, h);
    }
}

//--------------------------------------------------------------
void MovieCompositionManager::gotMessage(ofMessage msg){
    for (vector<SceneBase*>::iterator it = scenes.begin(); it != scenes.end(); ++it) {
        (*it)->gotMessage(msg);
    }
    
}

//--------------------------------------------------------------
void MovieCompositionManager::dragEvent(ofDragInfo dragInfo){
    for (vector<SceneBase*>::iterator it = scenes.begin(); it != scenes.end(); ++it) {
        (*it)->dragEvent(dragInfo);
    }
    
}

//--------------------------------------------------------------
void MovieCompositionManager::setScene(SceneIdentifier scene_id){
    switch (scene_id) {
        case CandyDropSceneId:
            scenes.push_back(new CandyDropScene());
            break;
        case SquareMatrixSceneId:
            scenes.push_back(new SquareMatrixScene());
            break;
        case SquareRippleSceneId:
            scenes.push_back(new SquareRippleScene());
            break;
        case CircleRippleSceneId:
            scenes.push_back(new CircleRippleScene());
            break;
        case StarDustSceneId:
            scenes.push_back(new StarDustScene());
            break;
        case StreamLeftSceneId:
            scenes.push_back(new StreamLeftScene());
            break;
        case StreamRightSceneId:
            scenes.push_back(new StreamRightScene());
            break;
        case DropStarDustSceneId:
            scenes.push_back(new DropStarDustScene());
            break;
        case HeartSceneId:
            scenes.push_back(new HeartScene());
            break;
        case SpotLightSceneId:
            scenes.push_back(new SpotLightScene());
            break;
        case StroboSceneId:
            scenes.push_back(new StroboScene());
            break;
            
        default:
            break;
    }
}

void MovieCompositionManager::clearScenes(){
    scenes.clear();
}
