#include "EditProfile.h"
#include "EmergencyAlert.h"
#include "EPrescription.h"
#include "LoggingIn.h"
#include "PatientSearch.h"
#include "Registration.h"
#include "ScheduleAppointment.h"
#include "UpdateHealthcareCondition.h"
#include "ViewAppointments.h"
#include "Welcome.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	IPIMS_Group9::Registration formRegistration;
	Application::Run(%formRegistration);

	IPIMS_Group9::LoggingIn formLoggingIn;
	Application::Run(%formLoggingIn);

	IPIMS_Group9::ScheduleAppointment formScheduleAppointment;
	Application::Run(%formScheduleAppointment);

	IPIMS_Group9::ViewAppointments formViewAppointments;
	Application::Run(%formViewAppointments);

	IPIMS_Group9::UpdateHealthcareCondition formUpdateHealthcareCondition;
	Application::Run(%formUpdateHealthcareCondition);

	IPIMS_Group9::EmergencyAlert formEmergencyAlert;
	Application::Run(%formEmergencyAlert);

	/*
	IPIMS_Group9::PatientSearch formPatientSearch;
	Application::Run(%formPatientSearch);

	IPIMS_Group9::EditProfile formEditProfile;
	Application::Run(%formEditProfile);

	IPIMS_Group9::Welcome formWelcome;
	Application::Run(%formWelcome);
	
	IPIMS_Group9::EPrescription formEPrescription;
	Application::Run(%formEPrescription);
	*/
}