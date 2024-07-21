#include<iostream>
# include <string>
#include<conio.h>


using namespace std;
struct Management_t
{
    char name[20];
    char address[100];
    char contact[10];
    char age[5];
    char sex[8];
    char blood_gp[5];
    char disease_past[50];
    char id[15];
    char blood_gp1[5];
    char specialization1[50];
};

struct patient
{
    string name;
    int age;
    string problem;
    string  mobile_number;
    string address;
    string email;
};

void Welcome()
{
    //the welcome note
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                   WELCOME TO                                          |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                               * Fayoum Hospital *                                     |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
    cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
    system("pause");
    system("cls");

}

void welcomeManagement()
{
    // the welcome note

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                           HOSPITAL MANAGEMENT SYSTEM                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
    cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
    system("pause");
    system("cls");



    cout << "_____________________";
}

void Improtant_Information()
{
    // printing the improtant information                                 
    cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t       \n";
    cout << " \t\t\t\t\t                *****The Improtant Information*****\n\n";
    cout << "\t\t\t\t  ______________________________________________________________________ \n";
    cout << "\t\t\t\t |                                                                      |\n";
    cout << "\t\t\t\t |           & Specialties:- It has all specialties.                    |\n";
    cout << "\t\t\t\t |                                                                      |\n";
    cout << "\t\t\t\t |              & Address:- Saad Zagloul, Al-Masala, Fayoum.            |\n";
    cout << "\t\t\t\t |                                                                      |\n";
    cout << "\t\t\t\t |                & Hours of Operation:- Open 24 hours.                 |\n";
    cout << "\t\t\t\t |                                                                      |\n";
    cout << "\t\t\t\t |                  & Phone:- 048 1234666.                              |\n";
    cout << "\t\t\t\t   _____________________________________________________________________ \n";
    system("pause");
    system("cls");

}
//THE THE LAST SENTENCE
void thank()
{
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout << "\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                           		                                  |@@\n";
    cout << "\t\t\t\t\t@@|                                THANK YOU FOR USING                                    |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                             * Fayoum HOSPITAL SYSTEM *                                |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|                                                                                       |@@\n";
    cout << "\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
    cout << "\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
}

void History()
{
    // printing the some information about history 
    cout << "           ______________________________________________________________________    \n";
    cout << "          |                                                                      |   \n";
    cout << "          |                          * Fayoum Hospital *                         |    \n";
    cout << "          |_____________________________________________________________________ |    \n\n\n";

   

    cout << "***********************************************************************************************************" << endl;
    cout << "*                                     *  The hospital details  *                                          *" << endl;
    cout << "*                                                                                                         *" << endl;
    cout << "*    This hospital was opened as the best medical facility specialized in the field of medicine in 1981.  *" << endl;
    cout << "*                                                                                                         *" << endl;
    cout << "*    The hospital aims to be one of the main institutions in providing health care to all groups of people*" << endl;
    cout << "*                                                                                                         *" << endl;
    cout << "*    , whether at the local level or at the global level and the Middle East.                             *" << endl;
    cout << "*                                                                                                         *" << endl;
    cout << "*    hospital services : Emergency , Children's emergency , burn emergency , accident emergency  ,        *" << endl;
    cout << "*                                                                                                         *" << endl;
    cout << "*    Intensive care , Cardiac intensive care , Intensive care nurseries , blood bank , hemodialysis unit ,*" << endl;
    cout << "*                                                                                                         *" << endl;
    cout << "*    Radiation oncology , Chemotherapy , nuclear medicine , surgery .                                     *" << endl;
    cout << "*                                                                                                         *" << endl;
    cout << "***********************************************************************************************************" << endl;
    system("pause");
    system("cls");


}

