//
//  MovieCompositionManager.h
//  idolHackerthon
//
//  Created by NAMBU AKIFUMI on 2015/10/12.
//
//

#ifndef __idolHackerthon__MovieCompositionManager__
#define __idolHackerthon__MovieCompositionManager__

#include "ofMain.h"
#include "Scene.h"

class MovieCompositionManager {
    vector<SceneBase *> scenes;
    
public:
    
    MovieCompositionManager();
    void setScene(SceneIdentifier scene_id);
    void clearScenes();
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
};

#endif /* defined(__idolHackerthon__MovieCompositionManager__) */
