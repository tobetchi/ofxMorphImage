#include "ofMain.h"
#include "ofApp.h"

#ifdef USE_PROGRAMMABLE_GL
#include "ofGLProgrammableRenderer.h"
#endif


//========================================================================
int main( ){
    
#ifdef 	USE_PROGRAMMABLE_GL
    ofGLWindowSettings settings;
    settings.setGLVersion(3, 2);
    settings.setSize(640, 480);
    ofCreateWindow(settings);
#else
	ofSetupOpenGL(640, 480, OF_WINDOW);
#endif

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
