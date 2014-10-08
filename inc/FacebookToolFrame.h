#ifndef _FACEBOOK_TOOL_FRAME_H_
#define _FACEBOOK_TOOL_FRAME_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FUi.h>
#include <FUiIme.h>
#include <FGraphics.h>
#include <gl.h>

class FacebookToolFrame
	: public Tizen::Ui::Controls::Frame
{
public:
	FacebookToolFrame(void);
	virtual ~FacebookToolFrame(void);

private:
	virtual result OnInitializing(void);
	virtual result OnTerminating(void);
};

#endif	//_FACEBOOK_TOOLFRAME_H_
