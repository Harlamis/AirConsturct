#include "loginScreen.h"
#include <Windows.h>
using namespace AirConsturct; [STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew loginScreen);
}
