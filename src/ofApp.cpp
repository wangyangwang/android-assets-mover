#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    

    
    string basePath ="//Users/inbox/Google Drive/2.1 (1). Design (Find assets here)/design_DEVELOPERS/Android_assets/";
    
    string assetspath = basePath+"Temp/";
    
    ofDirectory dir(assetspath);
    dir.allowExt("png");
    dir.listDir();
    for (int i=0; i<dir.size(); i++) {
        string name =dir.getFile(i).getBaseName();
        
        if(name.find("_Portuguese") != string::npos){
            if (name.find("@2x") != string::npos) {
                
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                dropped.erase(dropped.find("_Portuguese"));
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-xhdpi-pt/",true);
            }else if(name.find("@1.5x") != string::npos){
                
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                dropped.erase(dropped.find("_Portuguese"));
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-hdpi-pt/",true);
                
            }else if(name.find("@3x") != string::npos){
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                dropped.erase(dropped.find("_Portuguese"));
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-xxhdpi-pt/",true);
                
            }else if(name.find("@4x") != string::npos){
                
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                dropped.erase(dropped.find("_Portuguese"));
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-xxxhdpi-pt/",true);
                
            }else if(name.find("@1x") != string::npos){
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                dropped.erase(dropped.find("_Portuguese"));
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-mdpi-pt/",true);
            }

        }else if(name.find("_Spanish") != string::npos){
            if (name.find("@2x") != string::npos) {
                
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                dropped.erase(dropped.find("_Spanish"));
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-xhdpi-es/",true);
            }else if(name.find("@1.5x") != string::npos){
                
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                dropped.erase(dropped.find("_Spanish"));
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-hdpi-es/",true);
                
            }else if(name.find("@3x") != string::npos){
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                dropped.erase(dropped.find("_Spanish"));
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-xxhdpi-es/",true);
                
            }else if(name.find("@4x") != string::npos){
                
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                dropped.erase(dropped.find("_Spanish"));
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-xxxhdpi-es/",true);
                
            }else if(name.find("@1x") != string::npos){
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                dropped.erase(dropped.find("_Spanish"));
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-mdpi-es/",true);
            }

        }else{
            if (name.find("@2x") != string::npos) {
                
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-xhdpi/",true);
            }else if(name.find("@1.5x") != string::npos){
                
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-hdpi/",true);
                
            }else if(name.find("@3x") != string::npos){
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-xxhdpi/",true);
                
            }else if(name.find("@4x") != string::npos){
                
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-xxxhdpi/",true);
                
            }else if(name.find("@1x") != string::npos){
                ofFile f = dir.getFile(i);
                int atLoction = name.find("@");
                string dropped = name.substr(0,atLoction);
                f.renameTo(dropped + ".png");
                cout<<f.getBaseName()<<endl;
                f.moveTo(basePath+"drawable-mdpi/",true);
            }
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
