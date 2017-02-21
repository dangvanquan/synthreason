#include <iostream>
#include <fstream>

using namespace std;
int main(){
string desname, desobject, desaction, destime, desdescription, desnumber, desreason, desplace, desemotion,descommand,desbridge,desgame,desconcept;
string desnameF, desobjectF, desactionF, destimeF, desdescriptionF, desnumberF, desreasonF, desplaceF, desemotionF,descommandF,desbridgeF,desgameF,desconceptF;

 cout << "Configure request descriptors & Word catagories" << endl;

cout << "#1 Vocabulary Descriptor:";
getline(cin, desname);
cout << "#1 Filename:";
getline(cin, desnameF);

cout << "#2 Vocabulary Descriptor:";
getline(cin, desobject);
cout << "#2 Filename:";
 getline(cin, desobjectF);

cout << "#3 Vocabulary Descriptor:";
getline(cin, desaction);
cout << "#3 Filename:";
getline(cin, desactionF);

cout << "#4 Vocabulary Descriptor:";
getline(cin, destime);
cout << "#4 Filename:";
getline(cin, destimeF);

cout << "#5 Vocabulary Descriptor:";
getline(cin, desdescription);
cout << "#5 Filename:";
getline(cin, desdescriptionF);

cout << "#6 Vocabulary Descriptor:";
getline(cin, desnumber);
cout << "#6 Filename:";
getline(cin, desnumberF);

cout << "#7 Vocabulary Descriptor:";
getline(cin, desreason);
cout << "#7 Filename:";
getline(cin, desreasonF);

cout << "#8 Vocabulary Descriptor:";
getline(cin, desplace);
cout << "#8 Filename:";
getline(cin, desplaceF);

cout << "#9 Vocabulary Descriptor:";
getline(cin, desemotion);
cout << "#9 Filename:";
getline(cin, desemotionF);

cout << "#10 Vocabulary Descriptor:";
getline(cin, descommand);
cout << "#10 Filename:";
getline(cin, descommandF);

cout << "#11 Vocabulary Descriptor:";
getline(cin, desbridge);
cout << "#11 Filename:";
getline(cin, desbridgeF);

cout << "#12 Vocabulary Descriptor:";
getline(cin, desgame);
cout << "#12 Filename:";
getline(cin, desgameF);

cout << "#13 Vocabulary Descriptor:";
getline(cin, desconcept);
cout << "#13 Filename:";
getline(cin, desconceptF);

ofstream file;
file.open("Config.txt");
file << desname << endl << desnameF << endl << desobject << endl << desobjectF << endl << desaction  << endl << desactionF << endl << destime << endl << destimeF << endl << desdescription << endl << desdescriptionF  << endl << desnumber << endl << desnumberF << endl << desreason << endl << desreasonF  << endl << desplace << endl << desplaceF  << endl << desemotion << endl << desemotionF << endl << descommand << endl << descommandF << endl << desbridge << endl <<desbridgeF  << endl << desgame << endl <<desgameF << endl << desconcept << endl <<desconceptF;
file.close();



ofstream fileNew;
fileNew.open(desnameF.c_str());
fileNew.close();
ofstream fileNew2;
fileNew2.open(desobjectF.c_str());
fileNew2.close();
ofstream fileNew3;
fileNew3.open(desactionF.c_str());
fileNew3.close();
ofstream fileNew4;
fileNew4.open(destimeF.c_str());
fileNew4.close();
ofstream fileNew5;
fileNew5.open(desdescriptionF.c_str());
fileNew5.close();
ofstream fileNew6;
fileNew6.open(desnumberF.c_str());
fileNew6.close();
ofstream fileNew7;
fileNew7.open(desreasonF.c_str());
fileNew7.close();
ofstream fileNew8;
fileNew8.open(desplaceF.c_str());
fileNew8.close();
ofstream fileNew9;
fileNew9.open(desemotionF.c_str());
fileNew9.close();
ofstream fileNew10;
fileNew10.open(descommandF.c_str());
fileNew10.close();
ofstream fileNew11;
fileNew11.open(desbridgeF.c_str());
fileNew11.close();
ofstream fileNew12;
fileNew12.open(desgameF.c_str());
fileNew12.close();
ofstream fileNew13;
fileNew13.open(desconceptF.c_str());
fileNew13.close();

cout << "Complete!" << endl;

}
