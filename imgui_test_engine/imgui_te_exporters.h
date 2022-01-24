// dear imgui
// (test engine, core)

#pragma once

//-------------------------------------------------------------------------
// Description
//-------------------------------------------------------------------------
//
// Test results may be exported in one of supported formats.
// To enable result exporting please configure test engine as follows:
//
//     ImGuiTestEngineIO& test_io = ImGuiTestEngine_GetIO(engine);
//     test_io.ExportResultsFile = "output_file.xml";
//     test_io.ExportResultsFormat = ImGuiTestEngineExportFormat_<...>;
//
// JUnit XML format
//
// JUnit XML format described at https://llg.cubic.org/docs/junit/. Many
// third party applications support consumption of this format. Some of
// of them are listed here:
// - Jenkins
//    - Installation guide: https://www.jenkins.io/doc/book/installing/docker/
//    - JUnit plugin: https://plugins.jenkins.io/junit/
// - xunit-viewer
//    - Project: https://github.com/lukejpreston/xunit-viewer
//    - Install npm: https://docs.npmjs.com/downloading-and-installing-node-js-and-npm
//    - Install viewer and view test results:
//          npm install xunit-viewer
//          imgui_tests -nopause -v2 -ve4 -nogui -export-file junit.xml tests
//          node_modules/xunit-viewer/bin/xunit-viewer -r junit.xml -o junit.html
//    - Open junit.html
//

//-------------------------------------------------------------------------
// Forward Declarations
//-------------------------------------------------------------------------

struct ImGuiTestEngine;

//-------------------------------------------------------------------------
// Types
//-------------------------------------------------------------------------

enum ImGuiTestEngineExportFormat_
{
    ImGuiTestEngineExportFormat_None = 0,
    ImGuiTestEngineExportFormat_JUnitXml,
};
typedef int ImGuiTestEngineExportFormat;

//-------------------------------------------------------------------------
// Functions
//-------------------------------------------------------------------------

void ImGuiTestEngine_Export(ImGuiTestEngine* engine);
