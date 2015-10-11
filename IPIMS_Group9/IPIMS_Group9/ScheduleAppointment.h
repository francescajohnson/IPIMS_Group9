#pragma once

namespace IPIMS_Group9 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ScheduleAppointment
	/// </summary>
	public ref class ScheduleAppointment : public System::Windows::Forms::Form
	{
	public:
		ScheduleAppointment(void)
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
		~ScheduleAppointment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelScheduleAppointment;
	private: System::Windows::Forms::GroupBox^  groupBoxPersonalInformation;
	private: System::Windows::Forms::Label^  labelDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxDateOfBirth;
	private: System::Windows::Forms::TextBox^  textBoxSymptoms;
	private: System::Windows::Forms::Label^  labelSymptoms;
	private: System::Windows::Forms::TextBox^  textBoxLastName;
	private: System::Windows::Forms::TextBox^  textBoxFirstName;
	private: System::Windows::Forms::Label^  labelLastName;
	private: System::Windows::Forms::Label^  labelFirstName;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::MonthCalendar^  monthCalendarScheduling;
	private: System::Windows::Forms::ComboBox^  comboBoxDoctorSelection;
	private: System::Windows::Forms::Button^  buttonScheduleAppointment;
	private: System::Windows::Forms::CheckBox^  checkBoxEmergencyAlert;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label1;
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
			this->labelScheduleAppointment = (gcnew System::Windows::Forms::Label());
			this->groupBoxPersonalInformation = (gcnew System::Windows::Forms::GroupBox());
			this->labelDateOfBirth = (gcnew System::Windows::Forms::Label());
			this->textBoxDateOfBirth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSymptoms = (gcnew System::Windows::Forms::TextBox());
			this->labelSymptoms = (gcnew System::Windows::Forms::Label());
			this->textBoxLastName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxFirstName = (gcnew System::Windows::Forms::TextBox());
			this->labelLastName = (gcnew System::Windows::Forms::Label());
			this->labelFirstName = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBoxDoctorSelection = (gcnew System::Windows::Forms::ComboBox());
			this->monthCalendarScheduling = (gcnew System::Windows::Forms::MonthCalendar());
			this->checkBoxEmergencyAlert = (gcnew System::Windows::Forms::CheckBox());
			this->buttonScheduleAppointment = (gcnew System::Windows::Forms::Button());
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
			this->groupBoxPersonalInformation->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->menuStrip->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelScheduleAppointment
			// 
			this->labelScheduleAppointment->AutoSize = true;
			this->labelScheduleAppointment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelScheduleAppointment->Location = System::Drawing::Point(12, 30);
			this->labelScheduleAppointment->Name = L"labelScheduleAppointment";
			this->labelScheduleAppointment->Size = System::Drawing::Size(316, 36);
			this->labelScheduleAppointment->TabIndex = 1;
			this->labelScheduleAppointment->Text = L"Schedule Appointment";
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
			this->groupBoxPersonalInformation->TabIndex = 5;
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
			this->textBoxDateOfBirth->Click += gcnew System::EventHandler(this, &ScheduleAppointment::textBoxDateOfBirth_TextClick);
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
			this->textBoxSymptoms->Click += gcnew System::EventHandler(this, &ScheduleAppointment::textBoxSymptoms_TextClick);
			this->textBoxSymptoms->TextChanged += gcnew System::EventHandler(this, &ScheduleAppointment::textBoxSymptoms_TextChanged);
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
			this->textBoxLastName->Click += gcnew System::EventHandler(this, &ScheduleAppointment::textBoxLastName_TextClick);
			// 
			// textBoxFirstName
			// 
			this->textBoxFirstName->Location = System::Drawing::Point(73, 38);
			this->textBoxFirstName->Name = L"textBoxFirstName";
			this->textBoxFirstName->Size = System::Drawing::Size(120, 20);
			this->textBoxFirstName->TabIndex = 4;
			this->textBoxFirstName->Text = L"Julie";
			this->textBoxFirstName->Click += gcnew System::EventHandler(this, &ScheduleAppointment::textBoxFirstName_TextClick);
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
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->comboBoxDoctorSelection);
			this->groupBox1->Controls->Add(this->monthCalendarScheduling);
			this->groupBox1->Controls->Add(this->checkBoxEmergencyAlert);
			this->groupBox1->Location = System::Drawing::Point(12, 242);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(563, 220);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Calendar and Doctor Selection for Appointment Scheduling:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(323, 86);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(234, 100);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Emergency Alert Conditions Include:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 78);
			this->label1->TabIndex = 9;
			this->label1->Text = L"  = Suspected heart attack or stroke\r\n  = Sudden or extreme difficulty breathing\r"
				L"\n  = Sudden loss of consciousness\r\n  = Severe bleeding\r\n  = Severe abdominal pai"
				L"n\r\n  = Injuries to one or both eyes";
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
			this->comboBoxDoctorSelection->Location = System::Drawing::Point(273, 25);
			this->comboBoxDoctorSelection->Name = L"comboBoxDoctorSelection";
			this->comboBoxDoctorSelection->Size = System::Drawing::Size(284, 26);
			this->comboBoxDoctorSelection->TabIndex = 2;
			this->comboBoxDoctorSelection->Text = L"Select the Doctor for your Appointment";
			// 
			// monthCalendarScheduling
			// 
			this->monthCalendarScheduling->Location = System::Drawing::Point(5, 25);
			this->monthCalendarScheduling->Name = L"monthCalendarScheduling";
			this->monthCalendarScheduling->TabIndex = 0;
			// 
			// checkBoxEmergencyAlert
			// 
			this->checkBoxEmergencyAlert->AccessibleRole = System::Windows::Forms::AccessibleRole::Alert;
			this->checkBoxEmergencyAlert->AutoSize = true;
			this->checkBoxEmergencyAlert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->checkBoxEmergencyAlert->ForeColor = System::Drawing::Color::Red;
			this->checkBoxEmergencyAlert->Location = System::Drawing::Point(398, 191);
			this->checkBoxEmergencyAlert->Margin = System::Windows::Forms::Padding(2);
			this->checkBoxEmergencyAlert->Name = L"checkBoxEmergencyAlert";
			this->checkBoxEmergencyAlert->Size = System::Drawing::Size(160, 24);
			this->checkBoxEmergencyAlert->TabIndex = 19;
			this->checkBoxEmergencyAlert->Text = L"Emergency Alert";
			this->checkBoxEmergencyAlert->UseVisualStyleBackColor = true;
			// 
			// buttonScheduleAppointment
			// 
			this->buttonScheduleAppointment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonScheduleAppointment->Location = System::Drawing::Point(381, 489);
			this->buttonScheduleAppointment->Name = L"buttonScheduleAppointment";
			this->buttonScheduleAppointment->Size = System::Drawing::Size(206, 35);
			this->buttonScheduleAppointment->TabIndex = 18;
			this->buttonScheduleAppointment->Text = L"Schedule Appointment";
			this->buttonScheduleAppointment->UseVisualStyleBackColor = true;
			this->buttonScheduleAppointment->Click += gcnew System::EventHandler(this, &ScheduleAppointment::buttonScheduleAppointment_Click);
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
			this->menuStrip->Size = System::Drawing::Size(599, 24);
			this->menuStrip->TabIndex = 33;
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
			// ScheduleAppointment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 536);
			this->Controls->Add(this->menuStrip);
			this->Controls->Add(this->buttonScheduleAppointment);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBoxPersonalInformation);
			this->Controls->Add(this->labelScheduleAppointment);
			this->Name = L"ScheduleAppointment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Interactive Patient Information System (IPIMS) - Group 9";
			this->groupBoxPersonalInformation->ResumeLayout(false);
			this->groupBoxPersonalInformation->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonScheduleAppointment_Click(System::Object^  sender, System::EventArgs^  e) {
		// add code here for when the schedule appointments button is selected.
		if (checkBoxEmergencyAlert->Checked)
			MessageBox::Show("Our staff will contact you as soon as possible");
		else
			MessageBox::Show("Your appointment has been scheduled.");
	}
	private: System::Void textBoxSymptoms_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		textBoxSymptoms->SelectAll();
	}
	private: System::Void textBoxSymptoms_TextClick(System::Object^  sender, System::EventArgs^  e) {
		textBoxSymptoms->SelectAll();
	}
	private: System::Void textBoxDateOfBirth_TextClick(System::Object^  sender, System::EventArgs^  e) {
		textBoxDateOfBirth->SelectAll();
	}
	private: System::Void textBoxFirstName_TextClick(System::Object^  sender, System::EventArgs^  e) {
		textBoxFirstName->SelectAll();
	}
	private: System::Void textBoxLastName_TextClick(System::Object^  sender, System::EventArgs^  e) {
		textBoxLastName->SelectAll();
	}

	};
}
