//
//  SquareMatrixScene.h
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/10/11.
//
//

#ifndef __idolHackerthon__SquareMatrixScene__
#define __idolHackerthon__SquareMatrixScene__

#include "ofMain.h"
#include "SceneBase.h"
class SquareMatrixScene : public SceneBase {
    
public:
    SquareMatrixScene();
    
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
    
    float angle;
    int color_id;
    int color_num;
    ofColor current_rect_color;
    float fieldRotateSpeed;
    float fieldRotateAngle;
};
#endif /* defined(__idolHackerthon__SquareMatrixScene__) */
