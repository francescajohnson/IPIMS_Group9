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



	private: System::Windows::Forms::Label^  labelUpdateHealthcareConditions;

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
	private: System::Windows::Forms::GroupBox^  groupBoxPersonalInformation;
	private: System::Windows::Forms::Label^  labelDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxSymptoms;
	private: System::Windows::Forms::Label^  labelSymptoms;
	private: System::Windows::Forms::TextBox^  textBoxLastName;
	private: System::Windows::Forms::TextBox^  textBoxFirstName;
	private: System::Windows::Forms::Label^  labelLastName;
	private: System::Windows::Forms::Label^  labelFirstName;


	private: System::Windows::Forms::CheckBox^  checkBoxWeakness;
	private: System::Windows::Forms::CheckBox^  checkBoxSuicide;
	private: System::Windows::Forms::CheckBox^  checkBoxWheezing;
	private: System::Windows::Forms::CheckBox^  checkBoxBloodUrine;
	private: System::Windows::Forms::CheckBox^  checkBoxTenderness;
	private: System::Windows::Forms::CheckBox^  checkBoxChestPains;

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
			this->labelUpdateHealthcareConditions = (gcnew System::Windows::Forms::Label());
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
			this->groupBoxPersonalInformation = (gcnew System::Windows::Forms::GroupBox());
			this->labelDateOfBirth = (gcnew System::Windows::Forms::Label());
			this->textBoxDateOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSymptoms = (gcnew System::Windows::Forms::TextBox());
			this->labelSymptoms = (gcnew System::Windows::Forms::Label());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->checkBoxWeakness = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxChestPains = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxTenderness = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxBloodUrine = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxWheezing = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxSuicide = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1->SuspendLayout();
			this->menuStrip->SuspendLayout();
			this->groupBoxPersonalInformation->SuspendLayout();
			this->SuspendLayout();
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
			this->groupBox1->Controls->Add(this->checkBoxSuicide);
			this->groupBox1->Controls->Add(this->checkBoxWheezing);
			this->groupBox1->Controls->Add(this->checkBoxBloodUrine);
			this->groupBox1->Controls->Add(this->checkBoxTenderness);
			this->groupBox1->Controls->Add(this->checkBoxChestPains);
			this->groupBox1->Controls->Add(this->checkBoxWeakness);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 291);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(424, 195);
			this->groupBox1->TabIndex = 21;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Is the Patient experiencing any of the following\?";
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
			this->comboBoxDoctorSelection->Location = System::Drawing::Point(12, 242);
			this->comboBoxDoctorSelection->Name = L"comboBoxDoctorSelection";
			this->comboBoxDoctorSelection->Size = System::Drawing::Size(284, 26);
			this->comboBoxDoctorSelection->TabIndex = 33;
			this->comboBoxDoctorSelection->Text = L"Select a Doctor";
			// 
			// groupBoxPersonalInformation
			// 
			this->groupBoxPersonalInformation->Controls->Add(this->labelDateOfBirth);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxDateOfBirth);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxSymptoms);
			this->groupBoxPersonalInformation->Controls->Add(this->labelSymptoms);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxLastName);
			this->groupBoxPersonalInformation->Controls->Add(this->textBoxFirstName);
			this->groupBoxPersonalInformation->Controls->Add(this->labelLastName);
			this->groupBoxPersonalInformation->Controls->Add(this->labelFirstName);
			this->groupBoxPersonalInformation->Location = System::Drawing::Point(12, 69);
			this->groupBoxPersonalInformation->Name = L"groupBoxPersonalInformation";
			this->groupBoxPersonalInformation->Size = System::Drawing::Size(564, 167);
			this->groupBoxPersonalInformation->TabIndex = 34;
			this->groupBoxPersonalInformation->TabStop = false;
			this->groupBoxPersonalInformation->Text = L"Personal Information:";
			// 
			// labelDateOfBirth
			// 
			this->labelDateOfBirth->AutoSize = true;
			this->labelDateOfBirth->Location = System::Drawing::Point(392, 41);
			this->labelDateOfBirth->Name = L"labelDateOfBirth";
			this->labelDateOfBirth->Size = System::Drawing::Size(69, 13);
			this->labelDateOfBirth->TabIndex = 9;
			this->labelDateOfBirth->Text = L"Date of Birth:";
			// 
			// textBoxDateOfBirth
			// 
			this->textBoxDateOfBirth->Location = System::Drawing::Point(467, 38);
			this->textBoxDateOfBirth->Name = L"textBoxDateOfBirth";
			this->textBoxDateOfBirth->Size = System::Drawing::Size(71, 20);
			this->textBoxDateOfBirth->TabIndex = 8;
			this->textBoxDateOfBirth->Text = L"01/01/2121";
			// 
			// textBoxSymptoms
			// 
			this->textBoxSymptoms->Location = System::Drawing::Point(73, 64);
			this->textBoxSymptoms->Multiline = true;
			this->textBoxSymptoms->Name = L"textBoxSymptoms";
			this->textBoxSymptoms->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxSymptoms->Size = System::Drawing::Size(465, 97);
			this->textBoxSymptoms->TabIndex = 7;
			this->textBoxSymptoms->Text = L"What are the symptoms\?";
			// 
			// labelSymptoms
			// 
			this->labelSymptoms->AutoSize = true;
			this->labelSymptoms->Location = System::Drawing::Point(9, 67);
			this->labelSymptoms->Name = L"labelSymptoms";
			this->labelSymptoms->Size = System::Drawing::Size(58, 13);
			this->labelSymptoms->TabIndex = 6;
			this->labelSymptoms->Text = L"Symptoms:";
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(266, 38);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(120, 20);
			this->textBoxLastName->TabIndex = 5;
			this->textBoxLastName->Text = L"Roberts";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(73, 38);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(120, 20);
			this->textBoxFirstName->TabIndex = 4;
			this->textBoxFirstName->Text = L"Julie";
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Location = System::Drawing::Point(199, 41);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(61, 13);
			this->labelLastName->TabIndex = 3;
			this->labelLastName->Text = L"Last Name:";
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Location = System::Drawing::Point(7, 41);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(60, 13);
			this->labelFirstName->TabIndex = 0;
			this->labelFirstName->Text = L"First Name:";
			// 
			// checkBoxWeakness
			// 
			this->checkBoxWeakness->AutoSize = true;
			this->checkBoxWeakness->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxWeakness->Location = System::Drawing::Point(6, 31);
			this->checkBoxWeakness->Name = L"checkBoxWeakness";
			this->checkBoxWeakness->Size = System::Drawing::Size(170, 17);
			this->checkBoxWeakness->TabIndex = 35;
			this->checkBoxWeakness->Text = L"Weakness in arms and/or legs";
			this->checkBoxWeakness->UseVisualStyleBackColor = true;
			// 
			// checkBoxChestPains
			// 
			this->checkBoxChestPains->AutoSize = true;
			this->checkBoxChestPains->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxChestPains->Location = System::Drawing::Point(6, 54);
			this->checkBoxChestPains->Name = L"checkBoxChestPains";
			this->checkBoxChestPains->Size = System::Drawing::Size(81, 17);
			this->checkBoxChestPains->TabIndex = 36;
			this->checkBoxChestPains->Text = L"Chest pains";
			this->checkBoxChestPains->UseVisualStyleBackColor = true;
			// 
			// checkBoxTenderness
			// 
			this->checkBoxTenderness->AutoSize = true;
			this->checkBoxTenderness->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxTenderness->Location = System::Drawing::Point(6, 77);
			this->checkBoxTenderness->Name = L"checkBoxTenderness";
			this->checkBoxTenderness->Size = System::Drawing::Size(229, 17);
			this->checkBoxTenderness->TabIndex = 37;
			this->checkBoxTenderness->Text = L"Tenderness and pain in the back of the leg";
			this->checkBoxTenderness->UseVisualStyleBackColor = true;
			// 
			// checkBoxBloodUrine
			// 
			this->checkBoxBloodUrine->AutoSize = true;
			this->checkBoxBloodUrine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxBloodUrine->Location = System::Drawing::Point(6, 100);
			this->checkBoxBloodUrine->Name = L"checkBoxBloodUrine";
			this->checkBoxBloodUrine->Size = System::Drawing::Size(150, 17);
			this->checkBoxBloodUrine->TabIndex = 38;
			this->checkBoxBloodUrine->Text = L"Blood in the patient\'s urine";
			this->checkBoxBloodUrine->UseVisualStyleBackColor = true;
			// 
			// checkBoxWheezing
			// 
			this->checkBoxWheezing->AutoSize = true;
			this->checkBoxWheezing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxWheezing->Location = System::Drawing::Point(6, 123);
			this->checkBoxWheezing->Name = L"checkBoxWheezing";
			this->checkBoxWheezing->Size = System::Drawing::Size(148, 17);
			this->checkBoxWheezing->TabIndex = 39;
			this->checkBoxWheezing->Text = L"Wheezing while breathing";
			this->checkBoxWheezing->UseVisualStyleBackColor = true;
			// 
			// checkBoxSuicide
			// 
			this->checkBoxSuicide->AutoSize = true;
			this->checkBoxSuicide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBoxSuicide->Location = System::Drawing::Point(6, 146);
			this->checkBoxSuicide->Name = L"checkBoxSuicide";
			this->checkBoxSuicide->Size = System::Drawing::Size(107, 17);
			this->checkBoxSuicide->TabIndex = 40;
			this->checkBoxSuicide->Text = L"Suicidal thoughts";
			this->checkBoxSuicide->UseVisualStyleBackColor = true;
			// 
			// UpdateHealthcareCondition
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 498);
			this->Controls->Add(this->groupBoxPersonalInformation);
			this->Controls->Add(this->comboBoxDoctorSelection);
			this->Controls->Add(this->menuStrip);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonSave);
			this->Controls->Add(this->labelUpdateHealthcareConditions);
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
			this->groupBoxPersonalInformation->ResumeLayout(false);
			this->groupBoxPersonalInformation->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonSave_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBoxSymptoms->Text)
		{
			MessageBox::Show("Thank you for updating the health conditions.");
		//		MessageBox::Show("Our staff will contact you as soon as possible");
			MessageBox::Show("The symptoms have been saved.");

			if (this->checkBoxWeakness->Checked || this->checkBoxChestPains->Checked || this->checkBoxTenderness->Checked || this->checkBoxBloodUrine->Checked || this->checkBoxWheezing->Checked || this->checkBoxSuicide->Checked)
			{
				MessageBox::Show("IPIMS will notify the healthcare provider with the severe conditions.");
			}

			if (this->checkBoxWeakness->Checked || this->checkBoxChestPains->Checked || this->checkBoxTenderness->Checked || this->checkBoxBloodUrine->Checked)
			{
				MessageBox::Show("This is an emergency, an alert has been triggered to the available emergency doctor.");
			}			
			if (this->checkBoxWheezing->Checked)
			{

			}
			if (this->checkBoxSuicide->Checked)
			{
				MessageBox::Show("Please contact the National Suicide Prevention Line at 1(800)273-8255");
			}
		}
		else{
			MessageBox::Show("Please enter a description of the symptoms.");
		}
	}

	private: System::Void buttonClear_Click(System::Object^  sender, System::EventArgs^  e) {
		this->textBoxSymptoms->Text = "";
		this->checkBoxWeakness->Checked = false;
		this->checkBoxChestPains->Checked = false;
		this->checkBoxTenderness->Checked = false;
		this->checkBoxWheezing->Checked = false;
		this->checkBoxBloodUrine->Checked = false;
		this->checkBoxSuicide->Checked = false;
	}
	private: System::Void textBoxSymptoms_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void checkBoxEmergencyAlert_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}

			 /*	KAVITAS CODE::: I have not yet integrated the doctor... 
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