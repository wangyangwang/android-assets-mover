#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    string path = "//Users/inbox/Google Drive/2.1 (1). Design (Find assets here)/design_DEVELOPERS/Android_assets/Temp";
    ofDirectory dir(path);
    dir.allowExt("png");
    dir.listDir();
    for (int i=0; i<dir.size(); i++) {
        string name =dir.getFile(i).getBaseName();
        if (name.find("@2x") != string::npos) {
            string dropped =
            dir.getFile(i).renameTo()
            cout<<name<<" contains@2x "<<endl;
        }else if(name.find("@1.5x") != string::npos){
             cout<<name<<" contains@1.5x "<<endl;
        }else if(name.find("@3x") != string::npos){
             cout<<name<<" contains@3x "<<endl;
        }else if(name.find("@4x") != string::npos){
             cout<<name<<" contains4x "<<endl;
        }else if(name.find("@1x") != string::npos){
             cout<<name<<" contains1x "<<endl;
        }
    }
    ofExit();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