void list_Archives_Doctor()
{//LIST OF DOCTORS
    cout << "1. Dr.Magdy Yacoub        *Heart disease*       *100 $*     & 0841236." << endl;
    cout << "2. Dr.Ibrahim             *pediatrician*        *100 $*     & 0843427." << endl;
    cout << "3. Dr.sayed ahmed         *internal medicine*   *100 $*     & 0847865." << endl;
    cout << "4. Dr.yahya nader         *orthopedist*         *100 $*     & 0847865." << endl;
    cout << "5. Dr.eman waled          *eye specialist*      *100 $*     & 0847865." << endl;
    cout << "6. Dr.ahmed Yacoub        *dentist*             *100 $*     & 0847865." << endl;
    cout << "7. Dr.Magdy omar          *nose and ear*        *100 $*     & 0847865." << endl;
    cout << "8. Dr.esraa nasser        *cencer*              *100 $*     & 0847865." << endl;
    cout << "9. Dr.abdelrahman nour    *Heart disease*       *100 $*     & 0847865." << endl;
    cout << "10. Dr.hazem ahmed        *dermatologist*       *100 $*     & 0847865." << endl;
}

void list_Doctor()
{
    cout << "1. Dr.Marwa               * surgery *             *150 $*     & 0841234." << endl;
    cout << "2. Dr.katy                * dentist *             *200 $*     & 0845753." << endl;
    cout << "3. Dr.Sayed               * nose and ear *        *140 $*     & 0843657." << endl;
    cout << "4. Dr.Nermeen             * eye *                 *165 $*     & 0846537." << endl;
    cout << "5. Dr.Ahlam               * Heart *               *250 $*     & 0842347." << endl;
    cout << "6. Dr.Yasmeen             * internal medicine *   *135 $*     & 0846547." << endl;
    cout << "7. Dr.Maher               * orthopedist *         *210 $*     & 0847869." << endl;
    cout << "8. DR.Eid                 * dermatologist *       *170 $*     & 0842356." << endl;
    cout << "9. Dr.Nouran              * pediatrician *        *140 $*     & 0847650." << endl;
    system("pause");
    system("cls");
}

void form_patient(patient& first_patient)
{//INFORMATION OF PATIENT 
    cout << "patient Name:  ";
    cin.ignore();
    getline(cin, first_patient.name);
    cout << "Patient age: ";
    cin >> first_patient.age;
    cout << "patient email: ";
    cin.ignore();
    getline(cin, first_patient.email);
    cout << "patient address: ";
    cin.ignore();
    getline(cin, first_patient.address);
    cout << "patient problem: ";
    cin.ignore();
    getline(cin, first_patient.problem);
    cout << "mobile_number: ";
    cin.ignore();
    getline(cin, first_patient.mobile_number);
    cout << "           *thank you*    \n  ";
    cout << "       ( " << first_patient.name << ")\n" << endl;
    system("pause");
    system("cls");

}

void Treatment_payment(patient n)
{
    //THE BOOKING MESSAGE

    cout << "         The patient's booking was successful      " << endl;

    cout << "         ********************************************************************* " << endl;
    cout << "         *                    Treatment payment      " << endl;
    cout << "         *                                 " << endl;
    cout << "         *            Patient Name    :  " << n.name << endl;
    cout << "         *                                   " << endl;
    cout << "         *                                    " << endl;
    cout << "         *            Patient problem :  " << n.problem << endl;
    cout << "         *                                 " << endl;
    cout << "         *                                 " << endl;
    cout << "         *            Treatment amount :  " << n.mobile_number << endl;
    cout << "         *                                   " << endl;
    cout << "         *                                    " << endl;
    cout << "         ********************************************************************* " << endl;
    system("pause");
    system("cls");
}

