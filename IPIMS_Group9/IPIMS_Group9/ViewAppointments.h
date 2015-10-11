#include "ScheduleAppointment.h"
#include "UpdateHealthcareCondition.h"

#pragma once

namespace IPIMS_Group9 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewAppointments
	/// </summary>
	public ref class ViewAppointments : public System::Windows::Forms::Form
	{
	public:
		ViewAppointments(void)
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
		~ViewAppointments()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  labelViewAppointment;
	protected:

	protected:

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
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPageUpcomingAppointments;
	private: System::Windows::Forms::ListBox^  listBoxUpcomingAppointments;
	private: System::Windows::Forms::TabPage^  tabPagePastAppointments;
	private: System::Windows::Forms::ListBox^  listBoxPastAppointments;

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
			this->labelViewAppointment = (gcnew System::Windows::Forms::Label());
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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPageUpcomingAppointments = (gcnew System::Windows::Forms::TabPage());
			this->listBoxUpcomingAppointments = (gcnew System::Windows::Forms::ListBox());
			this->tabPagePastAppointments = (gcnew System::Windows::Forms::TabPage());
			this->listBoxPastAppointments = (gcnew System::Windows::Forms::ListBox());
			this->menuStrip->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPageUpcomingAppointments->SuspendLayout();
			this->tabPagePastAppointments->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelViewAppointment
			// 
			this->labelViewAppointment->AutoSize = true;
			this->labelViewAppointment->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelViewAppointment->Location = System::Drawing::Point(12, 24);
			this->labelViewAppointment->Name = L"labelViewAppointment";
			this->labelViewAppointment->Size = System::Drawing::Size(272, 36);
			this->labelViewAppointment->TabIndex = 19;
			this->labelViewAppointment->Text = L"View Appointments";
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
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPageUpcomingAppointments);
			this->tabControl1->Controls->Add(this->tabPagePastAppointments);
			this->tabControl1->Location = System::Drawing::Point(12, 63);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(570, 427);
			this->tabControl1->TabIndex = 34;
			// 
			// tabPageUpcomingAppointments
			// 
			this->tabPageUpcomingAppointments->Controls->Add(this->listBoxUpcomingAppointments);
			this->tabPageUpcomingAppointments->Location = System::Drawing::Point(4, 22);
			this->tabPageUpcomingAppointments->Name = L"tabPageUpcomingAppointments";
			this->tabPageUpcomingAppointments->Padding = System::Windows::Forms::Padding(3);
			this->tabPageUpcomingAppointments->Size = System::Drawing::Size(562, 401);
			this->tabPageUpcomingAppointments->TabIndex = 0;
			this->tabPageUpcomingAppointments->Text = L"Upcoming Appointments";
			this->tabPageUpcomingAppointments->UseVisualStyleBackColor = true;
			// 
			// listBoxUpcomingAppointments
			// 
			this->listBoxUpcomingAppointments->FormattingEnabled = true;
			this->listBoxUpcomingAppointments->Location = System::Drawing::Point(4, 4);
			this->listBoxUpcomingAppointments->Name = L"listBoxUpcomingAppointments";
			this->listBoxUpcomingAppointments->Size = System::Drawing::Size(552, 394);
			this->listBoxUpcomingAppointments->TabIndex = 0;
			// 
			// tabPagePastAppointments
			// 
			this->tabPagePastAppointments->Controls->Add(this->listBoxPastAppointments);
			this->tabPagePastAppointments->Location = System::Drawing::Point(4, 22);
			this->tabPagePastAppointments->Name = L"tabPagePastAppointments";
			this->tabPagePastAppointments->Padding = System::Windows::Forms::Padding(3);
			this->tabPagePastAppointments->Size = System::Drawing::Size(562, 401);
			this->tabPagePastAppointments->TabIndex = 1;
			this->tabPagePastAppointments->Text = L"Past Appointments";
			this->tabPagePastAppointments->UseVisualStyleBackColor = true;
			// 
			// listBoxPastAppointments
			// 
			this->listBoxPastAppointments->FormattingEnabled = true;
			this->listBoxPastAppointments->Location = System::Drawing::Point(5, 3);
			this->listBoxPastAppointments->Name = L"listBoxPastAppointments";
			this->listBoxPastAppointments->Size = System::Drawing::Size(552, 394);
			this->listBoxPastAppointments->TabIndex = 1;
			// 
			// ViewAppointments
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(594, 502);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip);
			this->Controls->Add(this->labelViewAppointment);
			this->Name = L"ViewAppointments";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Interactive Patient Information System (IPIMS) - Group 9";
			this->menuStrip->ResumeLayout(false);
			this->menuStrip->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPageUpcomingAppointments->ResumeLayout(false);
			this->tabPagePastAppointments->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void scheduleToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		IPIMS_Group9::ScheduleAppointment^ formScheduleAppt = gcnew ScheduleAppointment();
		this->Hide();
		formScheduleAppt->ShowDialog();
		this->Show();
	}
	private: System::Void updatePatientToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		IPIMS_Group9::UpdateHealthcareCondition^ formUpdateHealthcare = gcnew UpdateHealthcareCondition();
		this->Hide();
		formUpdateHealthcare->ShowDialog();
		this->Show();
	}

	};
}
