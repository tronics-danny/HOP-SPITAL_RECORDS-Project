#include<iostream>
#include<string.h>
#include<sstream>
#include<fstream>

using namespace std;


void Main_menu();

class Landing_page
{
public:
    Landing_page()
    {
        Main_menu();
    }

};

class Registration_page
{
public:
   string First_Name,Last_Name,Email,Password,Id;
    

    void regis()
    {
        system("cls");
        cout<<"\t\t\t________________________________________________\n\n"<<endl;
        cout<<"\t\t\t           HOPE HOSPITAL RECORDS              \n\n\n"<<endl;
        cout<<"\t\t\t     WELCOME TO THE REGISTRATION PAGE\n\n"<<endl;
        cout<<"\t\t\t_____________                 __________________\n\n"<<endl;
        cout<<"                                                       \n\n"<<endl;
        cout<<"\t\tPlease enter your details below \n"<<endl;
        
        fstream Reg_file;
        Reg_file.open("registration_file.txt", ios::app); //writing into a file in append mode
        if (Reg_file.is_open())
        {
            cout<<"\t\tFIRST NAME     : ";
            cin>>First_Name;
            Reg_file<<"USER NAME : ";
            Reg_file<<First_Name;
            cout<<"\t\tLAST NAME      : ";
            cin>>Last_Name;
            Reg_file<<" "<<Last_Name;
            cout<<"\t\tEMAIL          : ";
            cin>>Email;
            Reg_file<<"\nUSER EMAIL: ";
            Reg_file<<Email;
            cout<<"\t\tID No.         : ";
            cin>>Id;
            Reg_file<<"\nUSER ID   : ";
            Reg_file<<Id;
            cout<<"\t\tPASSWORD       : ";
            cin>>Password;
            Reg_file<<"\nPASSWORD  : ";
            Reg_file<<Password<<endl;

            Reg_file.close();

        }

        
        cout<<endl; 
    }
    void designation()
        {
            static int choice_reg;
        
            cout<<"\t\tKindly choose designation below.  "<<endl;
            cout<<"\t\t\t1. Doctor "<<endl;
            cout<<"\t\t\t2. Pharmacist "<<endl;
            cout<<"\t\t\t3. Nurse "<<endl;
            cout<<"\t\t\t4. Support staff "<<endl;
            cout<<"\t\tEnter your choice here :  ";
            cin>>choice_reg;

                fstream Reg_file;
                switch (choice_reg)
                {
                    case 1:
                        Reg_file.open("registration_file.txt", ios::app);
                        if(Reg_file.is_open())
                        {
                            Reg_file<<"DESIGNATION : Doctor";
                        }Reg_file.close();
                            static int choice_d;
                                    
                            cout<<"\n\n\t\tKindly choose Specialization below "<<endl;
                            cout<<"\t\t\t1. Dentist "<<endl;
                            cout<<"\t\t\t2. Ophthalmologist "<<endl;
                            cout<<"\t\t\t3. Gynaecologist "<<endl;
                            cout<<"\t\t\t4. Primary Care Physician (PCP) "<<endl;
                            cout<<"\t\tEnter your choice here :  ";
                            cin>>choice_d;
                            cout<<endl;

                            Reg_file.open("registration_file.txt", ios::app);
                            if(Reg_file.is_open())
                            {
                               if(choice_d==1)
                                {
                                    Reg_file<<"\n\tSPECIALTY : Dentist\n\n";
                                }
                                else if(choice_d==2)
                                {
                                    Reg_file<<"\n\tSPECIALTY : Ophthalmologist\n\n";
                                }
                                else if(choice_d==3)
                                {
                                    Reg_file<<"\n\tSPECIALTY : Gynaecologist\n\n";
                                }
                                else if(choice_d==4)
                                {
                                    Reg_file<<"\n\tSPECIALTY : Primary Care Physician (PCP)\n\n";
                                }
                                else
                                {
                                cout<<endl<<"\t\tKindly only choose from the options given. "<<endl;
                                designation(); 
                                } 
                            }Reg_file.close();
                                            
                            
                            if(choice_d==1)
                            {
                                system("cls");
                                cout<<"\t\t\tTHANK YOU FOR REGISTERING WITH THE HOPE HOSPITAL RECORDS\n"<<endl;
                                cout<<"\t\t\t           YOUR DETAILS ARE SAFE WITH US"<<endl;
                                
                                Main_menu();
                            }
                            else if (choice_d==2)
                            {
                                system("cls");
                                cout<<"\t\t\tTHANK YOU FOR REGISTERING WITH THE HOPE HOSPITAL RECORDS\n"<<endl;
                                cout<<"\t\t\t           YOUR DETAILS ARE SAFE WITH US"<<endl;
                                
                                Main_menu();
                            }
                            else if (choice_d==3)
                            {
                                system("cls");
                                cout<<"\t\t\tTHANK YOU FOR REGISTERING WITH THE HOPE HOSPITAL RECORDS\n"<<endl;
                                cout<<"\t\t\t           YOUR DETAILS ARE SAFE WITH US"<<endl;
                                
                                Main_menu();
                            }
                            else if (choice_d==4)
                            {
                                system("cls");
                                cout<<"\t\t\tTHANK YOU FOR REGISTERING WITH THE HOPE HOSPITAL RECORDS\n"<<endl;
                                cout<<"\t\t\t           YOUR DETAILS ARE SAFE WITH US"<<endl;
                                
                                Main_menu();
                            }
                            else
                            {
                                cout<<endl<<"\t\tKindly only choose from the options given. "<<endl;
                                designation();
                            }                                          
                    
                        break;   
                    case 2:
                        Reg_file.open("registration_file.txt", ios::app);
                        if(Reg_file.is_open())
                        {
                            Reg_file<<"DESIGNATION : Pharmacist\n\n";
                        }Reg_file.close();

                        system("cls");
                        cout<<"\t\t\tTHANK YOU FOR REGISTERING WITH THE HOPE HOSPITAL RECORDS\n"<<endl;
                        cout<<"\t\t\t           YOUR DETAILS ARE SAFE WITH US"<<endl;
                        
                        Main_menu();
                        break;
                    case 3:
                        Reg_file.open("registration_file.txt", ios::app);
                        if(Reg_file.is_open())
                        {
                            Reg_file<<"DESIGNATION : Nurse \n\n";
                        }Reg_file.close();

                        system("cls");
                        cout<<"\t\t\tTHANK YOU FOR REGISTERING WITH THE HOPE HOSPITAL RECORDS\n"<<endl;
                        cout<<"\t\t\t           YOUR DETAILS ARE SAFE WITH US"<<endl;
                        
                        Main_menu();
                        break;
                    case 4:
                        Reg_file.open("registration_file.txt", ios::app);
                        if(Reg_file.is_open())
                        {
                            Reg_file<<"DESIGNATION : Support Staff\n\n";
                        }Reg_file.close();

                        system("cls");
                        cout<<"\t\t\tTHANK YOU FOR REGISTERING WITH THE HOPE HOSPITAL RECORDS\n"<<endl;
                        cout<<"\t\t\t           YOUR DETAILS ARE SAFE WITH US"<<endl;
                        Main_menu();
                        break;
                    default:
                        system("cls");
                        cout<<"\t\t\tKindly only choose from the options given below"<<endl;
                        Main_menu();
                        
                }

               
            
        }  
};