void doctors_list_Patient(int x)
{
    //EVERY DOCTOR HAS DATA FOR HIM
    string n;
    switch (x) {
    case 1:
    {
        cout << "             ____________________________________________________________" << endl;
        cout << "            |                        DR.Marwa                            |" << endl;
        cout << "            |               The medical specialty : surgery              |" << endl;
        cout << "            |               Appointments : Every day from 9 am to 3 pm   |" << endl;
        cout << "            |               Appointment booking price :150$              |" << endl;
        cout << "            | ___________________________________________________________| " << endl;
        system("pause");
        system("cls");
        break;
    }
    case 2:
    {
        cout << "             ____________________________________________________________" << endl;
        cout << "            |                        DR.katy                             |" << endl;
        cout << "            |               The medical specialty : 200              |" << endl;
        cout << "            |               Appointments : Every day from 10 am to 3 pm  |" << endl;
        cout << "            |               Appointment booking price :200$              |" << endl;
        cout << "            | ___________________________________________________________|" << endl;
        system("pause");
        system("cls");
        break;

    }
    case 3:
    {
        cout << "             ____________________________________________________________" << endl;
        cout << "            |                        DR.sayed                            |" << endl;
        cout << "            |               The medical specialty : nose and ear         |" << endl;
        cout << "            |               Appointments : Every day from 8 am to 2 pm   |" << endl;
        cout << "            |               Appointment booking price :140$              |" << endl;
        cout << "            | ___________________________________________________________|" << endl;
        system("pause");
        system("cls");
        break;

    }
    case 4:
    {
        cout << "             ____________________________________________________________" << endl;
        cout << "            |                        DR.nermeen                           |" << endl;
        cout << "            |               The medical specialty : eye specialist       |" << endl;
        cout << "            |               Appointments : Every day from 8:30 am to 1 pm|" << endl;
        cout << "            |               Appointment booking price :165$              |" << endl;
        cout << "            | ___________________________________________________________|" << endl;
        system("pause");
        system("cls");
        break;

    }
    case 5:
    {
        cout << "             ____________________________________________________________" << endl;
        cout << "            |                        DR.ahlam                            |" << endl;
        cout << "            |               The medical specialty :  Heart disease       |" << endl;
        cout << "            |               Appointments : Every day from 12 am to 6 pm  |" << endl;
        cout << "            |               Appointment booking price :250$              |" << endl;
        cout << "            | ___________________________________________________________|" << endl;
        system("pause");
        system("cls");
        break;

    }
    case 6:
    {
        cout << "             ____________________________________________________________" << endl;
        cout << "            |                        DR.Yasmeen                          |" << endl;
        cout << "            |               The medical specialty : internal medicine    |" << endl;
        cout << "            |               Appointments : Every day from 9 am to 4 pm   |" << endl;
        cout << "            |               Appointment booking price :135$              |" << endl;
        cout << "            | ___________________________________________________________|" << endl;
        system("pause");
        system("cls");
        break;

    }
    case 7:
    {
        cout << "             ____________________________________________________________" << endl;
        cout << "            |                        DR.Maher                            |" << endl;
        cout << "            |               The medical specialty : orthopedist          |" << endl;
        cout << "            |               Appointments : Every day from 11 am to 7 pm  |" << endl;
        cout << "            |               Appointment booking price :210$              |" << endl;
        cout << "            | ___________________________________________________________|" << endl;
        system("pause");
        system("cls");
        break;

    }
    case 8:
    {
        cout << "             ____________________________________________________________" << endl;
        cout << "            |                        DR.Eid                              |" << endl;
        cout << "            |               The medical specialty : dermatologist        |" << endl;
        cout << "            |               Appointments : Every day from 10 am to 5 pm  |" << endl;
        cout << "            |               Appointment booking price :170$              |" << endl;
        cout << "            | ___________________________________________________________|" << endl;
        system("pause");
        system("cls");
        break;

    }
    case 9:
    {
        cout << "             _____________________________________________________________" << endl;
        cout << "            |                        DR.nouran                            |" << endl;
        cout << "            |               The medical specialty : pediatrician          |" << endl;
        cout << "            |               Appointments : Every day from 10:15 am to 4 pm|" << endl;
        cout << "            |               Appointment booking price :140$               |" << endl;
        cout << "            | ____________________________________________________________|" << endl;
        system("pause");
        system("cls");
        break;

    }


    }
}

