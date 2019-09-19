#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    string myString = "I felt that thread that had come between us, tugging, tugging at my heart - so hard, it hurt me. A hundred times I almost rose, almost went in to her; a hundred times I thought, Go to her! Why are you waiting? Go back to her side! But every time, I thought of what would happen if I did. I knew that I couldn't lie beside her, without wanting to touch her. I couldn't have felt her breath upon my mouth, without wanting to kiss her. And I couldn't have kissed her, without wanting to save her";
    std::vector<string> splitString = ofSplitString(myString, " ");;
    int numWords = 98;
    
};
