//
//  Particle.h
//  particleSystem
//
//  Created by Tibor Udvari on 19/10/14.
//
//

#ifndef __particleSystem__Particle__
#define __particleSystem__Particle__

#include "ofApp.h"

class Particle {
public:
    Particle();
    void setup();
    void update(float dt);
    void draw();
    
    ofPoint pos;
    ofPoint vel;
    float time;
    float lifeTime;
    bool live;
};

#endif
