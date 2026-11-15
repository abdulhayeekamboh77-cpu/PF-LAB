/* Programmer: Abdul Hayee Kamboh
Roll No: 26K-0026
Section: BSAI-1A*/
#include <stdio.h>
#include <string.h>
struct PatientInfo 
{
    int patientId;
    char name[50];
    int age;
};
struct HospitalRecord 
{
    int admissionNumber;
    char department[30];
    struct PatientInfo patient;
};
int main() 
{
    struct HospitalRecord emergencyRecord;
    emergencyRecord.admissionNumber = 4021;
    strcpy(emergencyRecord.department, "Emergency & Trauma");
    emergencyRecord.patient.patientId = 108;
    strcpy(emergencyRecord.patient.name, "Jane Smith");
    emergencyRecord.patient.age = 32;
    struct HospitalRecord *ptr = &emergencyRecord;
  
    printf("-----------------------------------------\n");
    printf("       HOSPITAL EMERGENCY SYSTEM         \n");
    printf("-----------------------------------------\n");
    printf("Admission Number : %d\n", ptr->admissionNumber);
    printf("Department       : %s\n", ptr->department);
    printf("-----------------------------------------\n");
    printf("Patient ID       : %d\n", ptr->patient.patientId);
    printf("Patient Name     : %s\n", ptr->patient.name);
    printf("Patient Age      : %d years\n", ptr->patient.age);
    printf("-----------------------------------------\n");
    return 0;
}
