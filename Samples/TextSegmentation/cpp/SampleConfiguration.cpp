// Copyright (c) Microsoft. All rights reserved.

#include "pch.h"
#include "MainPage.xaml.h"
#include "SampleConfiguration.h"

using namespace SDKTemplate;

Platform::Array<Scenario>^ MainPage::scenariosInner = ref new Platform::Array<Scenario>
{
    { "Extract Text Segments", "SDKTemplate.Scenario1_ExtractTextSegments" }, 
    { "Get Current Text Segment From Index", "SDKTemplate.Scenario2_GetCurrentTextSegmentFromIndex" }
};
