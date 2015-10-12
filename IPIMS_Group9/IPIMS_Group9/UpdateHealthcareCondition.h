//#include "ScheduleAppointment.h"

#pragma once

namespace IPIMS_Group9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for UpdateHealthcareCondition
	/// </summary>
	public ref class UpdateHealthcareCondition : public System::Windows::Forms::Form
	{

	public:
		UpdateHealthcareCondition(void)
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
		~UpdateHealthcareCondition()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::CheckBox^  checkBoxEmergencyAlert;
	private: System::Windows::Forms::Label^  labelSymptoms;
	private: System::Windows::Forms::TextBox^  textBoxSymptoms;
	private: System::Windows::Forms::Label^  labelUpdateHealthcareConditions;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonSave;
	private: System::Windows::Forms::Button^  buttonClear;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::MenuStrip^  menuStrip;
	private: System::Windows::Forms::ToolStripMenuItem^  patientServicesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  searchForPatientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  updatePatientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewAppointmentsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  scheduleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ePrescriptionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  printToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  printExistingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  searchForPatientsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  reportsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  searchRecordsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editLabRequestToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editLabRecordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editProfileInformationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  report2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  analysisOfTypeOfPatientsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  analysisOfPatientPopulationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logoutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editProfileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logoutToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  logoutOfIPIMSToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^  comboBoxDoctorSelection;
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
			this->checkBoxEmergencyAlert = (gcnew System::Windows::Forms::CheckBox());
			this->labelSymptoms = (gcnew System::Windows::Forms::Label());
			this->textBoxSymptoms = (gcnew System::Windows::Forms::TextBox());
			this->labelUpdateHealthcareConditions = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->patientServicesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchForPatientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updatePatientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewAppointmentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scheduleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ePrescriptionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printExistingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchForPatientsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchRecordsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editLabRequestToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editLabRecordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editProfileInformationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->report2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->analysisOfTypeOfPatientsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->analysisOfPatientPopulationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logoutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editProfileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logoutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logoutOfIPIMSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comboBoxDoctorSelection = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// checkBoxEmergencyAlert
			// 
			this->checkBoxEmergencyAlert->AccessibleRole = System::Windows::Forms::AccessibleRole::Alert;
			this->checkBoxEmergencyAlert->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxEmergencyAlert->ForeColor = System::Drawing::Color::Red;
			this->checkBoxEmergencyAlert->Location = System::Drawing::Point(441, 415);
			this->checkBoxEmergencyAlert->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxEmergencyAlert->Name = L"checkBoxEmergencyAlert";
			this->checkBoxEmergencyAlert->Size = System::Drawing::Size(138, 31);
			this->checkBoxEmergencyAlert->TabIndex = 1;
			this->checkBoxEmergencyAlert->Text = L"Emergency Alert";
			this->checkBoxEmergencyAlert->UseVisualStyleBackColor = true;
			this->checkBoxEmergencyAlert->CheckedChanged += gcnew System::EventHandler(this, &UpdateHealthcareCondition::checkBoxEmergencyAlert_CheckedChanged);
			// 
			// labelSymptoms
			// 
			this->labelSymptoms->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->labelSymptoms->Font = (gcnew System::Drawing::Font(L"Arial", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelSymptoms->Location = System::Drawing::Point(11, 77);
			this->labelSymptoms->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelSymptoms->Name = L"labelSymptoms";
			this->labelSymptoms->Size = System::Drawing::Size(75, 22);
			this->labelSymptoms->TabIndex = 2;
			this->labelSymptoms->Text = L"Symptoms:";
			// 
			// textBoxSymptoms
			// 
			this->textBoxSymptoms->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxSymptoms->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxSymptoms->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBoxSymptoms->Location = System::Drawing::Point(90, 77);
			this->textBoxSymptoms->Margin = System::Windows::Forms::Padding(2);
			this->textBoxSymptoms->Multiline = true;
			this->textBoxSymptoms->Name = L"textBoxSymptoms";
			this->textBoxSymptoms->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBoxSymptoms->Size = System::Drawing::Size(489, 172);
			this->textBoxSymptoms->TabIndex = 7;
			this->textBoxSymptoms->Text = L"Symptoms";
			this->textBoxSymptoms->TextChanged += gcnew System::EventHandler(this, &UpdateHealthcareCondition::textBoxSymptoms_TextChanged);
			// 
			// labelUpdateHealthcareConditions
			// 
			this->labelUpdateHealthcareConditions->AutoSize = true;
			this->labelUpdateHealthcareConditions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelUpdateHealthcareConditions->Location = System::Drawing::Point(12, 30);
			this->labelUpdateHealthcareConditions->Name = L"labelUpdateHealthcareConditions";
			this->labelUpdateHealthcareConditions->Size = System::Drawing::Size(412, 36);
			this->labelUpdateHealthcareConditions->TabIndex = 8;
			this->labelUpdateHealthcareConditions->Text = L"Update Healthcare Conditions";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(409, 156);
			this->label1->TabIndex = 9;
			this->label1->Text = L"  = Suspected heart attack or stroke\r\n  = Sudden or extreme difficulty breathing\r"
				L"\n  = Sudden loss of consciousness\r\n  = Severe bleeding\r\n  = Severe abdominal pai"
				L"n\r\n  = Injuries to one or both eyes";
			// 
			// buttonSave
			// 
			this->buttonSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSave->Location = System::Drawing::Point(463, 451);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(115, 35);
			this->buttonSave->TabIndex = 19;
			this->buttonSave->Text = L"Save";
			this->buttonSave->UseVisualStyleBackColor = true;
			this->buttonSave->Click += gcnew System::EventHandler(this, &UpdateHealthcareCondition::buttonSave_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClear->Location = System::Drawing::Point(463, 254);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(115, 35);
			this->buttonClear->TabIndex = 20;
			this->buttonClear->Text = L"Clear";
			this->buttonClear->UseVisualStyleBackColor = true;
			this->buttonClear->Click += gcnew System::EventHandler(this, &UpdateHealthcareCondition::buttonClear_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 291);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(424, 195);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Emergency Alert Conditions Include:";
			// 
			// menuStrip
			// 
			this->menuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->patientServicesToolStripMenuItem,
					this->reportsToolStripMenuItem, this->toolsToolStripMenuItem, this->logoutToolStripMenuItem, this->logoutToolStripMenuItem1
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(590, 24);
			this->menuStrip->TabIndex = 32;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// patientServicesToolStripMenuItem
			// 
			this->patientServicesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->searchForPatientToolStripMenuItem,
					this->updatePatientToolStripMenuItem, this->viewAppointmentsToolStripMenuItem, this->ePrescriptionToolStripMenuItem, this->searchForPatientsToolStripMenuItem
			});
			this->patientServicesToolStripMenuItem->Name = L"patientServicesToolStripMenuItem";
			this->patientServicesToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->patientServicesToolStripMenuItem->Text = L"Patient Services";
			// 
			// searchForPatientToolStripMenuItem
			// 
			this->searchForPatientToolStripMenuItem->Name = L"searchForPatientToolStripMenuItem";
			this->searchForPatientToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->searchForPatientToolStripMenuItem->Text = L"Emergency Alerts";
			// 
			// updatePatientToolStripMenuItem
			// 
			this->updatePatientToolStripMenuItem->Name = L"updatePatientToolStripMenuItem";
			this->updatePatientToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->updatePatientToolStripMenuItem->Text = L"Update Patient Healthcare";
			// 
			// viewAppointmentsToolStripMenuItem
			// 
			this->viewAppointmentsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->viewToolStripMenuItem1,
					this->scheduleToolStripMenuItem
			});
			this->viewAppointmentsToolStripMenuItem->Name = L"viewAppointmentsToolStripMenuItem";
			this->viewAppointmentsToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->viewAppointmentsToolStripMenuItem->Text = L"Appointments";
			// 
			// viewToolStripMenuItem1
			// 
			this->viewToolStripMenuItem1->Name = L"viewToolStripMenuItem1";
			this->viewToolStripMenuItem1->Size = System::Drawing::Size(122, 22);
			this->viewToolStripMenuItem1->Text = L"View";
			// 
			// scheduleToolStripMenuItem
			// 
			this->scheduleToolStripMenuItem->Name = L"scheduleToolStripMenuItem";
			this->scheduleToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->scheduleToolStripMenuItem->Text = L"Schedule";
			// 
			// ePrescriptionToolStripMenuItem
			// 
			this->ePrescriptionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->viewToolStripMenuItem,
					this->printToolStripMenuItem, this->printExistingToolStripMenuItem
			});
			this->ePrescriptionToolStripMenuItem->Name = L"ePrescriptionToolStripMenuItem";
			this->ePrescriptionToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->ePrescriptionToolStripMenuItem->Text = L"E-Prescription (Medicine/Lab)";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->viewToolStripMenuItem->Text = L"Send New";
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->printToolStripMenuItem->Text = L"View Existing";
			// 
			// printExistingToolStripMenuItem
			// 
			this->printExistingToolStripMenuItem->Name = L"printExistingToolStripMenuItem";
			this->printExistingToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->printExistingToolStripMenuItem->Text = L"Print Existing";
			// 
			// searchForPatientsToolStripMenuItem
			// 
			this->searchForPatientsToolStripMenuItem->Name = L"searchForPatientsToolStripMenuItem";
			this->searchForPatientsToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->searchForPatientsToolStripMenuItem->Text = L"Search for Patients";
			// 
			// reportsToolStripMenuItem
			// 
			this->reportsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->searchRecordsToolStripMenuItem,
					this->editLabRequestToolStripMenuItem, this->editLabRecordToolStripMenuItem
			});
			this->reportsToolStripMenuItem->Name = L"reportsToolStripMenuItem";
			this->reportsToolStripMenuItem->Size = System::Drawing::Size(83, 20);
			this->reportsToolStripMenuItem->Text = L"Lab Records";
			// 
			// searchRecordsToolStripMenuItem
			// 
			this->searchRecordsToolStripMenuItem->Name = L"searchRecordsToolStripMenuItem";
			this->searchRecordsToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->searchRecordsToolStripMenuItem->Text = L"Add Lab Record";
			// 
			// editLabRequestToolStripMenuItem
			// 
			this->editLabRequestToolStripMenuItem->Name = L"editLabRequestToolStripMenuItem";
			this->editLabRequestToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->editLabRequestToolStripMenuItem->Text = L"View Lab Record";
			// 
			// editLabRecordToolStripMenuItem
			// 
			this->editLabRecordToolStripMenuItem->Name = L"editLabRecordToolStripMenuItem";
			this->editLabRecordToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->editLabRecordToolStripMenuItem->Text = L"Edit Lab Record";
			// 
			// toolsToolStripMenuItem
			// 
			this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->editProfileInformationToolStripMenuItem,
					this->report2ToolStripMenuItem, this->analysisOfTypeOfPatientsToolStripMenuItem, this->analysisOfPatientPopulationToolStripMenuItem
			});
			this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			this->toolsToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->toolsToolStripMenuItem->Text = L"Reporting";
			// 
			// editProfileInformationToolStripMenuItem
			// 
			this->editProfileInformationToolStripMenuItem->Name = L"editProfileInformationToolStripMenuItem";
			this->editProfileInformationToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->editProfileInformationToolStripMenuItem->Text = L"Analysis of health outcomes";
			// 
			// report2ToolStripMenuItem
			// 
			this->report2ToolStripMenuItem->Name = L"report2ToolStripMenuItem";
			this->report2ToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->report2ToolStripMenuItem->Text = L"Tracking of the admission rates";
			// 
			// analysisOfTypeOfPatientsToolStripMenuItem
			// 
			this->analysisOfTypeOfPatientsToolStripMenuItem->Name = L"analysisOfTypeOfPatientsToolStripMenuItem";
			this->analysisOfTypeOfPatientsToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->analysisOfTypeOfPatientsToolStripMenuItem->Text = L"Analysis of type of patients";
			// 
			// analysisOfPatientPopulationToolStripMenuItem
			// 
			this->analysisOfPatientPopulationToolStripMenuItem->Name = L"analysisOfPatientPopulationToolStripMenuItem";
			this->analysisOfPatientPopulationToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->analysisOfPatientPopulationToolStripMenuItem->Text = L"Analysis of patient population";
			// 
			// logoutToolStripMenuItem
			// 
			this->logoutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->editProfileToolStripMenuItem });
			this->logoutToolStripMenuItem->Name = L"logoutToolStripMenuItem";
			this->logoutToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->logoutToolStripMenuItem->Text = L"Profile Tools";
			// 
			// editProfileToolStripMenuItem
			// 
			this->editProfileToolStripMenuItem->Name = L"editProfileToolStripMenuItem";
			this->editProfileToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->editProfileToolStripMenuItem->Text = L"Edit Profile";
			// 
			// logoutToolStripMenuItem1
			// 
			this->logoutToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->logoutOfIPIMSToolStripMenuItem });
			this->logoutToolStripMenuItem1->Name = L"logoutToolStripMenuItem1";
			this->logoutToolStripMenuItem1->Size = System::Drawing::Size(57, 20);
			this->logoutToolStripMenuItem1->Text = L"Logout";
			// 
			// logoutOfIPIMSToolStripMenuItem
			// 
			this->logoutOfIPIMSToolStripMenuItem->Name = L"logoutOfIPIMSToolStripMenuItem";
			this->logoutOfIPIMSToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->logoutOfIPIMSToolStripMenuItem->Text = L"Logout of IPIMS";
			// 
			// comboBoxDoctorSelection
			// 
			this->comboBoxDoctorSelection->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBoxDoctorSelection->FormattingEnabled = true;
			this->comboBoxDoctorSelection->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Dr. Thomas Smith", L"Dr. Susan Enriquez",
					L"Dr. Linda Chattin"
			});
			this->comboBoxDoctorSelection->Location = System::Drawing::Point(12, 259);
			this->comboBoxDoctorSelection->Name = L"comboBoxDoctorSelection";
			this->comboBoxDoctorSelection->Size = System::Drawing::Size(284, 26);
			this->comboBoxDoctorSelection->TabIndex = 33;
			this->comboBoxDoctorSelection->Text = L"Select a Doctor";
			// 
			// UpdateHealthcareCondition
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 498);
			this->Controls->Add(this->comboBoxDoctorSelection);
			this->Controls->Add(this->menuStrip);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->labelUpdateHealthcareConditions);
			this->Controls->Add(this->textBoxSymptoms);
			this->Controls->Add(this->labelSymptoms);
			this->Controls->Add(this->checkBoxEmergencyAlert);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->HelpButton = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UpdateHealthcareCondition";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Interactive Patient Information System (IPIMS) - Group 9";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) {


		if (textBoxSymptoms->Text)
		{
			if (checkBoxEmergencyAlert->Checked)
				MessageBox::Show("Our staff will contact you as soon as possible");
			else
				MessageBox::Show("The symptoms have been saved.");
		}
		else
			MessageBox::Show("Please enter data");
	}
	private: System::Void buttonClear_Click(System::Object^  sender, System::EventArgs^  e) {
		this->textBoxSymptoms->Text = "";
		this->checkBoxEmergencyAlert->Checked = false;
	}
	private: System::Void textBoxSymptoms_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void checkBoxEmergencyAlert_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}

			 /*	KAVITAS CODE:::
			 private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=localhost;port=3306;username=root;password=Group9IPIMS";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into test.group9ipims (FirstName,DOB,Symptoms,Emergency) values ('"+this->textBoxFirstName->Text+"','"+this->textBoxDateOfBirth->Text+"','"+this->textBoxSymptoms->ResetText+"','"+this->checkBoxEmergencyAlert->Text+"');", conDataBase);
		MySqlDataReader^ myReader;
		


		if (textBoxSymptoms->Text)
		{
			if (checkBoxEmergencyAlert->Checked)
				MessageBox::Show("Our staff will contact you as soon as possible");

			else
				MessageBox::Show("The symptoms have been saved.");
		}
		else
			MessageBox::Show("Please enter data");
	}
	private: System::Void buttonClear_Click(System::Object^  sender, System::EventArgs^  e) {
		this->textBoxSymptoms->Text = "";
		this->checkBoxEmergencyAlert->Checked = false;

	}

	private: System::Void textBoxSymptoms_TextChanged(System::Object^  sender, System::EventArgs^  e) {


	}
	private: System::Void checkBoxEmergencyAlert_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void labelSymptoms_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBoxFirstName_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

*/





			 /*
	private: System::Void scheduleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		IPIMS_Group9::ScheduleAppointment^ formScheduleAppt = gcnew ScheduleAppointment();
		this->Hide();
		formScheduleAppt->ShowDialog();
		this->Show();
	}

	private: System::Void viewToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		IPIMS_Group9::ViewAppointments^ formViewAppts = gcnew ViewAppointments();
		this->Hide();
		formViewAppts->ShowDialog();
		this->Show();
	}*/
	};
}