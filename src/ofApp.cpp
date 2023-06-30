#include "ofApp.h"
int rectSize = 50;  // Size of each rectangle
int rectSpacing = 10;  // Spacing between rectangles
int rectSpeed = 2;  // Speed of rectangle movement

int numRectsX;  // Number of rectangles in the horizontal direction
int numRectsY;  // Number of rectangles in the vertical direction

ofColor colors[3] = { ofColor(255, 0, 0), ofColor(0, 255, 0), ofColor(0, 0, 255) };  // Array of primary colors

//--------------------------------------------------------------
void ofApp::setup() {

    // Calculate the number of rectangles based on the screen size
    numRectsX = ceil(ofGetWidth() / (rectSize + rectSpacing));
    numRectsY = ceil(ofGetHeight() / (rectSize + rectSpacing));
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {
    ofBackground(255);  // White background

       // Loop through each rectangle in the vertical direction
    for (int y = 0; y < numRectsY; y++) {
        // Calculate the y-coordinate of the current rectangle
        float rectY = ofMap(y, 0, numRectsY - 1, 0, ofGetHeight() - rectSize);

        // Loop through each rectangle in the horizontal direction
        for (int x = 0; x < numRectsX; x++) {
            // Calculate the x-coordinate of the current rectangle
            float rectX = ofMap(x, 0, numRectsX - 1, 0, ofGetWidth() - rectSize);

            // Calculate the offset based on time and position
            float offset = sin(ofGetFrameNum() * 0.02 + rectX * 0.1 + rectY * 0.1) * 20;

            // Calculate the index of the color to use
            int colorIndex = (x + y) % 3;

            // Set the fill color based on the color index
            ofSetColor(colors[colorIndex]);

            // Draw the rectangle with the calculated position and size
            ofDrawRectangle(rectX + offset, rectY + offset, rectSize, rectSize);
        }
    }
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
