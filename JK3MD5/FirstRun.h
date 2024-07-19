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
	/// Summary for FirstRun
	/// </summary>
	public ref class FirstRun : public System::Windows::Forms::Form
	{
	public:
		FirstRun(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FirstRun()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  jkaBrowseTextBox;
	private: System::Windows::Forms::Button^  jkaBrowseButton;
	protected:

	protected:


	private: System::Windows::Forms::Button^  submitButton;
	private: System::Windows::Forms::Label^  infoLabel;
	private: System::Windows::Forms::Label^  jkaSelectLabel;
	private: System::Windows::Forms::FolderBrowserDialog^  jkaBrowseDialog;



	private: System::Windows::Forms::ComboBox^  jkaVersionDropdown;

	private: System::Windows::Forms::Label^  jkaVersionLabel;
	private: System::Windows::Forms::Label^  infoLabel2;




	private: System::Windows::Forms::Label^  jkoVersionLabel;
	private: System::Windows::Forms::ComboBox^  jkoVersionDropdown;


	private: System::Windows::Forms::Label^  jkoSelectLabel;
	private: System::Windows::Forms::Button^  jkoBrowseButton;


	private: System::Windows::Forms::TextBox^  jkoBrowseTextBox;

	private: System::Windows::Forms::CheckBox^  jkoCheckBox;
	private: System::Windows::Forms::CheckBox^  jkaCheckBox;
	private: System::Windows::Forms::Label^  checkLabel;
	private: System::Windows::Forms::FolderBrowserDialog^  jkoBrowseDialog;



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
			this->jkaBrowseTextBox = (gcnew System::Windows::Forms::TextBox());
			this->jkaBrowseButton = (gcnew System::Windows::Forms::Button());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->infoLabel = (gcnew System::Windows::Forms::Label());
			this->jkaSelectLabel = (gcnew System::Windows::Forms::Label());
			this->jkaBrowseDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->jkaVersionDropdown = (gcnew System::Windows::Forms::ComboBox());
			this->jkaVersionLabel = (gcnew System::Windows::Forms::Label());
			this->infoLabel2 = (gcnew System::Windows::Forms::Label());
			this->jkoVersionLabel = (gcnew System::Windows::Forms::Label());
			this->jkoVersionDropdown = (gcnew System::Windows::Forms::ComboBox());
			this->jkoSelectLabel = (gcnew System::Windows::Forms::Label());
			this->jkoBrowseButton = (gcnew System::Windows::Forms::Button());
			this->jkoBrowseTextBox = (gcnew System::Windows::Forms::TextBox());
			this->jkoCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->jkaCheckBox = (gcnew System::Windows::Forms::CheckBox());
			this->checkLabel = (gcnew System::Windows::Forms::Label());
			this->jkoBrowseDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->SuspendLayout();
			// 
			// jkaBrowseTextBox
			// 
			this->jkaBrowseTextBox->Location = System::Drawing::Point(11, 249);
			this->jkaBrowseTextBox->Name = L"jkaBrowseTextBox";
			this->jkaBrowseTextBox->Size = System::Drawing::Size(379, 20);
			this->jkaBrowseTextBox->TabIndex = 0;
			this->jkaBrowseTextBox->Visible = false;
			this->jkaBrowseTextBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &FirstRun::jkaBrowseTextBox_MouseClick);
			// 
			// jkaBrowseButton
			// 
			this->jkaBrowseButton->Location = System::Drawing::Point(399, 247);
			this->jkaBrowseButton->Name = L"jkaBrowseButton";
			this->jkaBrowseButton->Size = System::Drawing::Size(75, 23);
			this->jkaBrowseButton->TabIndex = 1;
			this->jkaBrowseButton->Text = L"Browse";
			this->jkaBrowseButton->UseVisualStyleBackColor = true;
			this->jkaBrowseButton->Visible = false;
			this->jkaBrowseButton->Click += gcnew System::EventHandler(this, &FirstRun::jkaBrowseButton_Click);
			// 
			// submitButton
			// 
			this->submitButton->Location = System::Drawing::Point(181, 312);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(75, 23);
			this->submitButton->TabIndex = 2;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = true;
			this->submitButton->Visible = false;
			this->submitButton->Click += gcnew System::EventHandler(this, &FirstRun::submitButton_Click);
			// 
			// infoLabel
			// 
			this->infoLabel->AutoSize = true;
			this->infoLabel->Location = System::Drawing::Point(12, 24);
			this->infoLabel->Name = L"infoLabel";
			this->infoLabel->Size = System::Drawing::Size(473, 26);
			this->infoLabel->TabIndex = 3;
			this->infoLabel->Text = L"JK MD5 is a program that compares the MD5 hash values of your JKA\'s or JKO\'s asse"
				L"ts, exes, etc.,\r\nto the hash values of the original game files to see if your fi"
				L"les have been modified.";
			this->infoLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// jkaSelectLabel
			// 
			this->jkaSelectLabel->AutoSize = true;
			this->jkaSelectLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jkaSelectLabel->Location = System::Drawing::Point(129, 233);
			this->jkaSelectLabel->Name = L"jkaSelectLabel";
			this->jkaSelectLabel->Size = System::Drawing::Size(198, 13);
			this->jkaSelectLabel->TabIndex = 4;
			this->jkaSelectLabel->Text = L"Please select your JKA GameData folder";
			this->jkaSelectLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->jkaSelectLabel->Visible = false;
			// 
			// jkaVersionDropdown
			// 
			this->jkaVersionDropdown->FormattingEnabled = true;
			this->jkaVersionDropdown->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"1.00", L"1.01" });
			this->jkaVersionDropdown->Location = System::Drawing::Point(158, 285);
			this->jkaVersionDropdown->Name = L"jkaVersionDropdown";
			this->jkaVersionDropdown->Size = System::Drawing::Size(121, 21);
			this->jkaVersionDropdown->TabIndex = 6;
			this->jkaVersionDropdown->Text = L"1.01";
			this->jkaVersionDropdown->Visible = false;
			// 
			// jkaVersionLabel
			// 
			this->jkaVersionLabel->AutoSize = true;
			this->jkaVersionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jkaVersionLabel->Location = System::Drawing::Point(144, 269);
			this->jkaVersionLabel->Name = L"jkaVersionLabel";
			this->jkaVersionLabel->Size = System::Drawing::Size(152, 13);
			this->jkaVersionLabel->TabIndex = 7;
			this->jkaVersionLabel->Text = L"Please select your JKA version";
			this->jkaVersionLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->jkaVersionLabel->Visible = false;
			// 
			// infoLabel2
			// 
			this->infoLabel2->AutoSize = true;
			this->infoLabel2->Location = System::Drawing::Point(33, 64);
			this->infoLabel2->Name = L"infoLabel2";
			this->infoLabel2->Size = System::Drawing::Size(416, 13);
			this->infoLabel2->TabIndex = 8;
			this->infoLabel2->Text = L"You\'ll only have to do this setup once, since this is the first time you\'ve run t"
				L"he program.";
			// 
			// jkoVersionLabel
			// 
			this->jkoVersionLabel->AutoSize = true;
			this->jkoVersionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jkoVersionLabel->Location = System::Drawing::Point(144, 182);
			this->jkoVersionLabel->Name = L"jkoVersionLabel";
			this->jkoVersionLabel->Size = System::Drawing::Size(153, 13);
			this->jkoVersionLabel->TabIndex = 13;
			this->jkoVersionLabel->Text = L"Please select your JKO version";
			this->jkoVersionLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->jkoVersionLabel->Visible = false;
			// 
			// jkoVersionDropdown
			// 
			this->jkoVersionDropdown->FormattingEnabled = true;
			this->jkoVersionDropdown->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"1.04" });
			this->jkoVersionDropdown->Location = System::Drawing::Point(158, 198);
			this->jkoVersionDropdown->Name = L"jkoVersionDropdown";
			this->jkoVersionDropdown->Size = System::Drawing::Size(121, 21);
			this->jkoVersionDropdown->TabIndex = 12;
			this->jkoVersionDropdown->Text = L"1.04";
			this->jkoVersionDropdown->Visible = false;
			// 
			// jkoSelectLabel
			// 
			this->jkoSelectLabel->AutoSize = true;
			this->jkoSelectLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->jkoSelectLabel->Location = System::Drawing::Point(129, 146);
			this->jkoSelectLabel->Name = L"jkoSelectLabel";
			this->jkoSelectLabel->Size = System::Drawing::Size(199, 13);
			this->jkoSelectLabel->TabIndex = 11;
			this->jkoSelectLabel->Text = L"Please select your JKO GameData folder";
			this->jkoSelectLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->jkoSelectLabel->Visible = false;
			// 
			// jkoBrowseButton
			// 
			this->jkoBrowseButton->Location = System::Drawing::Point(399, 160);
			this->jkoBrowseButton->Name = L"jkoBrowseButton";
			this->jkoBrowseButton->Size = System::Drawing::Size(75, 23);
			this->jkoBrowseButton->TabIndex = 10;
			this->jkoBrowseButton->Text = L"Browse";
			this->jkoBrowseButton->UseVisualStyleBackColor = true;
			this->jkoBrowseButton->Visible = false;
			this->jkoBrowseButton->Click += gcnew System::EventHandler(this, &FirstRun::jkoBrowseButton_Click);
			// 
			// jkoBrowseTextBox
			// 
			this->jkoBrowseTextBox->Location = System::Drawing::Point(11, 162);
			this->jkoBrowseTextBox->Name = L"jkoBrowseTextBox";
			this->jkoBrowseTextBox->Size = System::Drawing::Size(379, 20);
			this->jkoBrowseTextBox->TabIndex = 9;
			this->jkoBrowseTextBox->Visible = false;
			this->jkoBrowseTextBox->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &FirstRun::jkoBrowseTextBox_MouseClick);
			// 
			// jkoCheckBox
			// 
			this->jkoCheckBox->AutoSize = true;
			this->jkoCheckBox->Location = System::Drawing::Point(147, 110);
			this->jkoCheckBox->Name = L"jkoCheckBox";
			this->jkoCheckBox->Size = System::Drawing::Size(46, 17);
			this->jkoCheckBox->TabIndex = 14;
			this->jkoCheckBox->Text = L"JKO";
			this->jkoCheckBox->UseVisualStyleBackColor = true;
			this->jkoCheckBox->CheckedChanged += gcnew System::EventHandler(this, &FirstRun::jkoCheckBox_CheckedChanged);
			// 
			// jkaCheckBox
			// 
			this->jkaCheckBox->AutoSize = true;
			this->jkaCheckBox->Location = System::Drawing::Point(250, 110);
			this->jkaCheckBox->Name = L"jkaCheckBox";
			this->jkaCheckBox->Size = System::Drawing::Size(45, 17);
			this->jkaCheckBox->TabIndex = 15;
			this->jkaCheckBox->Text = L"JKA";
			this->jkaCheckBox->UseVisualStyleBackColor = true;
			this->jkaCheckBox->CheckedChanged += gcnew System::EventHandler(this, &FirstRun::jkaCheckBox_CheckedChanged);
			// 
			// checkLabel
			// 
			this->checkLabel->AutoSize = true;
			this->checkLabel->Location = System::Drawing::Point(129, 94);
			this->checkLabel->Name = L"checkLabel";
			this->checkLabel->Size = System::Drawing::Size(187, 13);
			this->checkLabel->TabIndex = 16;
			this->checkLabel->Text = L"Please check which games you have.";
			// 
			// FirstRun
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 345);
			this->Controls->Add(this->checkLabel);
			this->Controls->Add(this->jkaCheckBox);
			this->Controls->Add(this->jkoCheckBox);
			this->Controls->Add(this->jkoVersionLabel);
			this->Controls->Add(this->jkoVersionDropdown);
			this->Controls->Add(this->jkoSelectLabel);
			this->Controls->Add(this->jkoBrowseButton);
			this->Controls->Add(this->jkoBrowseTextBox);
			this->Controls->Add(this->infoLabel2);
			this->Controls->Add(this->jkaVersionLabel);
			this->Controls->Add(this->jkaVersionDropdown);
			this->Controls->Add(this->jkaSelectLabel);
			this->Controls->Add(this->infoLabel);
			this->Controls->Add(this->submitButton);
			this->Controls->Add(this->jkaBrowseButton);
			this->Controls->Add(this->jkaBrowseTextBox);
			this->MaximizeBox = false;
			this->Name = L"FirstRun";
			this->Text = L"JK MD5 - First Run";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void jkaBrowseButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 if (jkaBrowseDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 jkaBrowseTextBox->Text = jkaBrowseDialog->SelectedPath;
				 }
	}
	private: System::Void submitButton_Click(System::Object^  sender, System::EventArgs^  e)
	{
				 String ^AppDataPath = Environment::GetFolderPath(Environment::SpecialFolder::ApplicationData);
				 String^path = AppDataPath + L"\\JKMD5";

				 if (jkaBrowseTextBox->Text == "")
				 {
					 MessageBox::Show("You need to select your JKA GameData folder.", "Error: No folder selected", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					 return;
				 }
				 if (jkaVersionDropdown->Text == "")
				 {
					 MessageBox::Show("You need to select your JKA version.", "Error: No version selected", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					 return;
				 }

				 StreamWriter^ configFileWrite = File::CreateText(path + L"gamefolder.dat");
				 try
				 {
					 configFileWrite->WriteLine(jkaBrowseTextBox->Text);
				 }
				 finally
				 {
					 if (configFileWrite)
						 delete(IDisposable^)(configFileWrite);
				 }

				 StreamWriter^ gameversionFileWrite = File::CreateText(path + L"gameversion.dat");
				 try
				 {
					 gameversionFileWrite->WriteLine(jkaVersionDropdown->Text);
				 }
				 finally
				 {
					 if (gameversionFileWrite)
						 delete(IDisposable^)(gameversionFileWrite);
				 }

				 this->Close();
	}
	private: System::Void jkaBrowseTextBox_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
				 if (jkaBrowseDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 jkaBrowseTextBox->Text = jkaBrowseDialog->SelectedPath;
				 }
	}
	private: System::Void jkoBrowseTextBox_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
				 if (jkoBrowseDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 jkoBrowseTextBox->Text = jkoBrowseDialog->SelectedPath;
				 }
	}

	private: System::Void jkoCheckBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (jkoCheckBox->Checked)
				 {
					 jkoSelectLabel->Visible = true;
					 jkoBrowseTextBox->Visible = true;
					 jkoBrowseButton->Visible = true;
					 jkoVersionLabel->Visible = true;
					 jkoVersionDropdown->Visible = true;
				 }
				 else
				 {
					 jkoSelectLabel->Visible = false;
					 jkoBrowseTextBox->Visible = false;
					 jkoBrowseButton->Visible = false;
					 jkoVersionLabel->Visible = false;
					 jkoVersionDropdown->Visible = false;
				 }

	}
	private: System::Void jkaCheckBox_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (jkaCheckBox->Checked)
				 {
					 jkaSelectLabel->Visible = true;
					 jkaBrowseTextBox->Visible = true;
					 jkaBrowseButton->Visible = true;
					 jkaVersionLabel->Visible = true;
					 jkaVersionDropdown->Visible = true;
				 }
				 else
				 {
					 jkaSelectLabel->Visible = false;
					 jkaBrowseTextBox->Visible = false;
					 jkaBrowseButton->Visible = false;
					 jkaVersionLabel->Visible = false;
					 jkaVersionDropdown->Visible = false;
				 }
	}
	private: System::Void jkoBrowseButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (jkoBrowseDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 jkoBrowseTextBox->Text = jkoBrowseDialog->SelectedPath;
				 }
	}
};
}