void Management()
{
    int n = 1, m = 0;
    Management_t* l;
    l = new  Management_t[n];
    Management_t* p;
    p = new  Management_t[m];

    welcomeManagement();
    int i;

    //giving option to the user for their choice
b:
    cout << "\t\t\t\t\t\t\t\    ------------------------------------------------------------------\n";
    cout << "\t\t\t\t\t\t\t\t\t|                                                                    |\n";
    cout << "\t\t\t\t\t\t\t\t\t|                                                                    |\n";
    cout << "\t\t\t\t\t\t\t\t\t|              1/  Add DOCTOR .                                      |\n";
    cout << "\t\t\t\t\t\t\t\t\t|              2/  ADD a NEW PATIENT.                                |\n";
    cout << "\t\t\t\t\t\t\t\t\t|              3/  SHOW THE LIST OF PATIENTS.                        |\n";
    cout << "\t\t\t\t\t\t\t\t\t|              4/  SHOW THE  INFORMATION ABOUT ARCHIVES DOCTORs      |\n";
    cout << "\t\t\t\t\t\t\t\t\t|              5/  SHOW THE  INFORMATION ABOUT ADDED DOCTORs         |\n";
    cout << "\t\t\t\t\t\t\t\t\t|              6/  THE NUMBER OF AVALIABLE BEDROOMS.                 |\n";
    cout << "\t\t\t\t\t\t\t\t\t|              7/  EXIST.                                            |\n";
    cout << "\t\t\t\t\t\t\t\t\t|                                                                    |\n";
    cout << "\t\t\t\t\t\t\t\t\t|____________________________________________________________________|\n" << endl;
        a:cout << "\t\t\t\t\t\t\t\t\t\Enter your choice: ";cin >> i;
    if (i > 7 || i < 1) { cout << "\n\n\t\t\t\t\t\tInvalid Choice\n";cout << "\t\t\t\t\t\tTry again...........\n\n";goto a; }
    //if inputed choice is other than given choice

    system("cls");

    if (i == 1)
    {
        //DYNAMIC ALLOCATION TO TAKE THE SIZE FROM USER AND MANAGEMENT SYSTEM
        cout << "               ---------------------------------------------------------------------\n";
        cout << "             |                                                                      |\n";
        cout << "             |                          *Enter The Number OF DOCTORS*              |\n";
        cout << "               --------------------------------------------------------------------- \n";
        cin >> n;
        system("pause");
        system("cls");
        for (int i = 0;i < n;i++)
        {
            cout << "               ---------------------------------------------------------------------\n";
            cout << "             |                                                                      |\n";
            cout << "             |                          *THE INFORMATION OF ADDED DOCTORS*          |\n";
            cout << "               --------------------------------------------------------------------- \n";





            // cout << "*********Enter the information of Add_doctor********" << endl;
            cout << "Enter the information of doctors (" << i + 1 << ")" << endl;
            cout << "_____________________________________________" << endl;
            cout << "Enter the name of DOCTOR :" << endl;
            cin.ignore();
            cin.get(l[i].name, 100);
            cout << "Enter the sex of DOCTOR :" << endl;
            cin.ignore();
            cin.get(l[i].sex, 100);
            cout << "Address:" << endl;
            cin.ignore();
            cin.get(l[i].address, 100);
            cout << "Contact number: " << endl;
            cin.ignore();
            cin.get(l[i].contact, 30);

            cout << "Salary of doctor " << endl;

            cin >> l[i].blood_gp1;
            cout << "Doctor's specialization" << endl;
            cin >> l[i].specialization1;
            cout << "Doctor  ID : " << endl;
            cin >> l[i].id;
        }
        system("pause");
        system("cls");
        goto b;


    }






    else if (i == 2)
    {
        cout << "               ---------------------------------------------------------------------\n";
        cout << "             |                                                                      |\n";
        cout << "             |                          *Enter The Number OF PATIENTS *             |\n";
        cout << "               --------------------------------------------------------------------- \n";
        cout << "* the number of patients * ";
        cin >> m;
        system("pause");
        system("cls");

        for (int i = 0; i < m;i++) {

            cout << "\n***********************\n" << "Patient_info" << "\n***********************\n\n";//fn1353 st
            cout << "\n Enter the name of patient  : ";

            cin.ignore();
            cin.get(p[i].name, 100);

            cout << "\n Enter the Address  of patient : ";
            cin.ignore();
            cin.get(p[i].address, 100);
            cout << "\n Enter the Contact Number of patient  : ";
            cin.ignore();
            cin.get(p[i].contact, 100);
            cout << "\n Enter the Age of patient  : ";
            cin >> p[i].age;
            cout << "\n Enter the Sex  of patient : ";
            cin.ignore();
            cin.get(p[i].sex, 100);
            cout << "\n Enter the Blood Group  of patient :";
            cin >> p[i].blood_gp;
            cout << "\n Enter Any Major disease suffered earlier : ";
            cin.ignore();
            cin.get(p[i].disease_past, 100);
            cout << "\n Enter Patient ID : ";
            cin >> p[i].id;
            cout << "\nInformation Saved Successfully\n";
        }
        cout << "\n\n";
        system("pause");
        system("cls");
        goto b;
    }





    else if (i == 3)
    {
        cout << "**Patient Records**" << endl;
        for (int i = 0; i < m;i++) {
            cout << "\n THE NUMBER OF PATIENT :" << i + 1 << endl;
            cout << "          ~ Name:" << p[i].name << endl;
            cout << "          ~ sex :" << p[i].sex << endl;
            cout << "          ~ Address:" << p[i].address << endl;
            cout << "          ~ Contact number  :" << p[i].contact << endl;
            cout << "          ~ Blood Group: " << p[i].blood_gp << endl;
            cout << "          ~ Any Major disease suffered earlier :" << p[i].disease_past << endl;
            cout << "          ~ patient_id: " << p[i].id << endl;
        }

        cout << "\n\n";
        system("pause");
        system("cls");
        goto b;
    }


    else if (i == 4)
    {
        cout << "           *ARCHIVES *  \n\n";
        cout << "   **List of Doctors **" << endl;
        list_Archives_Doctor();
        cout << "\n\n";
        system("pause");
        system("cls");
        goto b;
    }
    else if (i == 5)
    {
        cout << "           *Registered of Doctors* \n\n";
        list_Doctor();
        cout << "   **List of Add_Doctors **" << endl;
        for (int i = 0; i < n;i++)
        {
            cout << i + 11 << "." << l[i].name << ".       *" << l[i].specialization1 << "*          *" << l[i].blood_gp1 << "$*         *" << l[i].contact << "*\n";

        }

        cout << "\n\n";
        system("pause");
        system("cls");
        goto b;
    }

    else if (i == 6) {

        cout << " \t\t\t\TheNnumber of All the Bedrooms in Hospital are * 500 * " << endl;
        cout << "             ___________________________________________________________________________" << endl;
        cout << "            |                                                                          |" << endl;
        cout << "            |                                                                          |" << endl;
        cout << "            |        &&&&THE NUMBER OF AVALIABLE BEDROOMS are&&&&: " << (500 - m) << "   | " << endl;
        cout << "            |                                                                          |" << endl;
        cout << "            | ________________________________________________________________________ |" << endl;





        cout << "\n\n";
        system("pause");
        system("cls");
        goto b;
    }




    //Exiting Through the system with a Thank You note........................option 7
    else if (i == 7)
    {
        thank();
    }
    cout << "\n";

}

