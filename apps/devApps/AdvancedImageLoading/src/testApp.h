#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp {
public:
	void setup();
	void update();
	void draw();
	
	vector<ofImage*> imgPng8;
	vector<ofImage*> imgPng16;
	vector<ofImage*> imgExrFloat;
};