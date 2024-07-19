#pragma once

#include <Windows.h>
#include <WinCrypt.h>
//#include <thread>

#include "About.h"
#include "Settings.h"
#include "FirstRun.h"

namespace JK3MD5 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Security::Cryptography;
	using namespace System::Text;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
		static bool MD5Checked = false;
	public:
		Main(void)
		{
			InitializeComponent();
			progressBar1->Minimum = 0;
			progressBar1->Maximum = 100;
			progressBar1->Value = 0;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^  navigationBar;
	protected: 

	protected: 

	protected: 
	private: System::Windows::Forms::ToolStripLabel^  aboutLabel;
	private: System::Windows::Forms::ToolStripLabel^  settingsLabel;
	private: System::Windows::Forms::Button^  checkButton;
	private: System::Windows::Forms::Label^  speedNoticeLabel;
	private: System::Windows::Forms::TabControl^  tabControl1;


	private: System::Windows::Forms::TabPage^  checkFilesTabPage;
	private: System::Windows::Forms::TabPage^  resultsTabPage;


























	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  pk3sModifiedNumberLabel;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  pk3sUnmodifiedNumberLabel;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  overviewTabPage;
	private: System::Windows::Forms::TabPage^  pk3sTabPage;


	private: System::Windows::Forms::TextBox^  originalMD5Assets3TextBox;
	private: System::Windows::Forms::TextBox^  originalMD5Assets2TextBox;
	private: System::Windows::Forms::Label^  originalMD5Assets3Label;
	private: System::Windows::Forms::Label^  originalMD5Assets2Label;
	private: System::Windows::Forms::Label^  originalMD5Assets1Label;
	private: System::Windows::Forms::Label^  originalMD5Assets0Label;
	private: System::Windows::Forms::Label^  yourMD5Assets3Label;
	private: System::Windows::Forms::Label^  yourMD5Assets2Label;
	private: System::Windows::Forms::Label^  yourMD5Assets1Label;
	private: System::Windows::Forms::Label^  yourMD5Assets0Label;
	private: System::Windows::Forms::TextBox^  originalMD5Assets1TextBox;
	private: System::Windows::Forms::TextBox^  originalMD5Assets0TextBox;
	private: System::Windows::Forms::Label^  assets3StatusLabel;
	private: System::Windows::Forms::TextBox^  yourMD5Assets3TextBox;
	private: System::Windows::Forms::Label^  assets3Label;
	private: System::Windows::Forms::Label^  assets2StatusLabel;
	private: System::Windows::Forms::Label^  assets1StatusLabel;
	private: System::Windows::Forms::Label^  assets0StatusLabel;
	private: System::Windows::Forms::TextBox^  yourMD5Assets2TextBox;
	private: System::Windows::Forms::Label^  assets2Label;
	private: System::Windows::Forms::TextBox^  yourMD5Assets1TextBox;
	private: System::Windows::Forms::Label^  assets1Label;
	private: System::Windows::Forms::TextBox^  yourMD5Assets0TextBox;
	private: System::Windows::Forms::Label^  assets0Label;
	private: System::Windows::Forms::Label^  noticeLabel;
	private: System::Windows::Forms::Label^  infoLabel;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
private: System::Windows::Forms::TabPage^  dllsTabPage;
private: System::Windows::Forms::TextBox^  originalMD5OpenAL32TextBox;
private: System::Windows::Forms::TextBox^  originalMD5Jagamex86TextBox;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::TextBox^  originalMD5IFC22TextBox;
private: System::Windows::Forms::TextBox^  originalMD5EaxManTextBox;
private: System::Windows::Forms::Label^  OpenAL32StatusLabel;
private: System::Windows::Forms::TextBox^  yourMD5OpenAL32TextBox;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::Label^  jagamex86StatusLabel;
private: System::Windows::Forms::Label^  IFC22StatusLabel;
private: System::Windows::Forms::Label^  EaxManStatusLabel;
private: System::Windows::Forms::TextBox^  yourMD5Jagamex86TextBox;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::TextBox^  yourMD5IFC22TextBox;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::TextBox^  yourMD5EaxManTextBox;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TabPage^  exesTabPage;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  exesModifiedNumberLabel;
private: System::Windows::Forms::Label^  exesUnmodifiedNumberLabel;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  dllsModifiedNumberLabel;
private: System::Windows::Forms::Label^  dllsUnmodifiedNumberLabel;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::TextBox^  originalMD5jaspTextBox;
private: System::Windows::Forms::TextBox^  originalMD5jampTextBox;
private: System::Windows::Forms::Label^  jaspStatusLabel;
private: System::Windows::Forms::Label^  jampStatusLabel;
private: System::Windows::Forms::TextBox^  yourMD5jaspTextBox;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::TextBox^  yourMD5jampTextBox;
private: System::Windows::Forms::Label^  label29;





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
			this->navigationBar = (gcnew System::Windows::Forms::ToolStrip());
			this->settingsLabel = (gcnew System::Windows::Forms::ToolStripLabel());
			this->aboutLabel = (gcnew System::Windows::Forms::ToolStripLabel());
			this->checkButton = (gcnew System::Windows::Forms::Button());
			this->speedNoticeLabel = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->checkFilesTabPage = (gcnew System::Windows::Forms::TabPage());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->noticeLabel = (gcnew System::Windows::Forms::Label());
			this->infoLabel = (gcnew System::Windows::Forms::Label());
			this->resultsTabPage = (gcnew System::Windows::Forms::TabPage());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->overviewTabPage = (gcnew System::Windows::Forms::TabPage());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->exesModifiedNumberLabel = (gcnew System::Windows::Forms::Label());
			this->exesUnmodifiedNumberLabel = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dllsModifiedNumberLabel = (gcnew System::Windows::Forms::Label());
			this->dllsUnmodifiedNumberLabel = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pk3sModifiedNumberLabel = (gcnew System::Windows::Forms::Label());
			this->pk3sUnmodifiedNumberLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pk3sTabPage = (gcnew System::Windows::Forms::TabPage());
			this->originalMD5Assets3TextBox = (gcnew System::Windows::Forms::TextBox());
			this->originalMD5Assets2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->originalMD5Assets3Label = (gcnew System::Windows::Forms::Label());
			this->originalMD5Assets2Label = (gcnew System::Windows::Forms::Label());
			this->originalMD5Assets1Label = (gcnew System::Windows::Forms::Label());
			this->originalMD5Assets0Label = (gcnew System::Windows::Forms::Label());
			this->yourMD5Assets3Label = (gcnew System::Windows::Forms::Label());
			this->yourMD5Assets2Label = (gcnew System::Windows::Forms::Label());
			this->yourMD5Assets1Label = (gcnew System::Windows::Forms::Label());
			this->yourMD5Assets0Label = (gcnew System::Windows::Forms::Label());
			this->originalMD5Assets1TextBox = (gcnew System::Windows::Forms::TextBox());
			this->originalMD5Assets0TextBox = (gcnew System::Windows::Forms::TextBox());
			this->assets3StatusLabel = (gcnew System::Windows::Forms::Label());
			this->yourMD5Assets3TextBox = (gcnew System::Windows::Forms::TextBox());
			this->assets3Label = (gcnew System::Windows::Forms::Label());
			this->assets2StatusLabel = (gcnew System::Windows::Forms::Label());
			this->assets1StatusLabel = (gcnew System::Windows::Forms::Label());
			this->assets0StatusLabel = (gcnew System::Windows::Forms::Label());
			this->yourMD5Assets2TextBox = (gcnew System::Windows::Forms::TextBox());
			this->assets2Label = (gcnew System::Windows::Forms::Label());
			this->yourMD5Assets1TextBox = (gcnew System::Windows::Forms::TextBox());
			this->assets1Label = (gcnew System::Windows::Forms::Label());
			this->yourMD5Assets0TextBox = (gcnew System::Windows::Forms::TextBox());
			this->assets0Label = (gcnew System::Windows::Forms::Label());
			this->dllsTabPage = (gcnew System::Windows::Forms::TabPage());
			this->originalMD5OpenAL32TextBox = (gcnew System::Windows::Forms::TextBox());
			this->originalMD5Jagamex86TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->originalMD5IFC22TextBox = (gcnew System::Windows::Forms::TextBox());
			this->originalMD5EaxManTextBox = (gcnew System::Windows::Forms::TextBox());
			this->OpenAL32StatusLabel = (gcnew System::Windows::Forms::Label());
			this->yourMD5OpenAL32TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->jagamex86StatusLabel = (gcnew System::Windows::Forms::Label());
			this->IFC22StatusLabel = (gcnew System::Windows::Forms::Label());
			this->EaxManStatusLabel = (gcnew System::Windows::Forms::Label());
			this->yourMD5Jagamex86TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->yourMD5IFC22TextBox = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->yourMD5EaxManTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->exesTabPage = (gcnew System::Windows::Forms::TabPage());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->originalMD5jaspTextBox = (gcnew System::Windows::Forms::TextBox());
			this->originalMD5jampTextBox = (gcnew System::Windows::Forms::TextBox());
			this->jaspStatusLabel = (gcnew System::Windows::Forms::Label());
			this->jampStatusLabel = (gcnew System::Windows::Forms::Label());
			this->yourMD5jaspTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->yourMD5jampTextBox = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->navigationBar->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->checkFilesTabPage->SuspendLayout();
			this->resultsTabPage->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->overviewTabPage->SuspendLayout();
			this->pk3sTabPage->SuspendLayout();
			this->dllsTabPage->SuspendLayout();
			this->exesTabPage->SuspendLayout();
			this->SuspendLayout();
			// 
			// navigationBar
			// 
			this->navigationBar->BackColor = System::Drawing::SystemColors::ControlLight;
			this->navigationBar->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->navigationBar->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->settingsLabel, 
				this->aboutLabel});
			this->navigationBar->Location = System::Drawing::Point(0, 0);
			this->navigationBar->Name = L"navigationBar";
			this->navigationBar->Size = System::Drawing::Size(719, 25);
			this->navigationBar->TabIndex = 0;
			// 
			// settingsLabel
			// 
			this->settingsLabel->ActiveLinkColor = System::Drawing::Color::Red;
			this->settingsLabel->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->settingsLabel->LinkColor = System::Drawing::Color::Black;
			this->settingsLabel->Name = L"settingsLabel";
			this->settingsLabel->Size = System::Drawing::Size(49, 22);
			this->settingsLabel->Text = L"Settings";
			this->settingsLabel->Click += gcnew System::EventHandler(this, &Main::settingsLabel_Click);
			// 
			// aboutLabel
			// 
			this->aboutLabel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->aboutLabel->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->aboutLabel->Name = L"aboutLabel";
			this->aboutLabel->Size = System::Drawing::Size(40, 22);
			this->aboutLabel->Text = L"About";
			this->aboutLabel->Click += gcnew System::EventHandler(this, &Main::aboutLabel_Click);
			// 
			// checkButton
			// 
			this->checkButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkButton->Location = System::Drawing::Point(238, 224);
			this->checkButton->Name = L"checkButton";
			this->checkButton->Size = System::Drawing::Size(218, 62);
			this->checkButton->TabIndex = 1;
			this->checkButton->Text = L"Check Your JK3\'s Files";
			this->checkButton->UseVisualStyleBackColor = true;
			this->checkButton->Click += gcnew System::EventHandler(this, &Main::checkButton_Click);
			// 
			// speedNoticeLabel
			// 
			this->speedNoticeLabel->AutoSize = true;
			this->speedNoticeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->speedNoticeLabel->Location = System::Drawing::Point(190, 141);
			this->speedNoticeLabel->Name = L"speedNoticeLabel";
			this->speedNoticeLabel->Size = System::Drawing::Size(333, 80);
			this->speedNoticeLabel->TabIndex = 2;
			this->speedNoticeLabel->Text = L"This can take a few seconds to a few minutes \r\ndepending on the speed of your com" 
				L"puter.\r\nThe program may seen frozen while checking,\r\n but it is actually checkin" 
				L"g.";
			this->speedNoticeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->checkFilesTabPage);
			this->tabControl1->Controls->Add(this->resultsTabPage);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 25);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(719, 439);
			this->tabControl1->TabIndex = 3;
			// 
			// checkFilesTabPage
			// 
			this->checkFilesTabPage->BackColor = System::Drawing::SystemColors::Control;
			this->checkFilesTabPage->Controls->Add(this->progressBar1);
			this->checkFilesTabPage->Controls->Add(this->noticeLabel);
			this->checkFilesTabPage->Controls->Add(this->infoLabel);
			this->checkFilesTabPage->Controls->Add(this->checkButton);
			this->checkFilesTabPage->Controls->Add(this->speedNoticeLabel);
			this->checkFilesTabPage->Location = System::Drawing::Point(4, 22);
			this->checkFilesTabPage->Name = L"checkFilesTabPage";
			this->checkFilesTabPage->Padding = System::Windows::Forms::Padding(3);
			this->checkFilesTabPage->Size = System::Drawing::Size(711, 413);
			this->checkFilesTabPage->TabIndex = 0;
			this->checkFilesTabPage->Text = L"Check Files";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(238, 292);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(218, 28);
			this->progressBar1->TabIndex = 8;
			this->progressBar1->Visible = false;
			// 
			// noticeLabel
			// 
			this->noticeLabel->AutoSize = true;
			this->noticeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->noticeLabel->Location = System::Drawing::Point(172, 96);
			this->noticeLabel->Name = L"noticeLabel";
			this->noticeLabel->Size = System::Drawing::Size(381, 20);
			this->noticeLabel->TabIndex = 7;
			this->noticeLabel->Text = L"Please note that this program only supports JK3 1.01";
			this->noticeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// infoLabel
			// 
			this->infoLabel->AutoSize = true;
			this->infoLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->infoLabel->Location = System::Drawing::Point(35, 24);
			this->infoLabel->Name = L"infoLabel";
			this->infoLabel->Size = System::Drawing::Size(650, 40);
			this->infoLabel->TabIndex = 6;
			this->infoLabel->Text = L"JK3 MD5 is a program that compares the MD5 hash values of your JKA\'s assets, exes" 
				L", etc.,\r\nto the hash values of the original game files to see if your files have" 
				L" been modified.";
			this->infoLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// resultsTabPage
			// 
			this->resultsTabPage->BackColor = System::Drawing::SystemColors::Control;
			this->resultsTabPage->Controls->Add(this->tabControl2);
			this->resultsTabPage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->resultsTabPage->Location = System::Drawing::Point(4, 22);
			this->resultsTabPage->Name = L"resultsTabPage";
			this->resultsTabPage->Padding = System::Windows::Forms::Padding(3);
			this->resultsTabPage->Size = System::Drawing::Size(711, 413);
			this->resultsTabPage->TabIndex = 1;
			this->resultsTabPage->Text = L"Results";
			this->resultsTabPage->Enter += gcnew System::EventHandler(this, &Main::resultsTabPage_Enter);
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->overviewTabPage);
			this->tabControl2->Controls->Add(this->pk3sTabPage);
			this->tabControl2->Controls->Add(this->dllsTabPage);
			this->tabControl2->Controls->Add(this->exesTabPage);
			this->tabControl2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl2->Location = System::Drawing::Point(3, 3);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(705, 407);
			this->tabControl2->TabIndex = 5;
			// 
			// overviewTabPage
			// 
			this->overviewTabPage->BackColor = System::Drawing::SystemColors::Control;
			this->overviewTabPage->Controls->Add(this->label15);
			this->overviewTabPage->Controls->Add(this->label16);
			this->overviewTabPage->Controls->Add(this->exesModifiedNumberLabel);
			this->overviewTabPage->Controls->Add(this->exesUnmodifiedNumberLabel);
			this->overviewTabPage->Controls->Add(this->label23);
			this->overviewTabPage->Controls->Add(this->label12);
			this->overviewTabPage->Controls->Add(this->label14);
			this->overviewTabPage->Controls->Add(this->dllsModifiedNumberLabel);
			this->overviewTabPage->Controls->Add(this->dllsUnmodifiedNumberLabel);
			this->overviewTabPage->Controls->Add(this->label20);
			this->overviewTabPage->Controls->Add(this->label1);
			this->overviewTabPage->Controls->Add(this->label4);
			this->overviewTabPage->Controls->Add(this->pk3sModifiedNumberLabel);
			this->overviewTabPage->Controls->Add(this->pk3sUnmodifiedNumberLabel);
			this->overviewTabPage->Controls->Add(this->label3);
			this->overviewTabPage->Location = System::Drawing::Point(4, 22);
			this->overviewTabPage->Name = L"overviewTabPage";
			this->overviewTabPage->Padding = System::Windows::Forms::Padding(3);
			this->overviewTabPage->Size = System::Drawing::Size(697, 381);
			this->overviewTabPage->TabIndex = 0;
			this->overviewTabPage->Text = L"Overview";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(3, 135);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(33, 13);
			this->label15->TabIndex = 10;
			this->label15->Text = L"EXEs";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Green;
			this->label16->Location = System::Drawing::Point(27, 157);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(60, 13);
			this->label16->TabIndex = 14;
			this->label16->Text = L"Unmodified";
			// 
			// exesModifiedNumberLabel
			// 
			this->exesModifiedNumberLabel->AutoSize = true;
			this->exesModifiedNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->exesModifiedNumberLabel->Location = System::Drawing::Point(3, 180);
			this->exesModifiedNumberLabel->Name = L"exesModifiedNumberLabel";
			this->exesModifiedNumberLabel->Size = System::Drawing::Size(27, 13);
			this->exesModifiedNumberLabel->TabIndex = 11;
			this->exesModifiedNumberLabel->Text = L"0/4";
			// 
			// exesUnmodifiedNumberLabel
			// 
			this->exesUnmodifiedNumberLabel->AutoSize = true;
			this->exesUnmodifiedNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->exesUnmodifiedNumberLabel->Location = System::Drawing::Point(3, 157);
			this->exesUnmodifiedNumberLabel->Name = L"exesUnmodifiedNumberLabel";
			this->exesUnmodifiedNumberLabel->Size = System::Drawing::Size(27, 13);
			this->exesUnmodifiedNumberLabel->TabIndex = 13;
			this->exesUnmodifiedNumberLabel->Text = L"0/4";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::Color::Red;
			this->label23->Location = System::Drawing::Point(27, 180);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(47, 13);
			this->label23->TabIndex = 12;
			this->label23->Text = L"Modified";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(3, 69);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(32, 13);
			this->label12->TabIndex = 5;
			this->label12->Text = L"DLLs";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Green;
			this->label14->Location = System::Drawing::Point(27, 91);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(60, 13);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Unmodified";
			// 
			// dllsModifiedNumberLabel
			// 
			this->dllsModifiedNumberLabel->AutoSize = true;
			this->dllsModifiedNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dllsModifiedNumberLabel->Location = System::Drawing::Point(3, 114);
			this->dllsModifiedNumberLabel->Name = L"dllsModifiedNumberLabel";
			this->dllsModifiedNumberLabel->Size = System::Drawing::Size(27, 13);
			this->dllsModifiedNumberLabel->TabIndex = 6;
			this->dllsModifiedNumberLabel->Text = L"0/4";
			// 
			// dllsUnmodifiedNumberLabel
			// 
			this->dllsUnmodifiedNumberLabel->AutoSize = true;
			this->dllsUnmodifiedNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dllsUnmodifiedNumberLabel->Location = System::Drawing::Point(3, 91);
			this->dllsUnmodifiedNumberLabel->Name = L"dllsUnmodifiedNumberLabel";
			this->dllsUnmodifiedNumberLabel->Size = System::Drawing::Size(27, 13);
			this->dllsUnmodifiedNumberLabel->TabIndex = 8;
			this->dllsUnmodifiedNumberLabel->Text = L"0/4";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->ForeColor = System::Drawing::Color::Red;
			this->label20->Location = System::Drawing::Point(27, 114);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(47, 13);
			this->label20->TabIndex = 7;
			this->label20->Text = L"Modified";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"PK3s";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Green;
			this->label4->Location = System::Drawing::Point(27, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(60, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Unmodified";
			// 
			// pk3sModifiedNumberLabel
			// 
			this->pk3sModifiedNumberLabel->AutoSize = true;
			this->pk3sModifiedNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pk3sModifiedNumberLabel->Location = System::Drawing::Point(3, 48);
			this->pk3sModifiedNumberLabel->Name = L"pk3sModifiedNumberLabel";
			this->pk3sModifiedNumberLabel->Size = System::Drawing::Size(27, 13);
			this->pk3sModifiedNumberLabel->TabIndex = 1;
			this->pk3sModifiedNumberLabel->Text = L"0/4";
			// 
			// pk3sUnmodifiedNumberLabel
			// 
			this->pk3sUnmodifiedNumberLabel->AutoSize = true;
			this->pk3sUnmodifiedNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->pk3sUnmodifiedNumberLabel->Location = System::Drawing::Point(3, 25);
			this->pk3sUnmodifiedNumberLabel->Name = L"pk3sUnmodifiedNumberLabel";
			this->pk3sUnmodifiedNumberLabel->Size = System::Drawing::Size(27, 13);
			this->pk3sUnmodifiedNumberLabel->TabIndex = 3;
			this->pk3sUnmodifiedNumberLabel->Text = L"0/4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(27, 48);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Modified";
			// 
			// pk3sTabPage
			// 
			this->pk3sTabPage->BackColor = System::Drawing::SystemColors::Control;
			this->pk3sTabPage->Controls->Add(this->originalMD5Assets3TextBox);
			this->pk3sTabPage->Controls->Add(this->originalMD5Assets2TextBox);
			this->pk3sTabPage->Controls->Add(this->originalMD5Assets3Label);
			this->pk3sTabPage->Controls->Add(this->originalMD5Assets2Label);
			this->pk3sTabPage->Controls->Add(this->originalMD5Assets1Label);
			this->pk3sTabPage->Controls->Add(this->originalMD5Assets0Label);
			this->pk3sTabPage->Controls->Add(this->yourMD5Assets3Label);
			this->pk3sTabPage->Controls->Add(this->yourMD5Assets2Label);
			this->pk3sTabPage->Controls->Add(this->yourMD5Assets1Label);
			this->pk3sTabPage->Controls->Add(this->yourMD5Assets0Label);
			this->pk3sTabPage->Controls->Add(this->originalMD5Assets1TextBox);
			this->pk3sTabPage->Controls->Add(this->originalMD5Assets0TextBox);
			this->pk3sTabPage->Controls->Add(this->assets3StatusLabel);
			this->pk3sTabPage->Controls->Add(this->yourMD5Assets3TextBox);
			this->pk3sTabPage->Controls->Add(this->assets3Label);
			this->pk3sTabPage->Controls->Add(this->assets2StatusLabel);
			this->pk3sTabPage->Controls->Add(this->assets1StatusLabel);
			this->pk3sTabPage->Controls->Add(this->assets0StatusLabel);
			this->pk3sTabPage->Controls->Add(this->yourMD5Assets2TextBox);
			this->pk3sTabPage->Controls->Add(this->assets2Label);
			this->pk3sTabPage->Controls->Add(this->yourMD5Assets1TextBox);
			this->pk3sTabPage->Controls->Add(this->assets1Label);
			this->pk3sTabPage->Controls->Add(this->yourMD5Assets0TextBox);
			this->pk3sTabPage->Controls->Add(this->assets0Label);
			this->pk3sTabPage->ForeColor = System::Drawing::SystemColors::ControlText;
			this->pk3sTabPage->Location = System::Drawing::Point(4, 22);
			this->pk3sTabPage->Name = L"pk3sTabPage";
			this->pk3sTabPage->Padding = System::Windows::Forms::Padding(3);
			this->pk3sTabPage->Size = System::Drawing::Size(697, 381);
			this->pk3sTabPage->TabIndex = 1;
			this->pk3sTabPage->Text = L"PK3s";
			// 
			// originalMD5Assets3TextBox
			// 
			this->originalMD5Assets3TextBox->Location = System::Drawing::Point(424, 169);
			this->originalMD5Assets3TextBox->Name = L"originalMD5Assets3TextBox";
			this->originalMD5Assets3TextBox->ReadOnly = true;
			this->originalMD5Assets3TextBox->Size = System::Drawing::Size(268, 20);
			this->originalMD5Assets3TextBox->TabIndex = 71;
			// 
			// originalMD5Assets2TextBox
			// 
			this->originalMD5Assets2TextBox->Location = System::Drawing::Point(424, 121);
			this->originalMD5Assets2TextBox->Name = L"originalMD5Assets2TextBox";
			this->originalMD5Assets2TextBox->ReadOnly = true;
			this->originalMD5Assets2TextBox->Size = System::Drawing::Size(268, 20);
			this->originalMD5Assets2TextBox->TabIndex = 70;
			// 
			// originalMD5Assets3Label
			// 
			this->originalMD5Assets3Label->AutoSize = true;
			this->originalMD5Assets3Label->Location = System::Drawing::Point(347, 172);
			this->originalMD5Assets3Label->Name = L"originalMD5Assets3Label";
			this->originalMD5Assets3Label->Size = System::Drawing::Size(71, 13);
			this->originalMD5Assets3Label->TabIndex = 69;
			this->originalMD5Assets3Label->Text = L"Original MD5:";
			// 
			// originalMD5Assets2Label
			// 
			this->originalMD5Assets2Label->AutoSize = true;
			this->originalMD5Assets2Label->Location = System::Drawing::Point(347, 124);
			this->originalMD5Assets2Label->Name = L"originalMD5Assets2Label";
			this->originalMD5Assets2Label->Size = System::Drawing::Size(71, 13);
			this->originalMD5Assets2Label->TabIndex = 68;
			this->originalMD5Assets2Label->Text = L"Original MD5:";
			// 
			// originalMD5Assets1Label
			// 
			this->originalMD5Assets1Label->AutoSize = true;
			this->originalMD5Assets1Label->Location = System::Drawing::Point(347, 78);
			this->originalMD5Assets1Label->Name = L"originalMD5Assets1Label";
			this->originalMD5Assets1Label->Size = System::Drawing::Size(71, 13);
			this->originalMD5Assets1Label->TabIndex = 67;
			this->originalMD5Assets1Label->Text = L"Original MD5:";
			// 
			// originalMD5Assets0Label
			// 
			this->originalMD5Assets0Label->AutoSize = true;
			this->originalMD5Assets0Label->Location = System::Drawing::Point(347, 29);
			this->originalMD5Assets0Label->Name = L"originalMD5Assets0Label";
			this->originalMD5Assets0Label->Size = System::Drawing::Size(71, 13);
			this->originalMD5Assets0Label->TabIndex = 66;
			this->originalMD5Assets0Label->Text = L"Original MD5:";
			// 
			// yourMD5Assets3Label
			// 
			this->yourMD5Assets3Label->AutoSize = true;
			this->yourMD5Assets3Label->Location = System::Drawing::Point(3, 172);
			this->yourMD5Assets3Label->Name = L"yourMD5Assets3Label";
			this->yourMD5Assets3Label->Size = System::Drawing::Size(58, 13);
			this->yourMD5Assets3Label->TabIndex = 65;
			this->yourMD5Assets3Label->Text = L"Your MD5:";
			// 
			// yourMD5Assets2Label
			// 
			this->yourMD5Assets2Label->AutoSize = true;
			this->yourMD5Assets2Label->Location = System::Drawing::Point(3, 124);
			this->yourMD5Assets2Label->Name = L"yourMD5Assets2Label";
			this->yourMD5Assets2Label->Size = System::Drawing::Size(58, 13);
			this->yourMD5Assets2Label->TabIndex = 64;
			this->yourMD5Assets2Label->Text = L"Your MD5:";
			// 
			// yourMD5Assets1Label
			// 
			this->yourMD5Assets1Label->AutoSize = true;
			this->yourMD5Assets1Label->Location = System::Drawing::Point(3, 78);
			this->yourMD5Assets1Label->Name = L"yourMD5Assets1Label";
			this->yourMD5Assets1Label->Size = System::Drawing::Size(58, 13);
			this->yourMD5Assets1Label->TabIndex = 63;
			this->yourMD5Assets1Label->Text = L"Your MD5:";
			// 
			// yourMD5Assets0Label
			// 
			this->yourMD5Assets0Label->AutoSize = true;
			this->yourMD5Assets0Label->Location = System::Drawing::Point(3, 29);
			this->yourMD5Assets0Label->Name = L"yourMD5Assets0Label";
			this->yourMD5Assets0Label->Size = System::Drawing::Size(58, 13);
			this->yourMD5Assets0Label->TabIndex = 62;
			this->yourMD5Assets0Label->Text = L"Your MD5:";
			// 
			// originalMD5Assets1TextBox
			// 
			this->originalMD5Assets1TextBox->Location = System::Drawing::Point(424, 75);
			this->originalMD5Assets1TextBox->Name = L"originalMD5Assets1TextBox";
			this->originalMD5Assets1TextBox->ReadOnly = true;
			this->originalMD5Assets1TextBox->Size = System::Drawing::Size(268, 20);
			this->originalMD5Assets1TextBox->TabIndex = 61;
			// 
			// originalMD5Assets0TextBox
			// 
			this->originalMD5Assets0TextBox->Location = System::Drawing::Point(424, 26);
			this->originalMD5Assets0TextBox->Name = L"originalMD5Assets0TextBox";
			this->originalMD5Assets0TextBox->ReadOnly = true;
			this->originalMD5Assets0TextBox->Size = System::Drawing::Size(268, 20);
			this->originalMD5Assets0TextBox->TabIndex = 60;
			// 
			// assets3StatusLabel
			// 
			this->assets3StatusLabel->AutoSize = true;
			this->assets3StatusLabel->ForeColor = System::Drawing::Color::Orange;
			this->assets3StatusLabel->Location = System::Drawing::Point(74, 150);
			this->assets3StatusLabel->Name = L"assets3StatusLabel";
			this->assets3StatusLabel->Size = System::Drawing::Size(53, 13);
			this->assets3StatusLabel->TabIndex = 59;
			this->assets3StatusLabel->Text = L"Unknown";
			// 
			// yourMD5Assets3TextBox
			// 
			this->yourMD5Assets3TextBox->Location = System::Drawing::Point(67, 169);
			this->yourMD5Assets3TextBox->Name = L"yourMD5Assets3TextBox";
			this->yourMD5Assets3TextBox->ReadOnly = true;
			this->yourMD5Assets3TextBox->Size = System::Drawing::Size(268, 20);
			this->yourMD5Assets3TextBox->TabIndex = 58;
			// 
			// assets3Label
			// 
			this->assets3Label->AutoSize = true;
			this->assets3Label->Location = System::Drawing::Point(3, 150);
			this->assets3Label->Name = L"assets3Label";
			this->assets3Label->Size = System::Drawing::Size(65, 13);
			this->assets3Label->TabIndex = 57;
			this->assets3Label->Text = L"Assets3.pk3";
			// 
			// assets2StatusLabel
			// 
			this->assets2StatusLabel->AutoSize = true;
			this->assets2StatusLabel->ForeColor = System::Drawing::Color::Orange;
			this->assets2StatusLabel->Location = System::Drawing::Point(74, 101);
			this->assets2StatusLabel->Name = L"assets2StatusLabel";
			this->assets2StatusLabel->Size = System::Drawing::Size(53, 13);
			this->assets2StatusLabel->TabIndex = 56;
			this->assets2StatusLabel->Text = L"Unknown";
			// 
			// assets1StatusLabel
			// 
			this->assets1StatusLabel->AutoSize = true;
			this->assets1StatusLabel->ForeColor = System::Drawing::Color::Orange;
			this->assets1StatusLabel->Location = System::Drawing::Point(74, 52);
			this->assets1StatusLabel->Name = L"assets1StatusLabel";
			this->assets1StatusLabel->Size = System::Drawing::Size(53, 13);
			this->assets1StatusLabel->TabIndex = 55;
			this->assets1StatusLabel->Text = L"Unknown";
			// 
			// assets0StatusLabel
			// 
			this->assets0StatusLabel->AutoSize = true;
			this->assets0StatusLabel->ForeColor = System::Drawing::Color::Orange;
			this->assets0StatusLabel->Location = System::Drawing::Point(74, 3);
			this->assets0StatusLabel->Name = L"assets0StatusLabel";
			this->assets0StatusLabel->Size = System::Drawing::Size(53, 13);
			this->assets0StatusLabel->TabIndex = 54;
			this->assets0StatusLabel->Text = L"Unknown";
			// 
			// yourMD5Assets2TextBox
			// 
			this->yourMD5Assets2TextBox->Location = System::Drawing::Point(67, 121);
			this->yourMD5Assets2TextBox->Name = L"yourMD5Assets2TextBox";
			this->yourMD5Assets2TextBox->ReadOnly = true;
			this->yourMD5Assets2TextBox->Size = System::Drawing::Size(268, 20);
			this->yourMD5Assets2TextBox->TabIndex = 53;
			// 
			// assets2Label
			// 
			this->assets2Label->AutoSize = true;
			this->assets2Label->Location = System::Drawing::Point(3, 101);
			this->assets2Label->Name = L"assets2Label";
			this->assets2Label->Size = System::Drawing::Size(65, 13);
			this->assets2Label->TabIndex = 52;
			this->assets2Label->Text = L"Assets2.pk3";
			// 
			// yourMD5Assets1TextBox
			// 
			this->yourMD5Assets1TextBox->Location = System::Drawing::Point(67, 75);
			this->yourMD5Assets1TextBox->Name = L"yourMD5Assets1TextBox";
			this->yourMD5Assets1TextBox->ReadOnly = true;
			this->yourMD5Assets1TextBox->Size = System::Drawing::Size(268, 20);
			this->yourMD5Assets1TextBox->TabIndex = 51;
			// 
			// assets1Label
			// 
			this->assets1Label->AutoSize = true;
			this->assets1Label->Location = System::Drawing::Point(3, 52);
			this->assets1Label->Name = L"assets1Label";
			this->assets1Label->Size = System::Drawing::Size(65, 13);
			this->assets1Label->TabIndex = 50;
			this->assets1Label->Text = L"Assets1.pk3";
			// 
			// yourMD5Assets0TextBox
			// 
			this->yourMD5Assets0TextBox->Location = System::Drawing::Point(67, 26);
			this->yourMD5Assets0TextBox->Name = L"yourMD5Assets0TextBox";
			this->yourMD5Assets0TextBox->ReadOnly = true;
			this->yourMD5Assets0TextBox->Size = System::Drawing::Size(268, 20);
			this->yourMD5Assets0TextBox->TabIndex = 49;
			// 
			// assets0Label
			// 
			this->assets0Label->AutoSize = true;
			this->assets0Label->Location = System::Drawing::Point(3, 3);
			this->assets0Label->Name = L"assets0Label";
			this->assets0Label->Size = System::Drawing::Size(65, 13);
			this->assets0Label->TabIndex = 48;
			this->assets0Label->Text = L"Assets0.pk3";
			// 
			// dllsTabPage
			// 
			this->dllsTabPage->BackColor = System::Drawing::SystemColors::Control;
			this->dllsTabPage->Controls->Add(this->originalMD5OpenAL32TextBox);
			this->dllsTabPage->Controls->Add(this->originalMD5Jagamex86TextBox);
			this->dllsTabPage->Controls->Add(this->label2);
			this->dllsTabPage->Controls->Add(this->label5);
			this->dllsTabPage->Controls->Add(this->label6);
			this->dllsTabPage->Controls->Add(this->label7);
			this->dllsTabPage->Controls->Add(this->label8);
			this->dllsTabPage->Controls->Add(this->label9);
			this->dllsTabPage->Controls->Add(this->label10);
			this->dllsTabPage->Controls->Add(this->label11);
			this->dllsTabPage->Controls->Add(this->originalMD5IFC22TextBox);
			this->dllsTabPage->Controls->Add(this->originalMD5EaxManTextBox);
			this->dllsTabPage->Controls->Add(this->OpenAL32StatusLabel);
			this->dllsTabPage->Controls->Add(this->yourMD5OpenAL32TextBox);
			this->dllsTabPage->Controls->Add(this->label13);
			this->dllsTabPage->Controls->Add(this->jagamex86StatusLabel);
			this->dllsTabPage->Controls->Add(this->IFC22StatusLabel);
			this->dllsTabPage->Controls->Add(this->EaxManStatusLabel);
			this->dllsTabPage->Controls->Add(this->yourMD5Jagamex86TextBox);
			this->dllsTabPage->Controls->Add(this->label17);
			this->dllsTabPage->Controls->Add(this->yourMD5IFC22TextBox);
			this->dllsTabPage->Controls->Add(this->label18);
			this->dllsTabPage->Controls->Add(this->yourMD5EaxManTextBox);
			this->dllsTabPage->Controls->Add(this->label19);
			this->dllsTabPage->Location = System::Drawing::Point(4, 22);
			this->dllsTabPage->Name = L"dllsTabPage";
			this->dllsTabPage->Size = System::Drawing::Size(697, 381);
			this->dllsTabPage->TabIndex = 2;
			this->dllsTabPage->Text = L"DLLs";
			// 
			// originalMD5OpenAL32TextBox
			// 
			this->originalMD5OpenAL32TextBox->Location = System::Drawing::Point(424, 169);
			this->originalMD5OpenAL32TextBox->Name = L"originalMD5OpenAL32TextBox";
			this->originalMD5OpenAL32TextBox->ReadOnly = true;
			this->originalMD5OpenAL32TextBox->Size = System::Drawing::Size(268, 20);
			this->originalMD5OpenAL32TextBox->TabIndex = 95;
			// 
			// originalMD5Jagamex86TextBox
			// 
			this->originalMD5Jagamex86TextBox->Location = System::Drawing::Point(424, 121);
			this->originalMD5Jagamex86TextBox->Name = L"originalMD5Jagamex86TextBox";
			this->originalMD5Jagamex86TextBox->ReadOnly = true;
			this->originalMD5Jagamex86TextBox->Size = System::Drawing::Size(268, 20);
			this->originalMD5Jagamex86TextBox->TabIndex = 94;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(347, 172);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 93;
			this->label2->Text = L"Original MD5:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(347, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 92;
			this->label5->Text = L"Original MD5:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(347, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(71, 13);
			this->label6->TabIndex = 91;
			this->label6->Text = L"Original MD5:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(347, 29);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(71, 13);
			this->label7->TabIndex = 90;
			this->label7->Text = L"Original MD5:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(3, 172);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 13);
			this->label8->TabIndex = 89;
			this->label8->Text = L"Your MD5:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(3, 124);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 13);
			this->label9->TabIndex = 88;
			this->label9->Text = L"Your MD5:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(3, 78);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(58, 13);
			this->label10->TabIndex = 87;
			this->label10->Text = L"Your MD5:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 29);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(58, 13);
			this->label11->TabIndex = 86;
			this->label11->Text = L"Your MD5:";
			// 
			// originalMD5IFC22TextBox
			// 
			this->originalMD5IFC22TextBox->Location = System::Drawing::Point(424, 75);
			this->originalMD5IFC22TextBox->Name = L"originalMD5IFC22TextBox";
			this->originalMD5IFC22TextBox->ReadOnly = true;
			this->originalMD5IFC22TextBox->Size = System::Drawing::Size(268, 20);
			this->originalMD5IFC22TextBox->TabIndex = 85;
			// 
			// originalMD5EaxManTextBox
			// 
			this->originalMD5EaxManTextBox->Location = System::Drawing::Point(424, 26);
			this->originalMD5EaxManTextBox->Name = L"originalMD5EaxManTextBox";
			this->originalMD5EaxManTextBox->ReadOnly = true;
			this->originalMD5EaxManTextBox->Size = System::Drawing::Size(268, 20);
			this->originalMD5EaxManTextBox->TabIndex = 84;
			// 
			// OpenAL32StatusLabel
			// 
			this->OpenAL32StatusLabel->AutoSize = true;
			this->OpenAL32StatusLabel->ForeColor = System::Drawing::Color::Orange;
			this->OpenAL32StatusLabel->Location = System::Drawing::Point(74, 150);
			this->OpenAL32StatusLabel->Name = L"OpenAL32StatusLabel";
			this->OpenAL32StatusLabel->Size = System::Drawing::Size(53, 13);
			this->OpenAL32StatusLabel->TabIndex = 83;
			this->OpenAL32StatusLabel->Text = L"Unknown";
			// 
			// yourMD5OpenAL32TextBox
			// 
			this->yourMD5OpenAL32TextBox->Location = System::Drawing::Point(67, 169);
			this->yourMD5OpenAL32TextBox->Name = L"yourMD5OpenAL32TextBox";
			this->yourMD5OpenAL32TextBox->ReadOnly = true;
			this->yourMD5OpenAL32TextBox->Size = System::Drawing::Size(268, 20);
			this->yourMD5OpenAL32TextBox->TabIndex = 82;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(3, 150);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(71, 13);
			this->label13->TabIndex = 81;
			this->label13->Text = L"OpenAL32.dll";
			// 
			// jagamex86StatusLabel
			// 
			this->jagamex86StatusLabel->AutoSize = true;
			this->jagamex86StatusLabel->ForeColor = System::Drawing::Color::Orange;
			this->jagamex86StatusLabel->Location = System::Drawing::Point(74, 101);
			this->jagamex86StatusLabel->Name = L"jagamex86StatusLabel";
			this->jagamex86StatusLabel->Size = System::Drawing::Size(53, 13);
			this->jagamex86StatusLabel->TabIndex = 80;
			this->jagamex86StatusLabel->Text = L"Unknown";
			// 
			// IFC22StatusLabel
			// 
			this->IFC22StatusLabel->AutoSize = true;
			this->IFC22StatusLabel->ForeColor = System::Drawing::Color::Orange;
			this->IFC22StatusLabel->Location = System::Drawing::Point(74, 52);
			this->IFC22StatusLabel->Name = L"IFC22StatusLabel";
			this->IFC22StatusLabel->Size = System::Drawing::Size(53, 13);
			this->IFC22StatusLabel->TabIndex = 79;
			this->IFC22StatusLabel->Text = L"Unknown";
			// 
			// EaxManStatusLabel
			// 
			this->EaxManStatusLabel->AutoSize = true;
			this->EaxManStatusLabel->ForeColor = System::Drawing::Color::Orange;
			this->EaxManStatusLabel->Location = System::Drawing::Point(74, 3);
			this->EaxManStatusLabel->Name = L"EaxManStatusLabel";
			this->EaxManStatusLabel->Size = System::Drawing::Size(53, 13);
			this->EaxManStatusLabel->TabIndex = 78;
			this->EaxManStatusLabel->Text = L"Unknown";
			// 
			// yourMD5Jagamex86TextBox
			// 
			this->yourMD5Jagamex86TextBox->Location = System::Drawing::Point(67, 121);
			this->yourMD5Jagamex86TextBox->Name = L"yourMD5Jagamex86TextBox";
			this->yourMD5Jagamex86TextBox->ReadOnly = true;
			this->yourMD5Jagamex86TextBox->Size = System::Drawing::Size(268, 20);
			this->yourMD5Jagamex86TextBox->TabIndex = 77;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(3, 101);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(71, 13);
			this->label17->TabIndex = 76;
			this->label17->Text = L"jagamex86.dll";
			// 
			// yourMD5IFC22TextBox
			// 
			this->yourMD5IFC22TextBox->Location = System::Drawing::Point(67, 75);
			this->yourMD5IFC22TextBox->Name = L"yourMD5IFC22TextBox";
			this->yourMD5IFC22TextBox->ReadOnly = true;
			this->yourMD5IFC22TextBox->Size = System::Drawing::Size(268, 20);
			this->yourMD5IFC22TextBox->TabIndex = 75;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(3, 52);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(48, 13);
			this->label18->TabIndex = 74;
			this->label18->Text = L"IFC22.dll";
			// 
			// yourMD5EaxManTextBox
			// 
			this->yourMD5EaxManTextBox->Location = System::Drawing::Point(67, 26);
			this->yourMD5EaxManTextBox->Name = L"yourMD5EaxManTextBox";
			this->yourMD5EaxManTextBox->ReadOnly = true;
			this->yourMD5EaxManTextBox->Size = System::Drawing::Size(268, 20);
			this->yourMD5EaxManTextBox->TabIndex = 73;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(3, 3);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(59, 13);
			this->label19->TabIndex = 72;
			this->label19->Text = L"EaxMan.dll";
			// 
			// exesTabPage
			// 
			this->exesTabPage->BackColor = System::Drawing::SystemColors::Control;
			this->exesTabPage->Controls->Add(this->label21);
			this->exesTabPage->Controls->Add(this->label22);
			this->exesTabPage->Controls->Add(this->label24);
			this->exesTabPage->Controls->Add(this->label25);
			this->exesTabPage->Controls->Add(this->originalMD5jaspTextBox);
			this->exesTabPage->Controls->Add(this->originalMD5jampTextBox);
			this->exesTabPage->Controls->Add(this->jaspStatusLabel);
			this->exesTabPage->Controls->Add(this->jampStatusLabel);
			this->exesTabPage->Controls->Add(this->yourMD5jaspTextBox);
			this->exesTabPage->Controls->Add(this->label28);
			this->exesTabPage->Controls->Add(this->yourMD5jampTextBox);
			this->exesTabPage->Controls->Add(this->label29);
			this->exesTabPage->Location = System::Drawing::Point(4, 22);
			this->exesTabPage->Name = L"exesTabPage";
			this->exesTabPage->Size = System::Drawing::Size(697, 381);
			this->exesTabPage->TabIndex = 3;
			this->exesTabPage->Text = L"EXEs";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(347, 78);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(71, 13);
			this->label21->TabIndex = 103;
			this->label21->Text = L"Original MD5:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(347, 29);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(71, 13);
			this->label22->TabIndex = 102;
			this->label22->Text = L"Original MD5:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(3, 78);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(58, 13);
			this->label24->TabIndex = 101;
			this->label24->Text = L"Your MD5:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(3, 29);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(58, 13);
			this->label25->TabIndex = 100;
			this->label25->Text = L"Your MD5:";
			// 
			// originalMD5jaspTextBox
			// 
			this->originalMD5jaspTextBox->Location = System::Drawing::Point(424, 75);
			this->originalMD5jaspTextBox->Name = L"originalMD5jaspTextBox";
			this->originalMD5jaspTextBox->ReadOnly = true;
			this->originalMD5jaspTextBox->Size = System::Drawing::Size(268, 20);
			this->originalMD5jaspTextBox->TabIndex = 99;
			// 
			// originalMD5jampTextBox
			// 
			this->originalMD5jampTextBox->Location = System::Drawing::Point(424, 26);
			this->originalMD5jampTextBox->Name = L"originalMD5jampTextBox";
			this->originalMD5jampTextBox->ReadOnly = true;
			this->originalMD5jampTextBox->Size = System::Drawing::Size(268, 20);
			this->originalMD5jampTextBox->TabIndex = 98;
			// 
			// jaspStatusLabel
			// 
			this->jaspStatusLabel->AutoSize = true;
			this->jaspStatusLabel->ForeColor = System::Drawing::Color::Orange;
			this->jaspStatusLabel->Location = System::Drawing::Point(74, 52);
			this->jaspStatusLabel->Name = L"jaspStatusLabel";
			this->jaspStatusLabel->Size = System::Drawing::Size(53, 13);
			this->jaspStatusLabel->TabIndex = 97;
			this->jaspStatusLabel->Text = L"Unknown";
			// 
			// jampStatusLabel
			// 
			this->jampStatusLabel->AutoSize = true;
			this->jampStatusLabel->ForeColor = System::Drawing::Color::Orange;
			this->jampStatusLabel->Location = System::Drawing::Point(74, 3);
			this->jampStatusLabel->Name = L"jampStatusLabel";
			this->jampStatusLabel->Size = System::Drawing::Size(53, 13);
			this->jampStatusLabel->TabIndex = 96;
			this->jampStatusLabel->Text = L"Unknown";
			// 
			// yourMD5jaspTextBox
			// 
			this->yourMD5jaspTextBox->Location = System::Drawing::Point(67, 75);
			this->yourMD5jaspTextBox->Name = L"yourMD5jaspTextBox";
			this->yourMD5jaspTextBox->ReadOnly = true;
			this->yourMD5jaspTextBox->Size = System::Drawing::Size(268, 20);
			this->yourMD5jaspTextBox->TabIndex = 95;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(3, 52);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(46, 13);
			this->label28->TabIndex = 94;
			this->label28->Text = L"jasp.exe";
			// 
			// yourMD5jampTextBox
			// 
			this->yourMD5jampTextBox->Location = System::Drawing::Point(67, 26);
			this->yourMD5jampTextBox->Name = L"yourMD5jampTextBox";
			this->yourMD5jampTextBox->ReadOnly = true;
			this->yourMD5jampTextBox->Size = System::Drawing::Size(268, 20);
			this->yourMD5jampTextBox->TabIndex = 93;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(3, 3);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(49, 13);
			this->label29->TabIndex = 92;
			this->label29->Text = L"jamp.exe";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(719, 464);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->navigationBar);
			this->Name = L"Main";
			this->Text = L"JK3 MD5 1.0";
			this->navigationBar->ResumeLayout(false);
			this->navigationBar->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->checkFilesTabPage->ResumeLayout(false);
			this->checkFilesTabPage->PerformLayout();
			this->resultsTabPage->ResumeLayout(false);
			this->tabControl2->ResumeLayout(false);
			this->overviewTabPage->ResumeLayout(false);
			this->overviewTabPage->PerformLayout();
			this->pk3sTabPage->ResumeLayout(false);
			this->pk3sTabPage->PerformLayout();
			this->dllsTabPage->ResumeLayout(false);
			this->dllsTabPage->PerformLayout();
			this->exesTabPage->ResumeLayout(false);
			this->exesTabPage->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	protected: String^ GetMD5HashFromFile(String^ fileName)
    {
		FileStream^ fs = gcnew FileStream( fileName,FileMode::Open );
		Stream^ stream = fs;
		String^ hash;
		try
		{	
			hash = BitConverter::ToString( MD5::Create()->ComputeHash( stream ) );
		}
		finally
		{
			if ( fs )
				delete( IDisposable^ )( fs );
		}
        return hash;
    }
	private: System::Void aboutLabel_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				About^ about = gcnew About();
				about->Show();
			 }
	private: System::Void settingsLabel_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 Settings^ settings = gcnew Settings();
				 settings->Show();
			 }

	private: System::Void checkButton_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				String^ path = L"%AppData%\\JK3MD5\\Settings\\";
				 progressBar1->Visible = true;

				  StreamReader^ configFileRead = File::OpenText( path+L"JK3MD5_Config.dat" );
				 String^ gameData = configFileRead->ReadLine();


				 String^ assets0OriginalHash = L"E1-7E-E7-14-CE-96-32-F4-01-96-0A-BB-1B-22-FA-4A";
				String^ assets1OriginalHash = L"3F-47-00-6D-DE-61-F1-71-76-96-66-F3-10-65-A3-4C";
				String^ assets2OriginalHash = L"96-1A-D3-72-C3-CD-73-07-5D-70-BA-71-A4-97-B8-9E";
				String^ assets3OriginalHash = L"71-C2-ED-F5-A3-01-35-D4-AA-92-1B-F6-25-99-46-EE";

				String^ EaxManOriginalHash = L"FD-17-38-F1-61-A8-9B-9C-D9-3D-BD-BB-EF-B5-C6-69";
				String^ IFC22OriginalHash = L"AA-57-C6-DD-0B-F8-CE-B8-B7-1C-87-3B-6B-7C-EA-3F";
				String^ jagamex86OriginalHash = L"44-8D-9B-19-FC-1C-35-9C-CA-3A-A7-4F-D2-3D-76-C9";
				String^ OpenAL32OriginalHash = L"9A-20-4F-19-9F-6F-1C-2F-3A-F1-5F-F2-4A-A3-42-42";

				String^ jampOriginalHash = L"89-6F-58-04-93-4C-F4-C1-D5-75-0A-0B-82-EA-4C-5E";
				String^ jaspOriginalHash = L"1D-55-A7-14-2E-88-3D-C4-D5-4C-FE-87-BE-98-7C-66";

				int pk3sUnmodifiedNumber = 0;
				int pk3sModifiedNumber = 0;

				int dllsUnmodifiedNumber = 0;
				int dllsModifiedNumber = 0;

				int exesUnmodifiedNumber = 0;
				int exesModifiedNumber = 0;

				originalMD5Assets0TextBox->Text = assets0OriginalHash;
				originalMD5Assets1TextBox->Text = assets1OriginalHash;
				originalMD5Assets2TextBox->Text = assets2OriginalHash;
				originalMD5Assets3TextBox->Text = assets3OriginalHash;

				originalMD5EaxManTextBox->Text = EaxManOriginalHash;
				originalMD5IFC22TextBox->Text = IFC22OriginalHash;
				originalMD5Jagamex86TextBox->Text = jagamex86OriginalHash;
				originalMD5OpenAL32TextBox->Text = OpenAL32OriginalHash;

				originalMD5jampTextBox->Text = jampOriginalHash;
				originalMD5jaspTextBox->Text = jaspOriginalHash;
				/*
				START PK3 MD5 CHECK
				*/
				{
					if (!File::Exists( gameData+L"/base/assets0.pk3" ) )
					{
						assets0StatusLabel->Text = "File not found";
						assets0StatusLabel->ForeColor = Color::Red;
					}
					else
					{
						yourMD5Assets0TextBox->Text = GetMD5HashFromFile(gameData+L"/base/assets0.pk3" );
						if ( yourMD5Assets0TextBox->Text == assets0OriginalHash )
						{
							assets0StatusLabel->Text = "Unmodified";
							assets0StatusLabel->ForeColor = Color::Green;
							pk3sUnmodifiedNumber++;
						}
						else
						{
							assets0StatusLabel->Text = "Modified";
							assets0StatusLabel->ForeColor = Color::Red;
							pk3sModifiedNumber++;
						}
					}
					progressBar1->Value += 10;
					if (!File::Exists( gameData+L"/base/assets1.pk3" ) )
					{
						assets1StatusLabel->Text = "File not found";
						assets1StatusLabel->ForeColor = Color::Red;
					}
					else
					{
						yourMD5Assets1TextBox->Text = GetMD5HashFromFile(gameData+L"/base/assets1.pk3" );
						if ( yourMD5Assets1TextBox->Text == assets1OriginalHash )
						{
							assets1StatusLabel->Text = "Unmodified";
							assets1StatusLabel->ForeColor = Color::Green;
							pk3sUnmodifiedNumber++;
						}
						else
						{
							assets1StatusLabel->Text = "Modified";
							assets1StatusLabel->ForeColor = Color::Red;
							pk3sModifiedNumber++;
						}
					}
					progressBar1->Value += 10;
					if (!File::Exists( gameData+L"/base/assets2.pk3" ) )
					{
						assets2StatusLabel->Text = "File not found";
						assets2StatusLabel->ForeColor = Color::Red;
					}
					else
					{
						yourMD5Assets2TextBox->Text = GetMD5HashFromFile(gameData+L"/base/assets2.pk3" );
						if ( yourMD5Assets2TextBox->Text == assets2OriginalHash )
						{
							assets2StatusLabel->Text = "Unmodified";
							assets2StatusLabel->ForeColor = Color::Green;
							pk3sUnmodifiedNumber++;
						}
						else
						{
							assets2StatusLabel->Text = "Modified";
							assets2StatusLabel->ForeColor = Color::Red;
							pk3sModifiedNumber++;
						}
					}
					progressBar1->Value += 10;
					if (!File::Exists( gameData+L"/base/assets3.pk3" ) )
					{
						assets3StatusLabel->Text = "File not found";
						assets3StatusLabel->ForeColor = Color::Red;
					}
					else
					{
						yourMD5Assets3TextBox->Text = GetMD5HashFromFile(gameData+L"/base/assets3.pk3" );
						if ( yourMD5Assets3TextBox->Text == assets3OriginalHash )
						{
							assets3StatusLabel->Text = "Unmodified";
							assets3StatusLabel->ForeColor = Color::Green;
							pk3sUnmodifiedNumber++;
						}
						else
						{
							assets3StatusLabel->Text = "Modified";
							assets3StatusLabel->ForeColor = Color::Red;
							pk3sModifiedNumber++;
						}
					}
					progressBar1->Value += 10;
				}
				pk3sUnmodifiedNumberLabel->Text = pk3sUnmodifiedNumber.ToString()+L"/4";
				pk3sModifiedNumberLabel->Text = pk3sModifiedNumber.ToString()+L"/4";
				/*
				END PK3 MD5 CHECK
				*/

				/*
				START DLL MD5 CHECK
				*/
				{
					if (!File::Exists( gameData+L"/EaxMan.dll" ) )
					{
						EaxManStatusLabel->Text = "File not found";
						EaxManStatusLabel->ForeColor = Color::Red;
					}
					else
					{
						yourMD5EaxManTextBox->Text = GetMD5HashFromFile(gameData+L"/EaxMan.dll" );
						if ( yourMD5EaxManTextBox->Text == EaxManOriginalHash )
						{
							EaxManStatusLabel->Text = "Unmodified";
							EaxManStatusLabel->ForeColor = Color::Green;
							dllsUnmodifiedNumber++;
						}
						else
						{
							EaxManStatusLabel->Text = "Modified";
							EaxManStatusLabel->ForeColor = Color::Red;
							dllsModifiedNumber++;
						}
					}
					progressBar1->Value += 10;
					if (!File::Exists( gameData+L"/IFC22.dll" ) )
					{
						IFC22StatusLabel->Text = "File not found";
						IFC22StatusLabel->ForeColor = Color::Red;
					}
					else
					{
						yourMD5IFC22TextBox->Text = GetMD5HashFromFile(gameData+L"/IFC22.dll" );
						if ( yourMD5IFC22TextBox->Text == IFC22OriginalHash )
						{
							IFC22StatusLabel->Text = "Unmodified";
							IFC22StatusLabel->ForeColor = Color::Green;
							dllsUnmodifiedNumber++;
						}
						else
						{
							IFC22StatusLabel->Text = "Modified";
							IFC22StatusLabel->ForeColor = Color::Red;
							dllsModifiedNumber++;
						}
					}
					progressBar1->Value += 10;
					if (!File::Exists( gameData+L"/jagamex86.dll" ) )
					{
						jagamex86StatusLabel->Text = "File not found";
						jagamex86StatusLabel->ForeColor = Color::Red;
					}
					else
					{
						yourMD5Jagamex86TextBox->Text = GetMD5HashFromFile(gameData+L"/jagamex86.dll" );
						if ( yourMD5Jagamex86TextBox->Text == jagamex86OriginalHash )
						{
							jagamex86StatusLabel->Text = "Unmodified";
							jagamex86StatusLabel->ForeColor = Color::Green;
							dllsUnmodifiedNumber++;
						}
						else
						{
							jagamex86StatusLabel->Text = "Modified";
							jagamex86StatusLabel->ForeColor = Color::Red;
							dllsModifiedNumber++;
						}
					}
					progressBar1->Value += 10;
					if (!File::Exists( gameData+L"/OpenAL32.dll" ) )
					{
						OpenAL32StatusLabel->Text = "File not found";
						OpenAL32StatusLabel->ForeColor = Color::Red;
					}
					else
					{
						yourMD5OpenAL32TextBox->Text = GetMD5HashFromFile(gameData+L"/OpenAL32.dll" );
						if ( yourMD5OpenAL32TextBox->Text == OpenAL32OriginalHash )
						{
							OpenAL32StatusLabel->Text = "Unmodified";
							OpenAL32StatusLabel->ForeColor = Color::Green;
							dllsUnmodifiedNumber++;
						}
						else
						{
							OpenAL32StatusLabel->Text = "Modified";
							OpenAL32StatusLabel->ForeColor = Color::Red;
							dllsModifiedNumber++;
						}
					}
					progressBar1->Value += 10;
				}
				dllsUnmodifiedNumberLabel->Text = dllsUnmodifiedNumber.ToString()+L"/4";
				dllsModifiedNumberLabel->Text = dllsModifiedNumber.ToString()+L"/4";
				/*
				END DLL MD5 CHECK
				*/

				/*
				START EXE MD5 CHECK
				*/
				try
				{
					if (!File::Exists( gameData+L"/jamp.exe" ) )
					{
						jampStatusLabel->Text = "File not found";
						jampStatusLabel->ForeColor = Color::Red;
					}
					else
					{
						yourMD5jampTextBox->Text = GetMD5HashFromFile(gameData+L"/jamp.exe" );
						if ( yourMD5jampTextBox->Text == jampOriginalHash )
						{
							jampStatusLabel->Text = "Unmodified";
							jampStatusLabel->ForeColor = Color::Green;
							exesUnmodifiedNumber++;
						}
						else
						{
							jampStatusLabel->Text = "Modified";
							jampStatusLabel->ForeColor = Color::Red;
							exesModifiedNumber++;
						}
					}
					progressBar1->Value += 10;
					if (!File::Exists( gameData+L"/jasp.exe" ) )
					{
						jaspStatusLabel->Text = "File not found";
						jaspStatusLabel->ForeColor = Color::Red;
					}
					else
					{
						yourMD5jaspTextBox->Text = GetMD5HashFromFile(gameData+L"/jasp.exe" );
						if ( yourMD5jaspTextBox->Text == jaspOriginalHash )
						{
							jaspStatusLabel->Text = "Unmodified";
							jaspStatusLabel->ForeColor = Color::Green;
							exesUnmodifiedNumber++;
						}
						else
						{
							jaspStatusLabel->Text = "Modified";
							jaspStatusLabel->ForeColor = Color::Red;
							exesModifiedNumber++;
						}
					}
					progressBar1->Value += 10;
				}
				finally
				{
					if ( configFileRead )
						delete ( IDisposable^ )( configFileRead );
				}
				exesUnmodifiedNumberLabel->Text = exesUnmodifiedNumber.ToString()+L"/2";
				exesModifiedNumberLabel->Text = exesModifiedNumber.ToString()+L"/2";
				/*
				END EXE MD5 CHECK
				*/

				MD5Checked = true;

				tabControl1->SelectTab( "resultsTabPage" );
				tabControl2->SelectTab( "overviewTabPage" );
			 }
private: System::Void resultsTabPage_Enter(System::Object^  sender, System::EventArgs^  e)
		 {
			  if ( !MD5Checked )
			 {
				 MessageBox::Show( "You must click the button to check your files before looking at the results!", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk );
				 tabControl1->SelectTab( "checkFilesTabPage" );
				 return;
			 }
		 }
};
}

