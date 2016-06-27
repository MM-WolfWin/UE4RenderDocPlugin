/******************************************************************************
* The MIT License (MIT)
*
* Copyright (c) 2014 Fredrik Lindh
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
* THE SOFTWARE.
******************************************************************************/

#pragma once

#if WITH_EDITOR

#include "SlateBasics.h"
#include "Editor/UnrealEd/Public/SViewportToolBar.h"
#include "RenderDocPluginSettings.h"

class SRenderDocPluginSettingsEditorWindow : public SViewportToolBar
{
public:
	SLATE_BEGIN_ARGS(SRenderDocPluginSettingsEditorWindow) { }
    SLATE_ARGUMENT(FRenderDocPluginModule*, ThePlugin)
		SLATE_ARGUMENT(FRenderDocPluginSettings*, Settings)
	SLATE_END_ARGS()

	/** Widget constructor */
	void Construct(const FArguments& Args);

private:
	TSharedPtr<FUICommandList> CommandList;

	void BindCommands(FRenderDocPluginModule* ThePlugin, FRenderDocPluginSettings* settings);
};

#endif//WITH_EDITOR
