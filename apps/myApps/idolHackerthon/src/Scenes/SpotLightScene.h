//
//  SpotLightScene.h
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/10/11.
//
//

#ifndef __idolHackerthon__SpotLightScene__
#define __idolHackerthon__SpotLightScene__

#include "ofMain.h"
#include "SceneBase.h"
class SpotLightScene : public SceneBase {
    
public:
    SpotLightScene();
    
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    bool isStop;
    float targetAngle[3];
    float angle[3];
    ofColor color[3];
    int moving_count;
    ofFbo fbo;
};

#endif /* defined(__idolHackerthon__SpotLightScene__) */
