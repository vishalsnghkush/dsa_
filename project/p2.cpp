/*
You are required to implement a simplified hospital management system in c++ to manage
patients, doctor and their appointments. The system should allow adding new 

patients and doctors scheduling appointment , and viewing the detail of patients ,
doctors abd scheduled appointment.

1. Add patient  -> Name ,Age ,Gender,ID -> Because the name can be identical
2. Add Doctor   -> Name ,Age ,Gender,ID -> Because the name can be identical
3. Scheduld Appointment -> Patient ID,Doctor ID, DATE
4. View Patients  -> Print all the Patients -> Store them
5. View Doctors   -> Print all the Doctors -> Store them
6. View Appointement ->Print all the Appointmnets -> Store them
0. Exit


Patient -> name age gender

*/

#include<bits/stdc++.h>
using namespace std;

int patID; // patient ID
int docID; // doctor ID
class Patient{
    public:
    string name;
    string gender;
    int age;
    int ID;
    Patient(string name,int age,string gender){
        ID=patID;
        patID++;
        this->age=age;
        this->gender=gender;
        this->name=name;
    }
};

class Doctor{
    public:
    string name;
    string gender;
    int age;
    int ID;
    Doctor(string name,int age,string gender){
        ID=docID;
        patID++;
        this->age=age;
        this->gender=gender;
        this->name=name;
    }
};

class Appointment{
public:    
    int patientID;
    int DoctorID;
    string Date;
Appointment(int p,int d,string date){
    Date=date;
    patientID=p;
    DoctorID=d;
}    
};
vector<Patient>allPatients; // to store all the patient
vector<Doctor>allDoctors;
vector<Appointment>allAppointments;

bool isPatientPresent(int id){
    bool ans=false;
    for(int i=0;i<allPatients.size();i++){
        if(allPatients[i].ID==id) ans=true;
    }
    return ans;
}

bool isDoctorPresent(int id){
    bool ans=false;
    for(int i=0;i<allDoctors.size();i++){
        if(allDoctors[i].ID==id) ans=true;
    }
    return ans;
}


void addpatient(){
    string n,g;
    int a;
   
    cout<<"Give the Patient Name : "<<endl;
    cin>>n;
    cout<<"Give the Patient Age : "<<endl;
    cin>>a;
    cout<<"Give the Patient Gender : "<<endl;
    cin>>g;
    Patient temp(n,a,g);
    allPatients.push_back(temp);
}

void addDoctor(){
    string n,g;
    int a;
   
    cout<<"Give the Doctor Name : "<<endl;
    cin>>n;
    cout<<"Give the Doctor Age : "<<endl;
    cin>>a;
    cout<<"Give the Doctor Gender : "<<endl;
    cin>>g;
    Doctor temp(n,a,g);
    allDoctors.push_back(temp);
}

void ScheduleAppointment(){
    int patientID;
    int DoctorID;
    string Date;
    cout<<"Give the Patient ID : "<<endl;
    cin>>patientID;

    cout<<"Give the Doctor ID : "<<endl;
    cin>>DoctorID;

    cout<<"Give the Date(DD-MM-YYYY) : "<<endl;
    cin>>Date;


    if(isPatientPresent(patientID)==false || isDoctorPresent(DoctorID)==false){
        cout<<" Either of Patient ID or Doctor ID is invalid ! "<<endl;
        cout<<" Appotinent Scheduled is Unsuccessful  ! "<<endl;
    }

    Appointment temp(patientID,DoctorID,Date);
    allAppointments.push_back(temp);
}

void viewpatient(){
    for(int i=0;i<allPatients.size();i++){
        cout<<"Patient Name :-> "<<allPatients[i].name<<endl;
        cout<<"Patient Age :-> "<<allPatients[i].age<<endl;
        cout<<"Patient Gender :-> "<<allPatients[i].gender<<endl;
        cout<<"Patient ID :-> "<<allPatients[i].ID<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void viewDoctor(){
    for(int i=0;i<allDoctors.size();i++){
        cout<<"Doctor Name :-> "<<allDoctors[i].name<<endl;
        cout<<"Doctor Age :-> "<<allDoctors[i].age<<endl;
        cout<<"Doctor Gender :-> "<<allDoctors[i].gender<<endl;
        cout<<"Doctor ID :-> "<<allDoctors[i].ID<<endl;
    }
    cout<<endl;
    cout<<endl;
}

void viewAppointment(){
    for(int i=0;i<allAppointments.size();i++){
        cout<<"Patient Id :-> "<<allAppointments[i].patientID<<
        "has appointed with Doctor Id ->"<<allAppointments[i].DoctorID<<
        "on Date -> "<<allAppointments[i].Date<<endl;
    }
    cout<<endl;
    cout<<endl;

}


int main(){
    patID=1;
    docID=1;
    int choice;
    do{
        cout<<" 1. Add patient "<<endl; 
        cout<<" 2. Add Doctor  "<<endl;
        cout<<" 3. Scheduld Appointment" <<endl;
        cout<<" 4. View Patients " <<endl;
        cout<<" 5. View Doctors"<<endl;
        cout<<" 6. View Appointement "<<endl;
        cout<<" 0. Exit "<<endl;
        cout<<" Plz Give your choice "<<endl;
        cin>>choice;

        switch(choice){
        case 1:
            addpatient();
            break;

        case 2:
            addDoctor();
            break;
            
        case 3:
            ScheduleAppointment();
            break; 
        
        case 4:
            viewpatient();
            break;
          
        case 5:
            viewDoctor();
            break;

        case 6: 
            viewAppointment();
            break;   
        default :
            cout<<"Invalid Choice !"<<endl; 
            cout<<endl;
            cout<<endl;

    }
}
    while(choice!=0);
    return 0;
}