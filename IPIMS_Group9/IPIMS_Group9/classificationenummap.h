#include <map>
#include <string>

enum classificationType{ patient, doctor, nurse, officeStaff, labStaff , researchStaff};
struct classificationMap : std::map<unsigned int, std::string>
{
	classificationMap()
	{
		this->operator[](patient) = "Patient";
		this->operator[](doctor) = "Doctor";
		this->operator[](nurse) = "Nurse";
		this->operator[](officeStaff) = "Office Staff";
		this->operator[](labStaff) = "Lab Staff";
		this->operator[](researchStaff) = "Research Staff";
	};
	~classificationMap(){};
};