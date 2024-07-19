// JK3MD5.cpp : main project file.

#include "stdafx.h"
#include "Main.h"

using namespace JK3MD5;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	String ^AppDataPath = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData);
	String^path = AppDataPath + L"\\JKMD5";

	if (!File::Exists( path+L"JK3MD5_Config.dat" )  )
	{
		Application::Run( gcnew FirstRun() );
		if (File::Exists( path+L"JK3MD5_Config.dat" )  )
		{
			Application::Run( gcnew Main() );
			return 0;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		// Create the main window and run it
		Application::Run( gcnew Main() );
		return 0;
	}
}