class Sub_menu_page : public Registration_page
{
public:
    string Pf_Name, Pl_Name, Gender,Next_of_kin_name; 
    int Age, P_phone, Next_of_kin_phone,P_Id;
    string P_diagnostics, P_prescription, t_date;
    void Add_patient()
    {
        fstream Add_file;
        Add_file.open("patient_records.txt",ios::app);

        if(!Add_file.is_open())
        {
            system("cls");
            cout<<"\t\t\tSORRY, ERROR ACCESSING PATIENT RECORDS!!"<<endl;
            Main_menu();
        }
        else
        {
            cout<<"\t\tEnter Patient details below:";
            cout<<"\t\tFIRST NAME       : ";
            cin>>Pf_Name;
            Add_file<<"PATIENT NAME             : ";
            Add_file<<Pf_Name;
            cout<<"\t\tLAST NAME        : ";
            cin>>Pl_Name;
            Add_file<<" "<<Pl_Name;

            cout<<"\t\tID NUMBER        : ";
            cin>>P_Id;
            Add_file<<"\nID NUMBER              : ";
            Add_file<<P_Id;

            cout<<"\t\tGENDER           : ";
            cin>>Gender;
            Add_file<<"\nGENDER                 : ";
            Add_file<<Gender;

            cout<<"\t\tAGE               : ";
            cin>>Age;
            Add_file<<"\nAGE                    : ";
            Add_file<<Age;

            cout<<"\t\tPHONE NUMBER      : ";
            cin>>P_phone;
            Add_file<<"\nPHONE NUMBER           : ";
            Add_file<<P_phone;

            cout<<"\t\tNEXT OF KIN NAME  : ";
            cin>>Next_of_kin_name;
            Add_file<<"\nNEXT OF KIN NAME       : ";
            Add_file<<Next_of_kin_name;
            cout<<"\t\tNEXT OF KIN PHONE : ";
            cin>>Next_of_kin_phone;
            Add_file<<"\nNEXT OF KIN PHONE      : ";
            Add_file<<Next_of_kin_phone;

            cout<<"\t\tEnter Diagnostic details below.\n";
            cout<<"\t\tDESCRIBE SICKNESS :";
            getline(cin,P_diagnostics);
            Add_file<<"\nSICKNESS DESCRIPTION   : ";
            Add_file<<P_diagnostics;

            cout<<"\t\tPRESCRIPTION      :";
            getline(cin,P_prescription);
            Add_file<<"\nPRESCRIPTION           : ";
            Add_file<<P_prescription;

            cout<<"\t\tDATE OF TREATMENT :";
            getline(cin,t_date);
            Add_file<<"\nDATE OF TREATMENT      : ";
            Add_file<<t_date;


            Add_file.close();

        } 
    }


