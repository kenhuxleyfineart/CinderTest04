#include "cinder/app/AppNative.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class ArtmachineApp : public AppNative {
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void ArtmachineApp::setup()
{
}

void ArtmachineApp::mouseDown( MouseEvent event )
{
}

void ArtmachineApp::update()
{
}

void ArtmachineApp::draw()
{
	// clear out the window with black
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP_NATIVE( ArtmachineApp, RendererGl )