void Patient()
{
    patient first_patient;
    int option, g;
    int i;

    //giving option to the user for their choice
c:

    cout << "         ********************************************************************* " << endl;
    cout << "         *   \n";
    cout << "         *    1-Emergency seat booking \n ";
    cout << "        *    2-Treatment payment \n ";
    cout << "        *    3-choose the doctor you need to book with him     \n  ";
    cout << "       *    4-Exit        \n";
    cout << "         *  \n";
    cout << "         ********************************************************************* " << endl;
d:cout << "\t\t\t\t\t\tEnter your choice: ";cin >> option;
    if (option > 7 || option < 1) { cout << "\n\n\t\t\t\t\t\tInvalid Choice\n";cout << "\t\t\t\t\t\tTry again...........\n\n";goto d; } //if inputed choice is other than given choice
    system("cls");
    if (option == 1)
    {
        form_patient(first_patient);
        system("pause");
        system("cls");
        goto c;
    }
    else if (option == 2)
    {
        Treatment_payment(first_patient);
        system("pause");
        system("cls");
        goto c;
    }
    else if (option == 3)
    {
        cout << "1. Dr.Marwa               * surgery *             *150 $*     & 0841234." << endl;
        cout << "2. Dr.katy                * dentist *             *200 $*     & 0845753." << endl;
        cout << "3. Dr.Sayed               * nose and ear *        *140 $*     & 0843657." << endl;
        cout << "4. Dr.Nermeen             * eye *                 *165 $*     & 0846537." << endl;
        cout << "5. Dr.Ahlam               * Heart *               *250 $*     & 0842347." << endl;
        cout << "6. Dr.Yasmeen             * internal medicine *   *135 $*     & 0846547." << endl;
        cout << "7. Dr.Maher               * orthopedist *         *210 $*     & 0847869." << endl;
        cout << "8. DR.Eid                 * dermatologist *       *170 $*     & 0842356." << endl;
        cout << "9. Dr.Nouran              * pediatrician *        *140 $*     & 0847650." << endl;

        cout << "\n\n\n";
        cout << "               ---------------------------------------------------------------------\n";
        cout << "             |                                                                      |\n";
        cout << "             |                          *Enter the choise*                          |\n";
        cout << "               --------------------------------------------------------------------- \n";
        cin >> g;
        system("pause");
        system("cls");
        doctors_list_Patient(g);
        system("pause");
        system("cls");
        goto c;

    }
    else if (option == 4)
    {
        int n, e = 1;
        string opinion;
        while (e == 1)
        {
            cout << "      # Can you rate us ?\n";
            cout << "1.*  | 2.**   | 3.***   |4.****  | 5.*****  " << endl;
            cin >> n;
            if (n == 1 || n == 2)
            {
                cout << "     #Can you tell us your feedback on the services?" << endl;
                cin.ignore();
                getline(cin, opinion);
                cout << "                    *Thank you for your rating*   " << endl;
                e = 0;
                system("pause");
                system("cls");

            }
            else if (n == 3 || n == 4 || n == 5)
            {
                cout << "Thank you for your rating " << endl;
                e = 0;
                system("pause");
                system("cls");
            }

            else
            {
                cout << "Enter the correct answer , please " << endl;
            }
        }
    } thank();

}

