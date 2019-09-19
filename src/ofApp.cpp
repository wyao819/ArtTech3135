#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundAuto(false);
    ofSetFrameRate(60);
    ofEnableAlphaBlending();
    
    ofBackground(0);
    
//    for (int i=0; i<splitString.size(); i++){
//         printf( "element %i is %s\n", i, splitString[i].c_str() );
//    }

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    if(ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)){
        
        for (int i=0; i<numWords; i++){
            ofDrawBitmapString(splitString[i], ofGetMouseX(), ofGetMouseY());
        }

//        ofDrawBitmapString(splitString[1], ofGetMouseX(), ofGetMouseY());
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == 'c'){
        ofBackground(0);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
