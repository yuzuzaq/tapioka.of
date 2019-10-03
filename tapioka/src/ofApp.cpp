#include "ofApp.h"

void ofApp::setup(){
    // 背景をぬりつぶす
    ofBackground(196,150,120);
    
    ofEnableDepthTest();//深度テスト
    ofEnableSmoothing();
    
    light.enable();
    
    light.setSpotlight();
    
    light.setPosition(-100, 100, 100);
    //環境反射光
    light.setAmbientColor(ofFloatColor(0.1,0.1,0.5,1.0));
    //拡散反射光
    light.setDiffuseColor(ofFloatColor(0.2,0.2,1.0));
    //鏡面反射光
    light.setSpecularColor(ofFloatColor(1.0,1.0,1.0));
    // 自動で背景を更新しない
    ofSetBackgroundAuto(false);
    
    // 垂直同期
    ofSetVerticalSync(true);
    
    for(int i=0; i<300;i++){
        // sphereの位置をランダムにする（X, Y, Z）
        spheres[i].setPosition(ofRandom(-500,500), ofRandom(-500,500), ofRandom(-500,500));
        // sphereのサイズ
        spheres[i].setRadius(5);
    }
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    //【軌跡を表現する】
    // 背景と同じ色で、透明度を設定した四角形を描く
    ofSetColor(196,150,120,50);   //4つめの値「50」が透明度
    ofDrawRectangle(0,0,ofGetWidth(),ofGetHeight());

    // 描画の基準を真ん中に移動する
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    // キャンバスの座標を回転させる
    
    
    // HSBカラーで設定（色相、彩度、明度）
    //ofSetColor(ofColor::fromHsb(ofGetFrameNum()%255,225,225));
    //「ofGetFrameNum()%255」で、時間の経過とともに色を変化させているよ！
    
    // sphereを描く

    ofRotateY(ofGetFrameNum());
    ofRotateZ(ofGetFrameNum());
    for(int i=0; i<100; i++){
        ofSetColor(0, 0, 0,100);
        spheres[i].draw();

    }

    cam.end();
//    ofPushMatrix();
//    ofDrawSphere(ofGetWidth()/2, ofGetHeight()/2, 200);
//    ofSetColor(ofColor::fromHsb(0,100,100));
//    ofPopMatrix();
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