    void Acc_patient()
    {
        fstream Acc_file;
        Acc_file.open("patient_records.txt",ios::in);

        if(!Acc_file.is_open())
        {
            system("cls");
            cout<<"\t\t\tSORRY, ERROR ACCESSING PATIENT RECORDS!!"<<endl;
            Main_menu();
        }
        else
        {
            system("cls");
            cout<<"\t\t\t________________________________________________\n\n"<<endl;
            cout<<"\t\t\t            HOPE HOSPITAL RECORDS              \n\n\n"<<endl;
            cout<<"\t\t\t_____________                 __________________\n\n"<<endl;
            cout<<"                                                       \n\n"<<endl;
            string p_line;
            while(getline(Acc_file,p_line))
            {
                cout<<"\t\tTHE FOLLOWING SHOWS THE PATIENT RECORDS."<<endl;
                cout<<"\t\t\t\t"<<p_line<<endl;
            }
            Acc_file.close();            
        }

    }
    void Acc_staff()
    {
        fstream Reg_file;
        Reg_file.open("registration_file.txt",ios::in);

        if(!Reg_file.is_open())
        {
            system("cls");
            cout<<"\t\t\tSORRY, ERROR ACCESSING STAFF RECORDS!!"<<endl;
            Main_menu();
        }
        else
        {
            system("cls");
            cout<<"\t\t\t________________________________________________\n\n"<<endl;
            cout<<"\t\t\t            HOPE HOSPITAL RECORDS              \n\n\n"<<endl;
            cout<<"\t\t\t_____________                 __________________\n\n"<<endl;
            cout<<"                                                       \n\n"<<endl;
            string line;
            while(getline(Reg_file,line))
            {
                cout<<"\t\tThe following shows the list of Staff names and their designations"<<endl;
                cout<<"\t\t\t\t"<<line<<endl;
            }
            Reg_file.close();            
        }
            
    }
    void sub_menu()
    {
        static int choice_sm;
        system("cls");
        cout<<"\t\t\t________________________________________________\n\n"<<endl;
        cout<<"\t\t\t            HOPE HOSPITAL RECORDS              \n\n\n"<<endl;
        cout<<"\t\t\t_____________                 __________________\n\n"<<endl;
        cout<<"                                                       \n\n"<<endl;
        cout<<"\t\t\t1. Add Patient records. \n"<<endl;
        cout<<"\t\t\t2. Access Patient records. \n"<<endl;
        cout<<"\t\t\t3. Access staff records. \n"<<endl;
        cout<<"\t\t\t4. EXIT. \n\n"<<endl;
        cout<<"\t\tEnter choice here :  \n"<<endl;
        cin>>choice_sm;

        switch(choice_sm)
        {
            case 1:
            {
                Add_patient();
                break;
            }
            case 2:
            {
                Acc_patient();
                break;
            }
            case 3:
            {
                Acc_staff();
                break;
            }
            case 4:
            {
                Main_menu();
                break;
            }
            default:
            {
                cout<<"Kindly enter a valid choice."<<endl;
                sub_menu();

            }
        }


    }
    
};

