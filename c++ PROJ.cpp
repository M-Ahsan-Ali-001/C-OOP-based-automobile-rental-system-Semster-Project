#include<iostream>
#include<stdlib.h>
using namespace std;
int mehraan = 0, m, Name = 0, Id = 0, Password = 0, Coroalla = 0, hhonda = 0, 
Ssuzuki = 0, LLoader = 0, TRUCK = 0, CD = 0, zz = 0, kg = 0, l, mn, bb;
string namee,nnn,ddt;
class Car_rental
{
public:
string name[99], nm, detail[99];
string gg;
int id[99], password[99], I, P;
public:
string nam;
virtual void id_password() = 0;
virtual void mehran() {}
virtual void corolla() {}
virtual void HONDA() {}
virtual void Suzuki() {}
virtual void loader() {}
virtual void truck() {}
virtual void bikee() {}
virtual void display_info() {}
virtual void Delete_detial() {}
};
class Cars :public Car_rental
{
public:
int opt;
string Mehhran[6] = { {"White 2013 HF-765"},{"Red 2001 HK-900"}, 
{"Black 2002 FG-566"},{"GREY 2019 KL-190"},{"White 2020 pp-098"},{"Green 2006 u-100"} };
string ccorrolla[5] = { {"White GLI 2013 Er-765"},{"Red XLI 2002 FF991"}, {"Black GRANDE 2002 FG-566"},{"GREY Camre 2019 KkL890"},{"White AXIO 2020 LL-008"} };
string Honda[4] = { {"White Civic 2007 Er-765"},{"Red City 2007 FF991"}, {"Black Reborn 2012 FG-566"},{"GREY Go 2019 KkL-890"} };
string ssuzuki[3] = { {"White Wagon-R 2020 Er-765"},{"Red Vitz 2007 FF-991"}, {"Black Cultus 2012 FG-566"} };
void id_password()
{
lp:
cout << "1) login\t2)signup\n Select one option: ";
cin >> opt;
switch (opt)
{
case 2:
{
int check = 0;
cout << "\n-----------------------------------\n";
cout << "Sign UP HERE ::>\n";
cout << "Enter username :";
cin >> nm;
cout << "Enter id number :";
cin >> id[Id];
cout << "Enter password :";
cin >> password[Password];
la:
for (int i = 0; i < 99; i++)
{
if (nm == name[i])
{
check = 1;
kg = i;
}
}
if (check == 1)
{
cout << "\n Sorry This username aleardy taken, please try a new one with @,$,^,% etc:\n Re-Enter username:";
cin >> nnn;
nm = nnn;
check = 0;
goto la;
}
else
{
//cout << "\n name:"<<nm<<endl;
name[Name] = nm;
cout << "Your Id has been made!";
cout << 
"\n*************************************\n";
namee = nm;
nam = nm;
}
Name++;
Id++;
Password++;
break;
}
case 1:
{
cout << "Login HERE ::>\n";
int z = 0;
cout << "Enter username:";
cin >> nm;
cout << "Enter password:";
cin >> P;
namee = nm;
nam = nm;
for (int i = 0; i < 99; i++)
{
if (nm == name[i] && P == password[i])
{
z = 1;
}
}
if (z == 1)
{
cout << "\nLogin Successfully!\n";
}
else
{
cout << "\nWrong Username or password!\n";
goto lp;
}
}
break;
default:
exit(0);
}
}//id_password ends here
void display_info()
{
int store;
for (int i = 0; i < 99; i++)
{
if (namee == name[i])
{
store = i;
}
}
cout << "\n********************************\n";
cout << "Your Information is Given Below:\n";
cout << "Name: " << name[store] << endl;
cout << "ID: " << id[store] << endl;
cout << "password:" << password[store];
cout << "\nCar Detail:\n" << detail[store] << endl;
cout << "\n********************************\n";
}
void Delete_detial()
{
int store;
for (int i = 0; i < 99; i++)
{
if (namee == name[i])
{
store = i;
}
}
if (detail[store] == "White 2013 HF - 765"||detail[store]== 
"Red 2001 HK-900" || detail[store] == "GREY 2019 KL - 190" || detail[store] == 
"White 2020 pp-098" || detail[store] == "Green 2006 u-100")
{
mehraan--;
}
else if (detail[store] == "White GLI 2013 Er-765" || detail[store] == 
"Red XLI 2002 FF-991" || detail[store] == "Black GRANDE 2002 FG-566" || 
detail[store] == "GREY Camre 2019 KkL-890" || detail[store] == "White AXIO 2020 LL-008")
{
Coroalla--;
}
else if (detail[store] == "White Civic 2007 Er-765" || detail[store] == 
"Red City 2007 FF-991" || detail[store] == "Black Reborn 2012 FG-566" || 
detail[store] == "GREY Go 2019 KkL-890")
{
hhonda--;
}
else if (detail[store] == "White Wagon-R 2020 Er-765" || 
detail[store] == "Red Vitz 2007 FF-991" || detail[store] == "Black Cultus 2012 FG566" )
{
Ssuzuki--;
}
//string CD_70[2] = { {"Red CD 70 2013 kk-905"},{"black 125 2018 OP-666"} };
else if (detail[store] == "Red CD 70 2013 kk-905" || detail[store] == 
"black 125 2018 OP-666")
{
CD--;
}
else if (detail[store] == "White GLI 2013 Er-765" || detail[store] == 
"Red XLI 2002 FF-991" || detail[store] == "Black GRANDE 2002 FG-566" || 
detail[store] == "GREY Camre 2019 KkL-890" || detail[store] == "White AXIO 2020 LL-008")
{
Coroalla--;
}
//string Loader[4] = { {"White Suzuki 2007 tt-065"},{"Red Shezor 2007 ll-491"}, {"Black Hilux 2008 FG-566"},{"GREY China 2019 KP910"} };
else if (detail[store] == "White Suzuki 2007 tt-065" || detail[store] 
== "Red Shezor 2007 ll-491" || detail[store] == "Black Hilux 2008 FG-566" || 
detail[store] == "GREY China 2019 KP-910")
{
LLoader--;
}
//string Truckk[3] = { {"Grey Isuzui 2016 xd-065"},{"Brown Mercedes 2010 pf-691"}, {"Blue Daihatsu 2009 FG-566"} };
else if (detail[store] == "Grey Isuzui 2016 xd-065" || detail[store] == 
"Brown Mercedes 2010 pf-691" || detail[store] == "Blue Daihatsu 2009 FG-566" )
{
TRUCK--;
}
detail[store] = "\0";
}
void mehran()
{
int chc;
int k = 0, kx = 0;
for (int i = 0; i < 99; i++)
{
if (namee == name[i])
{
kx = i;
}
}
//cout << "Name:1"<<name[k]<<endl;
if (mehraan < 6)
{
cout << "There are 6 Merhans Available in Stock there Models are:\n";
cout << "1)2013\t2)2001\t3)2002\t4)2019\t5)2020\t6)2006\n Select a choice:";
cin >> chc;
// cout << "\nm" << m << endl;
switch (chc)
{
case 1:
{
for (int i = 0; i < 99; i++)
{
if (Mehhran[0] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = Mehhran[0];
mehraan++;
cout << "\n*************\nThis mehran is selected\n" << Mehhran[0] << "\nYour car has been booked!\n";
}
break;
}
case 2:
{
for (int i = 0; i < 99; i++)
{
if (Mehhran[1] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = Mehhran[1];
cout << "\n*************\nThis mehran is selected\n" << Mehhran[1] << "\nYour car has been booked!\n";
mehraan++;
}
break;
}
case 3:
{
for (int i = 0; i < 99; i++)
{
if (Mehhran[2] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = Mehhran[2];
mehraan++;
cout << "This mehran is selected\n" << 
Mehhran[2] << "\nYour car has been booked!\n";
}
break;
}
case 4:
{
for (int i = 0; i < 99; i++)
{
if (Mehhran[3] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = Mehhran[3];
cout << "This mehran is selected\n" << 
Mehhran[3] << "\nYour car has been booked!\n";
mehraan++;
}
break;
}
case 5:
{
for (int i = 0; i < 99; i++)
{
if (Mehhran[4] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = Mehhran[4];
mehraan++;
cout << "This mehran is selected\n" << 
Mehhran[4] << "\nYour car has been booked!\n";
}
break;
}
case 6:
{for (int i = 0; i < 99; i++)
{
if (Mehhran[5] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = Mehhran[5];
mehraan++;
cout << "This mehran is selected\n" << Mehhran[5] 
<< "\nYour car has been booked!\n";
}
break;
}
default:;
}
}
else
cout << "\nMehran is out of Stock\n";
}
void corolla()
{
int chc;
int k = 0, kx = 0;
for (int i = 0; i < 99; i++)
{
if (namee == name[i])
{
kx = i;
}
}
//cout << "Name:1"<<name[k]<<endl;
if (Coroalla < 5)
{
cout << "There are 5 Corolla Available in Stock there Models are:\n";
cout << "1)GLI 2013\t2) XLI 2002\t3) Grande 2002\t4)Camre 2019\t5)AXIO 2020\n Select a choice:";
cin >> chc;
// cout << "\nm" << m << endl;
switch (chc)
{
case 1:
{
for (int i = 0; i < 99; i++)
{
if (ccorrolla[0] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = ccorrolla[0];
Coroalla++;
cout << "\n*************\nThis corolla is selected\n" << ccorrolla[0] << "\nYour car has been booked!\n";
}
break;
}
case 2:
{
for (int i = 0; i < 99; i++)
{
if (ccorrolla[1] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = ccorrolla[1];
cout << "\n*************\nThis corolla is selected\n" << ccorrolla[1] << "\nYour car has been booked!\n";
Coroalla++;
}
break;
}
case 3:
{
for (int i = 0; i < 99; i++)
{
if (ccorrolla[2] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = ccorrolla[2];
Coroalla++;
cout << "This corolla is selected\n" << 
ccorrolla[2] << "\nYour car has been booked!\n";
}
break;
}
case 4:
{
for (int i = 0; i < 99; i++)
{
if (ccorrolla[3] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = ccorrolla[3];
cout << "This corolla is selected\n" << 
ccorrolla[3] << "\nYour car has been booked!\n";
Coroalla++;
}
break;
}
case 5:
{
for (int i = 0; i < 99; i++)
{
if (ccorrolla[4] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = ccorrolla[4];
Coroalla++;
cout << "This corolla is selected\n" << 
ccorrolla[4] << "\nYour car has been booked!\n";
}
break;
}
default:;
}
}
else
cout << "\nCorrolla is out of Stock\n";
}
void HONDA()
{
int kx = 0;
for (int i = 0; i < 99; i++)
{
if (namee == name[i])
{
kx = i;
}
}
int chc, k = 0;
if (hhonda < 4)
{
cout << "There are 4 Corolla Available in Stock there Models are:\n";
cout << "1) Civic 2007\t2) City 2007\t3) Reborn 2012\t4) Go 2019\n Select a choice:";
cin >> chc;
// cout << "\nm" << m << endl;
switch (chc)
{
case 1:
{
for (int i = 0; i < 99; i++)
{
if (Honda[0] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = Honda[0];
hhonda++;
cout << "\n*************\nThis Honda is selected\n" << Honda[0] << "\nYour car has been booked!\n";
}
break;
}
case 2:
{
for (int i = 0; i < 99; i++)
{
if (Honda[1] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = Honda[1];
cout << "\n*************\nThis Honda is selected\n" << Honda[1] << "\nYour car has been booked!\n";
hhonda++;
}
break;
}
case 3:
{
for (int i = 0; i < 99; i++)
{
if (Honda[2] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = Honda[2];
hhonda++;
cout << "This Honda is selected\n" << 
Honda[2] << "\nYour car has been booked!\n";
}
break;
}
case 4:
{
for (int i = 0; i < 99; i++)
{
if (Honda[3] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = Honda[3];
cout << "This Honda is selected\n" << 
Honda[3] << "\nYour car has been booked!\n";
hhonda++;
}
}
default:;
}
}
else
cout << "\nHonda is out of Stock\n";
}// HOnda // function ends here
void Suzuki()
{
int kx = 0;
for (int i = 0; i < 99; i++)
{
if (namee == name[i])
{
kx = i;
}
}
int chc, k = 0;
if (Ssuzuki < 4)
{
cout << "There are 3 Suzuki Available in Stock there Models are:\n";
cout << "1) Wagon-R 2020\t2) Vitz 2007\t3) Cultus 2012\n Select a choice:";
cin >> chc;
// cout << "\nm" << m << endl;
switch (chc)
{
case 1:
{
for (int i = 0; i < 99; i++)
{
if (ssuzuki[0] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = ssuzuki[0];
Ssuzuki++;
cout << "\n*************\nThis Suzuki is selected\n" << ssuzuki[0] << "\nYour car has been booked!\n";
}
break;
}
case 2:
{
for (int i = 0; i < 99; i++)
{
if (ssuzuki[1] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = ssuzuki[1];
cout << "\n*************\nThis Suzuki is selected\n" << ssuzuki[1] << "\nYour car has been booked!\n";
hhonda++;
}
break;
}
case 3:
{
for (int i = 0; i < 99; i++)
{
if (ssuzuki[2] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[kx] = ssuzuki[2];
Ssuzuki++;
cout << "This Suzuki is selected\n" << 
ssuzuki[2] << "\nYour car has been booked!\n";
}
break;
}
default:;
}
}
else
cout << "\nHonda is out of Stock\n";
}// suzuki function ends here
};
class Bikes :virtual public Car_rental
{
public:
void id_password() {}
string CD_70[2] = { {"Red CD 70 2013 kk-905"},{"black 125 2018 OP666"} };
void bikee()
{
int kx = 0;
for (int i = 0; i < 99; i++)
{
if (namee == name[i])
{
kx = i;
}
}
int chc, k = 0;
if (CD < 2)
{
cout << "There are 2 bikes Available in Stock there Models are:\n";
cout << "1) CD_70 2013\t2) 125 2018 \n Select a choice:";
cin >> chc;
// cout << "\nm" << m << endl;
switch (chc)
{
case 1:
{
{
for (int i = 0; i < 99; i++)
{
if (CD_70[0] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[0] = CD_70[0];
bb = 0;
CD++;
cout << "\n*************\nThis BIKE is selected\n" << CD_70[0] << "\nYour car has been booked!\n";
}
}
break;
}
case 2:
{
for (int i = 0; i < 99; i++)
{
if (CD_70[1] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[1] = CD_70[1];
bb = 1;
cout << "\n*************\nThis bike is selected\n" << CD_70[1] << "\nYour car has been booked!\n";
CD++;
}
break;
}
default:;
}
}
else
cout << "\nBikes are out of Stock\n";
}// ends here
void Delete_detial()
{
for (int i = 0; i < 99; i++)
{
if (ddt == detail[i])
{
detail[i] = "\0";
}
}
}
};
class Trucks :virtual public Car_rental
{
public:
void id_password() {}
string Loader[4] = { {"White Suzuki 2007 tt-065"},{"Red Shezor 2007 ll491"}, {"Black Hilux 2008 FG-566"},{"GREY China 2019 KP-910"} };
string Truckk[3] = { {"Grey Isuzui 2016 xd-065"},{"Brown Mercedes 2010 pf-691"}, {"Blue Daihatsu 2009 FG-566"} };
string gg;
void loader()
{
int kx = 0;
for (int i = 0; i < 99; i++)
{
if (namee == name[i])
{
kx = i;
}
}
int chc, k = 0;
if (LLoader < 4)
{
cout << "There are 4 Loaders Available in Stock there Models are:\n";
cout << "1) Suzuki 2007\t2) Shezor 2007\t3) Hilux 2008\t4) China loader 2019\n Select a choice:";
cin >> chc;
// cout << "\nm" << m << endl;
switch (chc)
{
case 1:
{
for (int i = 0; i < 99; i++)
{
if (Loader[0] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[0] = Loader[0];
l = 0;
LLoader++;
cout << "\n*************\nThis Loader is selected\n" << Loader[0] << "\nYour car has been booked!\n";
}
break;
}
case 2:
{
for (int i = 0; i < 99; i++)
{
if (Loader[1] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[1] = Loader[1];
l = 1;
cout << "\n*************\nThis Loader is selected\n" << Loader[1] << "\nYour car has been booked!\n";
LLoader++;
}
break;
}
case 3:
{
for (int i = 0; i < 99; i++)
{
if (Loader[2] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[2] = Loader[2];
l = 2;
LLoader++;
cout << "This Loader is selected\n" << 
Loader[2] << "\nYour car has been booked!\n";
}
break;
}
case 4:
{
for (int i = 0; i < 99; i++)
{
if (Loader[3] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[3] = Loader[3];
l = 3;
cout << "This Loader is selected\n" << 
Loader[3] << "\nYour car has been booked!\n";
LLoader++;
}
}
default:;
}
}
else
cout << "\nLoaders are out of Stock\n";
}// loader funtion ends here
void truck()
{
int kx = 0;
for (int i = 0; i < 99; i++)
{
if (namee == name[i])
{
kx = i;
}
}
int chc, k = 0;
if (TRUCK < 3)
{
cout << "There are 4 Loaders Available in Stock thereModels are:\n";
cout << "1) Isuzui 2016\t2) Mercedes 2010\t3) Daihatsu 2009\n Select a choice:";
cin >> chc;
// cout << "\nm" << m << endl;
switch (chc)
{
case 1:
{
for (int i = 0; i < 99; i++)
{
if (Truckk[0] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[0] = Truckk[0];
mn = 0;
TRUCK++;
cout << "\n*************\nThis Truck is selected\n" << Truckk[0] << "\nYour car has been booked!\n";
}
break;
}
case 2:
{
for (int i = 0; i < 99; i++)
{
if (Truckk[1] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[1] = Truckk[1];
mn = 1;
cout << "\n*************\nThis Truck is selected\n" << Truckk[1] << "\nYour car has been booked!\n";
TRUCK++;
}
break;
}
case 3:
{
for (int i = 0; i < 99; i++)
{
if (Truckk[2] == detail[i])
{
k = 1;
}
}
if (k == 1)
{
cout << "sorry this car is already taken! choose any other car";
}
else
{
detail[2] = Truckk[2];
mn = 2;
TRUCK++;
cout << "This Truck is selected\n" << 
Truckk[2] << "\nYour car has been booked!\n";
}
break;
}
default:;
}
}
else
cout << "\nTrucks are out of Stock\n";
}
void Delete_detial()
{
for (int i = 0; i < 99; i++)
{
if (ddt == detail[i])
{
detail[i] = "\0";
}
}
}
};
int main()
{
int option, aw, h, lk;
string check;
Car_rental* ptr[3];
ptr[0] = new Cars;
ptr[1] = new Trucks;
ptr[2] = new Bikes;
rpt:
cout << "\n--------------------------------------------\n";
ptr[0]->id_password();
dlt:
x:
cout << "\n 1) Rent a Car \t 2)Information \t 3)Delete booking \t4) logout\n Select an option";
cin >> option;
if (option == 1)
{
check = ptr[0]->nam;
for (int y = 0; y < 99; y++)
{
if (check == ptr[0]->name[y])
{
h = y;
}
}
if (ptr[0]->detail[h] == "\0")
{
cout << "1) CAR \t2) BIKE \t3) Truck \nSelect one option:";
cin >> option;
if (option == 1)
{
cout << "1) Mehran\t2)Corolla\t3)Honda\t4)Suzukui\nSelect one option:";
cin >> option;
if (option == 1)
{
ptr[0]->mehran();
}
else if (option == 2)
{
ptr[0]->corolla();
}
else if (option == 3)
{
ptr[0]->HONDA();
}
else if (option == 4)
{
ptr[0]->Suzuki();
}
}
else if (option == 2)
{
ptr[2]->bikee();
for (int i = 0; i < 99; i++)
{
if (ptr[0]->nam == ptr[0]->name[i])
{
lk = i;
}
}
kg = lk;
if (bb < 1)
{
ptr[0]->detail[lk] = ptr[2]->detail[bb];
ddt = ptr[2]->detail[bb];
}
}
else if (option == 3)
{
cout << "1) Loader\t2)Truck\nSelect one option:";
cin >> option;
if (option == 1)
{
ptr[1]->loader();
for (int i = 0; i < 99; i++)
{
if (ptr[0]->nam == ptr[0]->name[i])
{
aw = i;
}
}
kg = aw;
if (LLoader < 4)
{
ptr[0]->detail[aw] = ptr[1]->detail[l];
ddt = ptr[1]->detail[l];
}
}
else if (option == 2)
{
ptr[1]->truck();
for (int i = 0; i < 99; i++)
{
if (ptr[0]->nam == ptr[0]->name[i])
{
aw = i;
}
}
kg = aw;
if (TRUCK < 3)
{
ptr[0]->detail[aw] = ptr[1]->detail[mn];
ddt = ptr[1]->detail[mn];
}
}
}
cout << "\n--------------------------------------------\n";
}
else
{
cout << " \nYour are already renting a Car sorry you cannot rent more!\n ";
cout << "\n--------------------------------------------\n";
}
d:
cout << "->If you want to check your 'PERSONAL AND BOOKING DETAIL' press 5\n if you want delete a Booked vehicle Press 6 \n-> if you want to 'LOGOUT' press 7: ";
cin >> option;
if (option == 5)
{
ptr[0]->display_info();
goto d;
}
else if (option == 7)
{
system("CLS");
goto rpt;
}
else if (option == 6)
{
ptr[0]->Delete_detial();
ptr[1]->Delete_detial();
ptr[2]->Delete_detial();
cout << "\n Booking detail has been deleted!"<<endl;
goto dlt;
}
}
else if (option == 2)
{
ptr[0]->display_info();
goto x;
}
else if (option == 4)
{
system("CLS");
goto rpt;
}
else if (option == 3)
{
ptr[0]->Delete_detial();
ptr[1]->Delete_detial();
ptr[2]->Delete_detial();
cout << "\n Booking detail has been deleted!" << endl;
goto dlt;
}
}
