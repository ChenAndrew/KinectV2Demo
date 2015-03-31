#include "ofApp.h"

int WindowWidth = 1366;
int WindowHeight = 768;
HandPositions myHandPositions;
//--------------------------------------------------------------
void ofApp::setup(){
	kinect.open();
	kinect.initColorSource();
	//kinect.initBodyIndexSource();
	kinect.initBodySource();
	myHandPositions.LeftHandX = 0;
	myHandPositions.LeftHandY = 0;
	myHandPositions.RightHandX = 0;
	myHandPositions.RightHandY = 0;
	//myBodySource = *(kinect.getBodySource()) ;
}

//--------------------------------------------------------------
void ofApp::update(){
	kinect.update();
	//myLeftHand = kinect.getBodySource()->getProjectedJoints(JointType::JointType_HandLeft);
	//myRightHand = kinect.getBodySource()->getProjectedJoints(JointType::JointType_HandRight);
}

//--------------------------------------------------------------
void ofApp::draw(){
	//kinect.getColorSource()->draw(0,0,WindowWidth,WindowHeight);
	//kinect.getBodyIndexSource()->draw(0,0);
	//kinect.getBodySource()->CustomDrawFunction();
	//kinect.getBodySource()->drawProjected(0, 0, WindowWidth, WindowHeight, ofxKFW2::ProjectionCoordinates::DepthCamera);
	kinect.getColorSource()->draw(0,0, WindowWidth, WindowHeight);
	myHandPositions = kinect.getBodySource()->CustomDrawFunction(WindowWidth, WindowHeight);
	printf("HandPosition LeftX =  %f \n", myHandPositions.LeftHandX);
	printf("HandPosition LeftY =  %f \n", myHandPositions.LeftHandY);
	printf("HandPosition RightX =  %f \n", myHandPositions.RightHandX);
	printf("HandPosition RightY =  %f \n", myHandPositions.RightHandY);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