int main()
{
    string C, A = "yes";
    Welcome();
    Improtant_Information();

    while ((A == "Yes") || (A == "YES") || (A == "yes"))
    {
        cout << "               ---------------------------------------------------------------------\n";
        cout << "             |                                                                      |\n";
        cout << "             |                          *Enter the choise*                          |\n";
        cout << "               --------------------------------------------------------------------- \n";
        cout << "  # The History\n";
        cout << "  # The Management \n";
        cout << "  # The Patient\n";
        cin >> C;
        system("pause");
        system("cls");
        if (C == "History")
        {
            History();
        }
        else if (C == "Management")
        {
            string a;
            cout << "         * Enter The PassWord *\n";
            cin >> a;
            if (a == "GHS")
                Management();
            else
            {
                cout << "       * The PassWord is not correct *\n";
                cout << "       # Enter again.\n";
                cin >> a;
                if (a == "GHS")
                    Management();
                else
                    cout << "       * The PassWord is not correct *\n\a\a\a";
            }
        }
        else if (C == "Patient")
        {
            Patient();
        }
        cout << "\n\n\n\n";
        cout << "\t\t\t\t\t\t  *You Want choice again (Yes or No)*\n";
        cin >> A;
        system("pause");
        system("cls");
    }

    return 0;

}


