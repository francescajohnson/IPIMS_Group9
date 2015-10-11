#pragma once

namespace IPIMS_Group9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EPrescription
	/// </summary>
	public ref class EPrescription : public System::Windows::Forms::Form
	{
	public:
		EPrescription(void)
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
		~EPrescription()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBoxEPrescriptions;
	protected:

	protected:




	private: System::Windows::Forms::ToolStripMenuItem^  logoutOfIPIMSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logoutToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  editProfileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  logoutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  analysisOfPatientPopulationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  analysisOfTypeOfPatientsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  report2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editProfileInformationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editLabRecordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editLabRequestToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  reportsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  searchRecordsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  searchForPatientsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  printExistingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  printToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ePrescriptionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  scheduleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  viewAppointmentsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  updatePatientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  searchForPatientToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  patientServicesToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip;
	private: System::Windows::Forms::Label^  labelEPrescriptions;
	private: System::Windows::Forms::GroupBox^  groupBoxPatientInformation;
	private: System::Windows::Forms::TextBox^  textBoxLabDescription;
	private: System::Windows::Forms::Label^  labelLabDescription;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Label^  labelDosage;
	private: System::Windows::Forms::TextBox^  textBoxMedicine;
	private: System::Windows::Forms::Label^  labelMedicine;
	private: System::Windows::Forms::Label^  labelDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxLastName;
	private: System::Windows::Forms::TextBox^  textBoxFirstName;
	private: System::Windows::Forms::Label^  labelLastName;
	private: System::Windows::Forms::Label^  labelFirstName;
	private: System::Windows::Forms::Button^  buttonView;
	private: System::Windows::Forms::Button^  buttonCreate;
	private: System::Windows::Forms::Button^  buttonPrint;
	private: System::Windows::Forms::ComboBox^  comboBoxDoctorSelection;
	private: System::Windows::Forms::Button^  buttonEdit;

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
			this->listBoxEPrescriptions = (gcnew System::Windows::Forms::ListBox());
			this->logoutOfIPIMSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logoutToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editProfileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logoutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->analysisOfPatientPopulationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->analysisOfTypeOfPatientsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->report2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editProfileInformationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editLabRecordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editLabRequestToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reportsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchRecordsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchForPatientsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printExistingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ePrescriptionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->scheduleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewAppointmentsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->updatePatientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchForPatientToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->patientServicesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip = (gcnew System::Windows::Forms::MenuStrip());
			this->labelEPrescriptions = (gcnew System::Windows::Forms::Label());
			this->groupBoxPatientInformation = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxLabDescription = (gcnew System::Windows::Forms::TextBox());
			this->labelLabDescription = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->labelDosage = (gcnew System::Windows::Forms::Label());
			this->textBoxMedicine = (gcnew System::Windows::Forms::TextBox());
			this->labelMedicine = (gcnew System::Windows::Forms::Label());
			this->labelDateOfBirth = (gcnew System::Windows::Forms::Label());
			this->textBoxDateOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->buttonView = (gcnew System::Windows::Forms::Button());
			this->buttonCreate = (gcnew System::Windows::Forms::Button());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->comboBoxDoctorSelection = (gcnew System::Windows::Forms::ComboBox());
			this->buttonEdit = (gcnew System::Windows::Forms::Button());
			this->menuStrip->SuspendLayout();
			this->groupBoxPatientInformation->SuspendLayout();
			this->SuspendLayout();
			// 
			// listBoxEPrescriptions
			// 
			this->listBoxEPrescriptions->FormattingEnabled = true;
			this->listBoxEPrescriptions->Location = System::Drawing::Point(12, 216);
			this->listBoxEPrescriptions->Name = L"listBoxEPrescriptions";
			this->listBoxEPrescriptions->Size = System::Drawing::Size(570, 225);
			this->listBoxEPrescriptions->TabIndex = 0;
			// 
			// logoutOfIPIMSToolStripMenuItem
			// 
			this->logoutOfIPIMSToolStripMenuItem->Name = L"logoutOfIPIMSToolStripMenuItem";
			this->logoutOfIPIMSToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->logoutOfIPIMSToolStripMenuItem->Text = L"Logout of IPIMS";
			// 
			// logoutToolStripMenuItem1
			// 
			this->logoutToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->logoutOfIPIMSToolStripMenuItem });
			this->logoutToolStripMenuItem1->Name = L"logoutToolStripMenuItem1";
			this->logoutToolStripMenuItem1->Size = System::Drawing::Size(57, 20);
			this->logoutToolStripMenuItem1->Text = L"Logout";
			// 
			// editProfileToolStripMenuItem
			// 
			this->editProfileToolStripMenuItem->Name = L"editProfileToolStripMenuItem";
			this->editProfileToolStripMenuItem->Size = System::Drawing::Size(131, 22);
			this->editProfileToolStripMenuItem->Text = L"Edit Profile";
			// 
			// logoutToolStripMenuItem
			// 
			this->logoutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->editProfileToolStripMenuItem });
			this->logoutToolStripMenuItem->Name = L"logoutToolStripMenuItem";
			this->logoutToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->logoutToolStripMenuItem->Text = L"Profile Tools";
			// 
			// analysisOfPatientPopulationToolStripMenuItem
			// 
			this->analysisOfPatientPopulationToolStripMenuItem->Name = L"analysisOfPatientPopulationToolStripMenuItem";
			this->analysisOfPatientPopulationToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->analysisOfPatientPopulationToolStripMenuItem->Text = L"Analysis of patient population";
			// 
			// analysisOfTypeOfPatientsToolStripMenuItem
			// 
			this->analysisOfTypeOfPatientsToolStripMenuItem->Name = L"analysisOfTypeOfPatientsToolStripMenuItem";
			this->analysisOfTypeOfPatientsToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->analysisOfTypeOfPatientsToolStripMenuItem->Text = L"Analysis of type of patients";
			// 
			// report2ToolStripMenuItem
			// 
			this->report2ToolStripMenuItem->Name = L"report2ToolStripMenuItem";
			this->report2ToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->report2ToolStripMenuItem->Text = L"Tracking of the admission rates";
			// 
			// editProfileInformationToolStripMenuItem
			// 
			this->editProfileInformationToolStripMenuItem->Name = L"editProfileInformationToolStripMenuItem";
			this->editProfileInformationToolStripMenuItem->Size = System::Drawing::Size(239, 22);
			this->editProfileInformationToolStripMenuItem->Text = L"Analysis of health outcomes";
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
			// editLabRecordToolStripMenuItem
			// 
			this->editLabRecordToolStripMenuItem->Name = L"editLabRecordToolStripMenuItem";
			this->editLabRecordToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->editLabRecordToolStripMenuItem->Text = L"Edit Lab Record";
			// 
			// editLabRequestToolStripMenuItem
			// 
			this->editLabRequestToolStripMenuItem->Name = L"editLabRequestToolStripMenuItem";
			this->editLabRequestToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->editLabRequestToolStripMenuItem->Text = L"View Lab Record";
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
			// searchForPatientsToolStripMenuItem
			// 
			this->searchForPatientsToolStripMenuItem->Name = L"searchForPatientsToolStripMenuItem";
			this->searchForPatientsToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->searchForPatientsToolStripMenuItem->Text = L"Search for Patients";
			// 
			// printExistingToolStripMenuItem
			// 
			this->printExistingToolStripMenuItem->Name = L"printExistingToolStripMenuItem";
			this->printExistingToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->printExistingToolStripMenuItem->Text = L"Print Existing";
			// 
			// printToolStripMenuItem
			// 
			this->printToolStripMenuItem->Name = L"printToolStripMenuItem";
			this->printToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->printToolStripMenuItem->Text = L"View Existing";
			// 
			// viewToolStripMenuItem
			// 
			this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			this->viewToolStripMenuItem->Size = System::Drawing::Size(142, 22);
			this->viewToolStripMenuItem->Text = L"Send New";
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
			// scheduleToolStripMenuItem
			// 
			this->scheduleToolStripMenuItem->Name = L"scheduleToolStripMenuItem";
			this->scheduleToolStripMenuItem->Size = System::Drawing::Size(122, 22);
			this->scheduleToolStripMenuItem->Text = L"Schedule";
			// 
			// viewToolStripMenuItem1
			// 
			this->viewToolStripMenuItem1->Name = L"viewToolStripMenuItem1";
			this->viewToolStripMenuItem1->Size = System::Drawing::Size(122, 22);
			this->viewToolStripMenuItem1->Text = L"View";
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
			// updatePatientToolStripMenuItem
			// 
			this->updatePatientToolStripMenuItem->Name = L"updatePatientToolStripMenuItem";
			this->updatePatientToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->updatePatientToolStripMenuItem->Text = L"Update Patient Healthcare";
			// 
			// searchForPatientToolStripMenuItem
			// 
			this->searchForPatientToolStripMenuItem->Name = L"searchForPatientToolStripMenuItem";
			this->searchForPatientToolStripMenuItem->Size = System::Drawing::Size(232, 22);
			this->searchForPatientToolStripMenuItem->Text = L"Emergency Alerts";
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
			// menuStrip
			// 
			this->menuStrip->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->patientServicesToolStripMenuItem,
					this->reportsToolStripMenuItem, this->toolsToolStripMenuItem, this->logoutToolStripMenuItem, this->logoutToolStripMenuItem1
			});
			this->menuStrip->Location = System::Drawing::Point(0, 0);
			this->menuStrip->Name = L"menuStrip";
			this->menuStrip->Size = System::Drawing::Size(594, 24);
			this->menuStrip->TabIndex = 36;
			this->menuStrip->Text = L"menuStrip1";
			// 
			// labelEPrescriptions
			// 
			this->labelEPrescriptions->AutoSize = true;
			this->labelEPrescriptions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelEPrescriptions->Location = System::Drawing::Point(12, 30);
			this->labelEPrescriptions->Name = L"labelEPrescriptions";
			this->labelEPrescriptions->Size = System::Drawing::Size(498, 36);
			this->labelEPrescriptions->TabIndex = 35;
			this->labelEPrescriptions->Text = L"E-Prescriptions (Medicine and Labs)";
			// 
			// groupBoxPatientInformation
			// 
			this->groupBoxPatientInformation->Controls->Add(this->textBoxLabDescription);
			this->groupBoxPatientInformation->Controls->Add(this->labelLabDescription);
			this->groupBoxPatientInformation->Controls->Add(this->textBox1);
			this->groupBoxPatientInformation->Controls->Add(this->labelDosage);
			this->groupBoxPatientInformation->Controls->Add(this->textBoxMedicine);
			this->groupBoxPatientInformation->Controls->Add(this->labelMedicine);
			this->groupBoxPatientInformation->Controls->Add(this->labelDateOfBirth);
			this->groupBoxPatientInformation->Controls->Add(this->textBoxDateOfBirth);
			this->groupBoxPatientInformation->Controls->Add(this->textBoxLastName);
			this->groupBoxPatientInformation->Controls->Add(this->textBoxFirstName);
			this->groupBoxPatientInformation->Controls->Add(this->labelLastName);
			this->groupBoxPatientInformation->Controls->Add(this->labelFirstName);
			this->groupBoxPatientInformation->Location = System::Drawing::Point(12, 69);
			this->groupBoxPatientInformation->Name = L"groupBoxPatientInformation";
			this->groupBoxPatientInformation->Size = System::Drawing::Size(564, 100);
			this->groupBoxPatientInformation->TabIndex = 37;
			this->groupBoxPatientInformation->TabStop = false;
			this->groupBoxPatientInformation->Text = L"Patient Information";
			// 
			// textBoxLabDescription
			// 
			this->textBoxLabDescription->Location = System::Drawing::Point(96, 69);
			this->textBoxLabDescription->Name = L"textBoxLabDescription";
			this->textBoxLabDescription->Size = System::Drawing::Size(447, 20);
			this->textBoxLabDescription->TabIndex = 15;
			this->textBoxLabDescription->Text = L"X-Ray left hip";
			// 
			// labelLabDescription
			// 
			this->labelLabDescription->AutoSize = true;
			this->labelLabDescription->Location = System::Drawing::Point(6, 72);
			this->labelLabDescription->Name = L"labelLabDescription";
			this->labelLabDescription->Size = System::Drawing::Size(84, 13);
			this->labelLabDescription->TabIndex = 14;
			this->labelLabDescription->Text = L"Lab Description:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(275, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(120, 20);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"500 mg";
			// 
			// labelDosage
			// 
			this->labelDosage->AutoSize = true;
			this->labelDosage->Location = System::Drawing::Point(222, 46);
			this->labelDosage->Name = L"labelDosage";
			this->labelDosage->Size = System::Drawing::Size(47, 13);
			this->labelDosage->TabIndex = 12;
			this->labelDosage->Text = L"Dosage:";
			// 
			// textBoxMedicine
			// 
			this->textBoxMedicine->Location = System::Drawing::Point(96, 43);
			this->textBoxMedicine->Name = L"textBoxMedicine";
			this->textBoxMedicine->Size = System::Drawing::Size(120, 20);
			this->textBoxMedicine->TabIndex = 11;
			this->textBoxMedicine->Text = L"Acetaminophen";
			// 
			// labelMedicine
			// 
			this->labelMedicine->AutoSize = true;
			this->labelMedicine->Location = System::Drawing::Point(6, 46);
			this->labelMedicine->Name = L"labelMedicine";
			this->labelMedicine->Size = System::Drawing::Size(84, 13);
			this->labelMedicine->TabIndex = 10;
			this->labelMedicine->Text = L"Medicine Name:";
			// 
			// labelDateOfBirth
			// 
			this->labelDateOfBirth->AutoSize = true;
			this->labelDateOfBirth->Location = System::Drawing::Point(397, 22);
			this->labelDateOfBirth->Name = L"labelDateOfBirth";
			this->labelDateOfBirth->Size = System::Drawing::Size(69, 13);
			this->labelDateOfBirth->TabIndex = 9;
			this->labelDateOfBirth->Text = L"Date of Birth:";
			// 
			// textBoxDateOfBirth
			// 
			this->textBoxDateOfBirth->Location = System::Drawing::Point(472, 19);
			this->textBoxDateOfBirth->Name = L"textBoxDateOfBirth";
			this->textBoxDateOfBirth->Size = System::Drawing::Size(71, 20);
			this->textBoxDateOfBirth->TabIndex = 8;
			this->textBoxDateOfBirth->Text = L"01/01/2121";
			// 
			// textBoxLastName
			// 
			this->textBoxLastName->Location = System::Drawing::Point(271, 19);
			this->textBoxLastName->Name = L"textBoxLastName";
			this->textBoxLastName->Size = System::Drawing::Size(120, 20);
			this->textBoxLastName->TabIndex = 5;
			this->textBoxLastName->Text = L"Roberts";
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(78, 19);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(120, 20);
			this->textBoxFirstName->TabIndex = 4;
			this->textBoxFirstName->Text = L"Julie";
			// 
			// labelLastName
			// 
			this->labelLastName->AutoSize = true;
			this->labelLastName->Location = System::Drawing::Point(204, 22);
			this->labelLastName->Name = L"labelLastName";
			this->labelLastName->Size = System::Drawing::Size(61, 13);
			this->labelLastName->TabIndex = 3;
			this->labelLastName->Text = L"Last Name:";
			// 
			// labelFirstName
			// 
			this->labelFirstName->AutoSize = true;
			this->labelFirstName->Location = System::Drawing::Point(12, 22);
			this->labelFirstName->Name = L"labelFirstName";
			this->labelFirstName->Size = System::Drawing::Size(60, 13);
			this->labelFirstName->TabIndex = 0;
			this->labelFirstName->Text = L"First Name:";
			// 
			// buttonView
			// 
			this->buttonView->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonView->Location = System::Drawing::Point(12, 175);
			this->buttonView->Name = L"buttonView";
			this->buttonView->Size = System::Drawing::Size(70, 35);
			this->buttonView->TabIndex = 38;
			this->buttonView->Text = L"View";
			this->buttonView->UseVisualStyleBackColor = true;
			// 
			// buttonCreate
			// 
			this->buttonCreate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonCreate->Location = System::Drawing::Point(513, 175);
			this->buttonCreate->Name = L"buttonCreate";
			this->buttonCreate->Size = System::Drawing::Size(70, 35);
			this->buttonCreate->TabIndex = 39;
			this->buttonCreate->Text = L"Create";
			this->buttonCreate->UseVisualStyleBackColor = true;
			// 
			// buttonPrint
			// 
			this->buttonPrint->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPrint->Location = System::Drawing::Point(512, 455);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(70, 35);
			this->buttonPrint->TabIndex = 40;
			this->buttonPrint->Text = L"Print";
			this->buttonPrint->UseVisualStyleBackColor = true;
			// 
			// comboBoxDoctorSelection
			// 
			this->comboBoxDoctorSelection->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->comboBoxDoctorSelection->FormattingEnabled = true;
			this->comboBoxDoctorSelection->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Dr. Thomas Smith", L"Dr. Susan Enriquez",
					L"Dr. Linda Chattin"
			});
			this->comboBoxDoctorSelection->Location = System::Drawing::Point(152, 180);
			this->comboBoxDoctorSelection->Name = L"comboBoxDoctorSelection";
			this->comboBoxDoctorSelection->Size = System::Drawing::Size(284, 23);
			this->comboBoxDoctorSelection->TabIndex = 41;
			this->comboBoxDoctorSelection->Text = L"Select Doctor:";
			// 
			// buttonEdit
			// 
			this->buttonEdit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEdit->Location = System::Drawing::Point(12, 455);
			this->buttonEdit->Name = L"buttonEdit";
			this->buttonEdit->Size = System::Drawing::Size(70, 35);
			this->buttonEdit->TabIndex = 42;
			this->buttonEdit->Text = L"Edit";
			this->buttonEdit->UseVisualStyleBackColor = true;
			// 
			// EPrescription
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 502);
			this->Controls->Add(this->buttonEdit);
			this->Controls->Add(this->comboBoxDoctorSelection);
			this->Controls->Add(this->buttonPrint);
			this->Controls->Add(this->buttonCreate);
			this->Controls->Add(this->buttonView);
			this->Controls->Add(this->groupBoxPatientInformation);
			this->Controls->Add(this->listBoxEPrescriptions);
			this->Controls->Add(this->menuStrip);
			this->Controls->Add(this->labelEPrescriptions);
			this->Name = L"EPrescription";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EPrescription";
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->groupBoxPatientInformation->ResumeLayout(false);
			this->groupBoxPatientInformation->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
