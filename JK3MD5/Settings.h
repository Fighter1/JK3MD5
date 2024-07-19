#pragma once

namespace JK3MD5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for Settings
	/// </summary>
	public ref class Settings : public System::Windows::Forms::Form
	{
	public:
		Settings(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			String^ path = L"%AppData%\\JK3MD5\\Settings\\";
			StreamReader^ configFileRead = File::OpenText( path+L"JK3MD5_Config.dat" );
			try
			{
				String^ s = configFileRead->ReadLine();
				browseTextBox->Text = s;
			}
			finally
			{
				if ( configFileRead )
					delete ( IDisposable^ )( configFileRead );
			}
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Settings()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  saveButton;
	private: System::Windows::Forms::TextBox^  browseTextBox;
	private: System::Windows::Forms::Button^  browseButton;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::FolderBrowserDialog^  browseDialog;
	private: System::Windows::Forms::Button^  cancelButton;
	private: System::Windows::Forms::Button^  deleteConfigButton;
	private: System::Windows::Forms::Label^  label2;

	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->browseTextBox = (gcnew System::Windows::Forms::TextBox());
			this->browseButton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->browseDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->cancelButton = (gcnew System::Windows::Forms::Button());
			this->deleteConfigButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(148, 143);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(75, 23);
			this->saveButton->TabIndex = 0;
			this->saveButton->Text = L"Save";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &Settings::saveButton_Click);
			// 
			// browseTextBox
			// 
			this->browseTextBox->Location = System::Drawing::Point(12, 25);
			this->browseTextBox->Name = L"browseTextBox";
			this->browseTextBox->Size = System::Drawing::Size(380, 20);
			this->browseTextBox->TabIndex = 1;
			this->browseTextBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Settings::browseTextBox_MouseClick);
			// 
			// browseButton
			// 
			this->browseButton->Location = System::Drawing::Point(398, 23);
			this->browseButton->Name = L"browseButton";
			this->browseButton->Size = System::Drawing::Size(75, 23);
			this->browseButton->TabIndex = 2;
			this->browseButton->Text = L"Browse";
			this->browseButton->UseVisualStyleBackColor = true;
			this->browseButton->Click += gcnew System::EventHandler(this, &Settings::browseButton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(159, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Your GameData folder\'s location";
			// 
			// cancelButton
			// 
			this->cancelButton->Location = System::Drawing::Point(229, 143);
			this->cancelButton->Name = L"cancelButton";
			this->cancelButton->Size = System::Drawing::Size(75, 23);
			this->cancelButton->TabIndex = 4;
			this->cancelButton->Text = L"Cancel";
			this->cancelButton->UseVisualStyleBackColor = true;
			this->cancelButton->Click += gcnew System::EventHandler(this, &Settings::cancelButton_Click);
			// 
			// deleteConfigButton
			// 
			this->deleteConfigButton->Location = System::Drawing::Point(133, 95);
			this->deleteConfigButton->Name = L"deleteConfigButton";
			this->deleteConfigButton->Size = System::Drawing::Size(187, 28);
			this->deleteConfigButton->TabIndex = 5;
			this->deleteConfigButton->Text = L"Delete Config File";
			this->deleteConfigButton->UseVisualStyleBackColor = true;
			this->deleteConfigButton->Click += gcnew System::EventHandler(this, &Settings::deleteConfigButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(144, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(176, 26);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Note: This will delete your config file\r\nand restart the program.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Settings
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(485, 178);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->deleteConfigButton);
			this->Controls->Add(this->cancelButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->browseButton);
			this->Controls->Add(this->browseTextBox);
			this->Controls->Add(this->saveButton);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Settings";
			this->Text = L"Settings";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void browseButton_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				if ( browseDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK )
				{
					browseTextBox->Text = browseDialog->SelectedPath;
				}
			 }
private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e)
		 {
				 String^ path = L"%AppData%\\JK3MD5\\Settings\\";
				 if ( browseTextBox->Text == "" )
				 {
					 MessageBox::Show( "You cannot leave the GameData folder field empty.", "Error: GameData folder field empty", MessageBoxButtons::OK, MessageBoxIcon::Asterisk );
					 return;
				 }
				 File::Delete( path+L"JK3MD5_Config.dat" );
				 StreamWriter^ configFileWrite = File::CreateText( path+L"JK3MD5_Config.dat" );
				 try
				 {
					 configFileWrite->WriteLine( browseTextBox->Text );
				 }
				 finally
				 {
					 if ( configFileWrite )
						 delete( IDisposable^ )( configFileWrite );
				 }
				 this->Close();
		 }
private: System::Void browseTextBox_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
		 {
			if ( browseDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK )
			{
				browseTextBox->Text = browseDialog->SelectedPath;
			}
		 }
private: System::Void cancelButton_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 this->Close();
		 }
private: System::Void deleteConfigButton_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 String^ path = L"%AppData%\\JK3MD5\\Settings\\";
			if ( MessageBox::Show( "Delete config file and restart the program?", "", MessageBoxButtons::YesNo ) == System::Windows::Forms::DialogResult::Yes )
			{
				File::Delete( path+L"JK3MD5_Config.dat" );
				Application::Restart();
			}
		 }
};
}
