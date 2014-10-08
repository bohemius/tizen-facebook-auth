#include <new>
#include "FacebookToolFrame.h"
#include "FacebookToolForm.h"

using namespace Tizen::Base;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;

FacebookToolFrame::FacebookToolFrame(void)
{
}

FacebookToolFrame::~FacebookToolFrame(void)
{
}

result
FacebookToolFrame::OnInitializing(void)
{
	result r = E_SUCCESS;

	// Create a form
	FacebookForm* pFacebookToolForm = new (std::nothrow) FacebookForm();
	TryReturn(pFacebookToolForm != null, false, "The memory is insufficient.");
	pFacebookToolForm->Initialize();

	// Add the form to the frame
	AddControl(pFacebookToolForm);

	// Set the current form
	SetCurrentForm(pFacebookToolForm);

	// Draw the form
	pFacebookToolForm->Invalidate(true);

	// TODO: Add your frame initialization code here.

	return r;
}

result
FacebookToolFrame::OnTerminating(void)
{
	result r = E_SUCCESS;

	// TODO: Add your frame termination code here.
	return r;
}