class Login_page: public Registration_page
{
public:
    void login()
    {
        string email, pass, user_em, user_pass;
        system("cls");
        cout<<"\t\t\t________________________________________________\n\n"<<endl;
        cout<<"\t\t\t            HOPE HOSPITAL RECORDS              \n\n\n"<<endl;
        cout<<"\t\t\t         WELCOME TO THE LOGIN PAGE\n\n"<<endl;
        cout<<"\t\t\t_____________                 __________________\n\n"<<endl;
        cout<<"\t\tPlease enter your login details below. \n"<<endl;
        cout<<"\t\tEMAIL     : ";
        cin>>email;
        cout<<"\t\tPASSWORD  : ";
        cin>>pass;
        //(Password and email authentication at this point )

            int count;
            fstream Reg_file;
            Reg_file.open("registration_file.txt", ios::in);//Read mode from the file

            while(Reg_file>>user_em>>user_pass)
            {
                if(user_em==email && user_pass==pass)
                {
                    count=1;
                }

            }
            Reg_file.close();
            
            if(count==1)
            {
                system("cls");
                cout<<email<<"\n\t\t\tCONGRATULATIONS!!! YOUR LOGIN IS SUCCESSFUL. \n THANK YOU FOR LOGGING IN.\n";
                Sub_menu_page sub;
                sub.sub_menu();
                
            }
            else
            {
                system("cls");
                cout<<"\n\t\t\tSORRY, LOGIN ERROR. \n\t\t\tKINDLY CHECK YOUR LOGIN EMAIL OR PASSWORD."<<endl;
                Main_menu();
            }
            
        static int choice_f;

        cout<<"\n\n\t\tForgot your password? Not registered?"<<endl;
        cout<<"\t\tKindly select from below:"<<endl;
        cout<<"\t\t\t1. Forgot Password"<<endl;
        cout<<"\t\t\t2. Register"<<endl;
        cout<<"\t\t\t3. EXIT"<<endl;
        cout<<"\t\tEnter your choice : ";
        cin>>choice_f;
        cout<<endl;

        switch(choice_f)
        {
            case 1:

            break;
            case 2:

            break;
            case 3:

            break;
            default:
            break;           
        }
    }
};

void Main_menu()
{
    static  int choice;

    cout<<"\t\t\t________________________________________________\n\n"<<endl;
    cout<<"\t\t\t           HOPE HOSPITAL RECORDS              \n\n\n"<<endl;
    cout<<"\t\t\t         WELCOME TO THE LOGIN PAGE              \n\n"<<endl;
    cout<<"\t\t\t                   MENU                           \n"<<endl;
    cout<<"\t\t\t_____________                 __________________\n\n"<<endl;
    cout<<"                                                       \n\n"<<endl;
    cout<<"\t| Press 1 to LOGIN                            |"<<endl;
    cout<<"\t| Press 2 to REGISTER                         |"<<endl;
    cout<<"\t| Press 3 to EXIT                             |"<<endl;
    cout<<"\n\t\t Please Enter your choice : ";
    cin>>choice;
    cout<<endl;

        Registration_page rp;
        Registration_page des;
        Login_page lp;  

        switch(choice)
        {
            case 1:
                lp.login();
                break;
            case 2:
                rp.regis();
                des.designation();
                break;
            case 3:
                system("cls");
                cout<<"\t\t\t Thank You!";
                break;
            default:
                system("cls");
                cout<<"\t\t\t Please Select from the options given below!!! \n"<<endl;
                Main_menu();
        }
}


int main()
{
    
    Landing_page main_p;

    system("pause>null");
}

