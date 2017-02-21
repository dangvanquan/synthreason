#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include <stdio.h>
#include <algorithm>
#include "sha512.h"
//Copyright. George Frederick Wagenknecht - 2016
/*Artificial Logic Linking System
Note this program is based upon cogitive system i had designed to deal with the brain injury i suffered,(my own design :) ).
DEV NOTE: REDESIGN STRNG LABELS FOR APPROPRIATENESS
*/




using namespace std;
 bool CHOICE = false;
string D,E,F;
ofstream logout;
string EE = "75b06fc3815933fc03711b8acc750f542aebf1afc97bc4ed009a6576c9f3e0938a758e8f3cca4924e12561dc676677318cb05052e21d455e5d14b318067921bc";
string NE = "a5d8a565dfd8d15fc0580eec8473d3243cae99d94af8d8693f80053354632845e54dc213097412ce3d7b4cdc18a6e8f74d394b7022b8a384c6c24e6cf63fd6debe6b7c431e051a92482443f47c6d4efbfde7293910a51576a6e1b3ea7d83d32f834e97597023adacf4e8df2be9e9144549b27a19e90d268457224e53f3f8c3efeea750ea1720c3c5307d8ea1f55bcdce048708648f8022c0a089e32c07a5ad0f62055999fc012e893b23cb82a9559bbe4d1799c8435fd258fe012fb3e943d6753a9fad305a3c1207094c04e06389b08d243ab7cb3f8b4fa46dfecb3a44eac2bea99c3ffab08f8553c9112277970a2b165df27bfb939bc9cf388a4c4c939521923246048a8236033471facf85d26e17fae375f95304b0ae749f945ce3ce83139b2da02304c71ab380cf14875d54d73998e584b893560a7c957c934569e58827b1934f4a6a361bc3443f25c44769108c665c94558ef94d5d50999f54a47e00b2455786fba7165f2d53f8960dcfeab4974c6cadf52df8efadf5cd30842787f11799e33cb5b7fbc5ba672409bd1db43d14fd68bcaaa7bb8b34c6e5339061bc6a1bf6b4aec246c4549e372e9614ab6c7743f06b5588ccc158a4b63ff839334971b9f60b4493d04b47ebaec1d61aa6896b2f1959611d28c3c585471ba52287a26090b57421e767a64b67cb7eb8589f70915ab02e7b4dd2a74ce8255294ffca5e4bafacdc18d4e5b2d16a68a08754b8573e77371b7413435820e459770072b3eb60de8f680a5db56d11ff1a1c9d1080ee67af91cf85a2c3e94bbf5c9cfd37438dd933f043ae09b3af8f2e37283e4142f8dc1751e49edfeed9fd5c7993069a33b81adc3b5f948e7c52b3523e9095810fce47a75010954e00ef5eedc9fbff2d826b08dd94";
string filename;
int k;
string wordPrev;
string Sout;
int space;
int NCount;
int Argc;
string Argv;
string theanswerreadystatic;
string synthreasonword;
string synthcom;
int autothink = 0;
int speedprocessing = 0;		// if speed prosessing is enabled responses
string retain2;
string retain;					// are affected
int found = 0;
int searchset = 1;				// what to search for(view code for details)
int markerc1 = 0;
string warning = "Warning! points: ";
int markerc2 = 0;
int markerc3 = 0;
int wordpos = 0;
int wordc = 0;
int trade = 0;
float buy = 0;
float sell = 0;
int a = 0;						// swerg
int b = 0;
int m = 0;
int procnote = 0;
int linereq = 0;
string synthanswer;
int linecount = 0;
int finish = 10;
int anscount = 0;
int ucount, wordcount, wordcountstat;
int fail = 0;
int points = 0;
int question = 0;
int structcount = 0;
int thoughtcount = 0;
char thought[1024][512];
char structure[1024][512];
string testfile = "test.txt";
string lineneeded;
string file,filenamebuf;
string word;
string userinputA;
string textneeded;
string notes;
string fileone = "fileone.txt";
string filetwo = "filetwo.txt";
string chainreason,synthlogictemp;
string magic1 = "",magic2 =   "",magic3= "",magic4 = "", magic5 = "", magic6, magic7, objects, description,actions;
string desname, desobject, desaction, destime, desdescription, desnumber, desreason, desplace, desemotion,
       descommand,desbridge,desgame,desconcept;
string desadj ="desadj",desadjp = "desadjp",desadv="desadv",desadvtime= "desadvtime",desprep = "desprep",desqualities = "desqualities",desverb = "desverb";
string desnameF, desobjectF, desactionF, destimeF, desdescriptionF, desnumberF, desreasonF, desplaceF, desemotionF,
       descommandF,desbridgeF,desgameF,desconceptF;

// Scan mode 0 = intelligent. 1 = skim mode


void Config()
{
    int find = -1;
    string B;
    string A = "1395598635588a7bb94464affa337c44ae41549462ce16e30aa25e4d986eeac3a3160879095033ce0ddff72ef0a28b8d4a6b9250bdd2fc22062537d2b268f0da64d689c940e31342991d5ec81621f44ffccb8763697204caad4dcd9e84c69122d89a25035bdfdd2c0a13ebe6fd25834b783a091bce3c93dd81c0801b06fd25d4c666495e6e968168c63f4d3ae0e5f943ba25479c2177198f33dad7cb71e1493d39a8167746f6853efb026e4c8774c41d9d1e86086e1aaf406d5079c7b76c28a027b91c2710aedd92fadc606c298d5e956e4a74fdec8f7d5319b1ea872aa3ce3e76833b0b184e88bfae7212ca89fe9388cdb62a0b6689481f606fa6868f27728a9c100fc64573c853074348ae6bc65c6b02106618246230171a9ba655b826aaea2de51fab95261680a6878b8029551b999cfffd0338f1629dd84565eeb3176422103ed9a1f5db846e7cbc4bde46c51959761f9ace67aabe8528b33f9b2a27b6192d5c39ef8351ff0182bca38bd3a50f417322ce1ba5074a726a09c5b17c812be5de5fefc1ac318c617e7f9e22404a6fa1eca591747e4dd0399adaa0b9a47320a92143f6ba83322574f17d7836faaee3f6dd8ccd255d895d7a852e0fa501ac6427d6c973f4a80b11db49ebc5de85562d0fe36ce1f3a6a5413f9e343e77b6d287f37e44f358299710958e74f33909d54cf28e9828685e158a529e33caeef99556a92a9f7f054c2a6f61e3aa7860be18c0de9eba6ba7a25e828d2884ea4f27416aa641331588d07d8370f206fa6edc37caabdc4e3f7b441998506f239bb72d944ed912cdaf626b4d7974db35248f13a9f174185ae4caa21e61f983407e2fc53da63c0b5990d0b15f9fd99f95067b4e4a25f52ae5d3b11c9da9ecd8f1215d8c5bc7d043ae09b3af8f2e37283e4142f8dc1751e49edfeed9fd5c7993069a33b81adc3b5f948e7c52b3523e9095810fce47a75010954e00ef5eedc9fbff2d826b08dd94";
    string E = "";

    ifstream Configfile;

    Configfile.open("Config.txt");
    string setup;
    int LINE = 0;
    while (!Configfile.eof())
    {
        getline(Configfile,setup);

        if (LINE == 12)
        {
            desname = setup;
        }
        if (LINE == 13)
        {
            desnameF = setup;
        }
        if (LINE == 16)
        {
            desobject = setup;
        }
        if (LINE == 17)
        {
            desobjectF = setup;
        }
        if (LINE == 0)
        {
            desaction = setup;
        }
        if (LINE == 1)
        {
            desactionF = setup;
        }
        if (LINE == 24)
        {
            destime = setup;
        }
        if (LINE == 25)
        {
            destimeF = setup;
        }
        if (LINE == 8)
        {
            desdescription = setup;
        }
        if (LINE == 9)
        {
            desdescriptionF = setup;
        }
        if (LINE == 14)
        {
            desnumber = setup;
        }
        if (LINE == 15)
        {
            desnumberF = setup;
        }
        if (LINE == 20)
        {
            desreason = setup;
        }
        if (LINE == 21)
        {
            desreasonF = setup;
        }
        if (LINE == 18)
        {
            desplace = setup;
        }
        if (LINE == 19)
        {
            desplaceF = setup;
        }
        if (LINE == 10)
        {
            desemotion = setup;
        }
        if (LINE == 11)
        {
            desemotionF = setup;
        }
        if (LINE == 4)
        {
            descommand = setup;
        }
        if (LINE == 5)
        {
            descommandF = setup;
        }
        if (LINE == 2)
        {
            desbridge = setup;
        }
        if (LINE == 3)
        {
            desbridgeF = setup;
        }
        if (LINE == 22)
        {
            desgame = setup;
        }
        if (LINE == 23)
        {
            desgameF = setup;
        }
        if (LINE == 6)
        {
            desconcept = setup;
        }
        if (LINE == 7)
        {
            desconceptF = setup;
        }
        if (LINE == 26)
        {
//string C = sha512(setup);
//find = A.find(C);
        }
        LINE++;
    }
    cout << "Config file loaded." << endl << endl;
    while (find != -1)
    {
        if (find > -1)
        {
            return;
        }
        if (find == -1)
        {
//cout << "Please enter your serial code:";
//getline(cin,B);
//string C = sha512(B);
//find = A.find(C);

            if (find == -1)
            {
                cout << endl << "Incorrect Serial code" << endl;
            }
            if (find > -1)
            {
                cout << "Thankyou!" << endl;
                ofstream file;
                file.open("Config.txt",ios::app);
                file << B;
                file.close();

                return;
            }
        }
    }
    return;
}
string loadfile(string file)
{

    string line;
    ifstream textfile;


    textfile.open(file.c_str());
    textneeded.erase();
    while (!textfile.eof())
    {
        getline(textfile, line);
        textneeded = textneeded + line;
    }

    char chars[] = ",:<>[]";

    for (unsigned int i = 0; i < strlen(chars); ++i)
    {
        textneeded.erase(std::remove(textneeded.begin(), textneeded.end(), chars[i]),
                         textneeded.end());
    }

    textneeded = textneeded + " END.";
    return textneeded;
}

int filesearch(string segment, string file)
{
    filenamebuf = file;
    if (k == 0)
    {
//Sout.erase();
    }
    ifstream datafile;
    string line,linefull;
    int pos = -1;
    int exists = 0;
    datafile.open(file.c_str());

    string wordblock;
    wordblock.erase();
    /*
       while (!datafile.eof()) { getline(datafile, line); wordblock =
       wordblock + line; }

       if (wordblock.find(segment)>-1) { pos = 1; } */
    while (!datafile.eof())
    {
        getline(datafile, line);
        linefull += line;
//    break;
    }

    if (linefull.find(segment) != -1)//speedhack
        //if (line == segment)
    {
        pos = 1;
        //   cout << " conceptual scan:" << segment << endl;
    }

    datafile.close();
    if (pos == 1)
    {
        k++;
        NCount++;
        exists = 1;
        int zero = 0;
//cout << " "<< file[zero] << "=" << segment; // last bug
//Sout += file + "=" + segment;
    }
    if (pos == -1)
    {
//k++;
//NCount++;
        space++;
//cout << " ";
//Sout += " ";
        exists = 0;
    }
    line.erase();

    if (k == 4)
    {
//cout << endl;
//Sout += ";";

        string spacestr, NCountstr;
        stringstream convert;
        convert << space;
        spacestr = convert.str();
        stringstream convert2;
        convert2 << NCount;
        NCountstr = convert2.str();
//Sout += " <-PatternSpace: " + spacestr + " <-Bytes: " + NCountstr;
//cout << " <-PatternSpace: " << space << " <-Bytes: " << NCount << endl;
        space = 0;
        k = 0;


    }
    return (exists);
}

string processlogic(string answerstringsegment)
{
    // linear progression
    // 0 = null
    // 1 = right
    // 2 = left
    // 3 = cross transition

    // 3D progression.
    // 4 = null
    // 5 = x+
    // 6 = x-
    // 8= y+
    // 9 = y-
    // 10 = z+
    // 11 = z-

    // 4D progression

    // 12 = null
    // 13 = time +
    // 14 = time -

    int progression = 0;
    string foo = 0;

    // testcode
    if (answerstringsegment.find("are") > 0)
    {
        // progression indicator keyword DB or inet lookup
        progression = 1;
    }
    // testcode
    if (answerstringsegment.find("aren't") > 0)
    {
        // progression indicator keyword DB or inet lookup
        progression = 1;
    }
    // cross domain transfer
    return foo;
}

void processmeaningcorrelationmatrix();
// MCM (deep learning component) needs processlogic to work!
// algebraic logical processesing buffer
string processresponselogic()
{
    fail = 0;
}

string processresponsealgbraic(string answerstring, string userinput)
{
    string answerstringsegment, theanswer, theanswerready, theanswerreadyreal;
    // count words from userinput.
    int ucountpos = 0;
    string userinputcmod = userinput + " ";
    // cout << userinputcmod;
    while (ucountpos < userinputcmod.size() - 2)
    {
        ucount++;
        ucountpos++;
        ucountpos = userinputcmod.find(" ", ucountpos);
    }
    ucount--;
    // cout << ucount;
    // posend = userinputstack.find(" ", pos);
    // cout << answerstring;
    int segmentstart = 0;
    int segmentend = 0;
    while (segmentend < answerstring.size() - 1)
    {
        int answered = 0;
        wordcount = 0;
        int completion = 0;
        segmentstart = answerstring.find("[", segmentend);
        segmentend = answerstring.find("]", segmentstart);
        // g cout << answerstringsegment;
        // cout << segmentstart << " " << segmentend;
        if (segmentstart > -1)
        {
            // cout << "+";
            answerstringsegment = answerstring.substr(segmentstart, segmentend - segmentstart + 1);
        }
        int pos = 0;
        int posend = 0;
        int lineend = 0;
        lineend = userinput.find(":", lineend + 1);
        while (posend != lineend - 1)
        {
            // cout << endl << userinput << endl;
            posend = userinput.find(" ", pos + 1);
            string word = userinput.substr(pos, posend - pos);
            pos = posend;
            // cout << userinputstack;
            // pos = posend;
            // cout << word;
            int clip = word.find(" ");
            if (clip == 0)
            {
                word = word.substr(1, word.size());
            }
            // cout << word;
            int wordcheck2 = 0;;
            int deviseanswerlimit = answerstringsegment.find(":", wordcheck2);
            while (wordcheck2 < answerstringsegment.size() - 2)
            {
                wordcheck2 = answerstringsegment.find(word, wordcheck2 + 1);
                int deviseanswerpos = answerstringsegment.find(">", wordcheck2);
                deviseanswerlimit = answerstringsegment.find(":", wordcheck2);
                // cout << deviseanswerpos << " " << deviseanswerlimit;
                if (deviseanswerpos > -1 && deviseanswerlimit > -1)
                {
                    if (deviseanswerlimit > deviseanswerpos)
                    {
                        theanswer = answerstringsegment.substr(deviseanswerpos + 1,
                                                               deviseanswerlimit -
                                                               deviseanswerpos - 1);
                        int notexist = userinput.find(theanswer);
                        if (notexist == -1)
                        {
                            // cout << answerstringsegment;
                            theanswerready = theanswer + " ";

                        }
                    }
                }

            }
            int wordcheck = 0;

            if (trade == 0)
            {
                // wordcheck += filesearch(word, "self.txt");
                wordcheck += filesearch(word, "Command.txt");
                wordcheck += filesearch(word, "bridges.txt");
                wordcheck += filesearch(word, "concept.txt");
                wordcheck += filesearch(word, "objects.txt");
                wordcheck += filesearch(word, "reply.txt");
                wordcheck += filesearch(word, "names.txt");
                wordcheck += filesearch(word, "reason.txt");
                wordcheck += filesearch(word, "time.txt");
                wordcheck += filesearch(word, "places.txt");
                wordcheck += filesearch(word, "emotion.txt");
                wordcheck += filesearch(word, "actions.txt");

                wordcheck += filesearch(word, "descriptions.txt");

                wordcheck += filesearch(word, "Numbers.txt");
                wordcheck += filesearch(word, "adj.txt");
                wordcheck += filesearch(word, "adjpeople.txt");
                wordcheck += filesearch(word, "adv.txt");
                wordcheck += filesearch(word, "advtime.txt");
                wordcheck += filesearch(word, "prep.txt");
                wordcheck += filesearch(word, "qualities.txt");
                wordcheck += filesearch(word, "verbs.txt");
                // get time .
                // get reverse descriptors
                // cout << userinput;
                string synthcom;
                // get word des match
                synthanswer.erase();
                if (userinput.find("?") == -1)
                {
                    // cout << synthword;

                    if (filesearch(word, "places.txt") == 1)
                    {

                        synthanswer = desplace + " is the " + word + "?";
                        synthreasonword = word;
                    }
                    if (filesearch(word, "objects.txt") == 1)
                    {

                        synthanswer = desobject + " is " + word + "?";
                        synthreasonword = word;
                    }

                    if (filesearch(word, "actions.txt") == 1)
                    {

                        synthanswer = desaction + " does one " + word + "?";
                        synthreasonword = word;
                    }

                    if (filesearch(word, "descriptions.txt") == 1)
                    {

                        synthanswer = desdescription + " a " + word + "?";
                        synthreasonword = word;
                    }

                    if (filesearch(word, "reason.txt") == 1)
                    {

                        synthanswer = desreason + " does one " + word + "?";
                        synthreasonword = word;
                    }

                    if (filesearch(word, "names.txt") == 1)
                    {

                        synthanswer = desobject + " does " + word + " do" + "?";
                        synthreasonword = word;
                    }








                }
                if (wordcheck > 0)
                {
                    wordcountstat++;
                }
                if (question > -1)
                {
                    if (wordcheck > 0)
                    {
                        wordcount++;
                        int check = answerstringsegment.find(word);
                        if (check > -1)
                        {
                            completion++;
                        }
                    }
                }


            }
        }
        // cout << theanswerready;
        if (answered == 0 || answered == 1)
        {
            if (completion == wordcount && wordcount > 0)
            {
                // cout << "test";

                theanswerreadyreal += theanswerready + " ";
                theanswerreadystatic = theanswerready + " ";

                //  cout << theanswerready;
                answered = 1;
              // cout << "->" << theanswerready;
                Sout += "->" + theanswerready;
            //    ofstream outputfile;
            //    outputfile.open(filename.c_str(),ios::app);
            //    outputfile << Sout << endl;
             //   outputfile.close();
              //  Sout.erase();
                //break;
            }
            if (completion != wordcount && wordcount > 0)
            {
                fail = 1;
                // logic (todo)
                // string foo = processlogic(answerstringsegment);
            }
        }
    }

    return theanswerreadyreal;
}

string processlanguage(string userinput)
{
    string answerstring;

    markerc1 = 0;
    markerc2 = 0;
    markerc3 = 0;
    int pos = 0;
    int posend = 0;
    int lineend = 0;
    int exists = 1;
    anscount = 0;
    string userinputstack;
    userinputstack = userinputstack + userinput;

    question = userinput.find("?");
    if (question == -1)
    {
        lineend = userinput.find(":", lineend + 1);
        // posend = userinputstack.find(" ", pos);
        answerstring = answerstring + "[:";
        while (posend != lineend - 1)
        {

            // cout << endl << userinput << endl;
            posend = userinput.find(" ", pos + 1);
            string word = userinput.substr(pos, posend - pos);
            pos = posend;
            // cout << userinputstack;
            // pos = posend;
            // cout << word;
            int clip = word.find(" ");
            if (clip == 0)
            {
                word = word.substr(1, word.size());
            }
            // hardcode md5
            // md5check filter.txt
            // int status = filesearch(word, "filter.txt");
            //  if (status == 1)
            //  {
            //      points--;
            //       answerstring.erase();
            //       userinput.erase();
            //    warning2(points);
            //    }
            if (trade == 1)
            {
                if (searchset == 0)
                {
                    string line;
                    ifstream textfile2;
                    textfile2.open(filetwo.c_str());
                    while (!textfile2.eof())
                    {
                        getline(textfile2, line);
                        // cout << line;
                        // geetwordcount
                        wordpos = 0;
                        wordc = 0;
                        while (wordpos != -1)
                        {
                            wordpos = line.find(" ", wordpos + 1);
                            // wordc++;
                        }
                        // wordc++;
                        // endwordcount
                        int getmatch = line.find(word);
                        if (getmatch > -1 && word != "a" && word != "in" && word != "or"
                                && word != "by")
                        {
                            // cout << word;
                            // cout << wordc << " " << markerc1;
                            markerc1++;
                            if (markerc1 == wordc)
                            {
                                // cout << "lol";
                                buy++;
                            }
                        }
                    }
                    textfile2.close();


                    string line2;
                    ifstream textfile3;
                    textfile3.open(fileone.c_str());
                    while (!textfile3.eof())
                    {
                        getline(textfile3, line2);
                        wordpos = 0;
                        wordc = 0;
                        while (wordpos != -1)
                        {
                            wordpos = line2.find(" ", wordpos + 1);
                            wordc++;
                        }
                        // wordc++;
                        // endwordcount
                        int getmatch = line2.find(word);
                        if (getmatch > -1 && word != "a" && word != "in" && word != "or"
                                && word != "by")
                        {
                            // cout << word;
                            markerc2++;
                            // cout << wordc << " " << markerc2;
                            if (markerc2 == wordc)
                            {
                                // cout << "lol";
                                sell++;
                            }
                        }
                    }
                    textfile3.close();

                }
                if (searchset == 1)
                {
                    string line3;
                    ifstream textfile4;
                    textfile4.open("skim.txt");
                    while (!textfile4.eof())
                    {
                        getline(textfile4, line3);
                        wordpos = 0;
                        wordc = 0;
                        while (wordpos != -1)
                        {
                            wordpos = line3.find(" ", wordpos + 1);
                            wordc++;
                        }
                        // wordc++;
                        // endwordcount
                        int getmatch = line3.find(word);
                        if (getmatch > -1 && word != "a" && word != "in" && word != "or"
                                && word != "by")
                        {
                            // cout << word;
                            markerc3++;
                            // cout << wordc << " " << markerc2;
                            if (markerc3 == wordc)
                            {
                                // cout << "lol";
                                found++;
                                notes += userinput + ":";



                                // notes, get sentence

                            }
                        }
                    }
                    textfile4.close();
                }
            }

            /*
               exists = 0; exists = filesearch(word, "self.txt"); if (exists
               == 1)

               { // cout << "name"; string requestdescriptors = "your"; string
               requestdescriptorsword = word; answerstring = answerstring +
               requestdescriptors + ">" + word + ":"; anscount++; // cout <<
               requestconversion[0][0]; }

             */

            if (trade == 0)
            {


                /* exists = 0; exists = filesearch(word, "concept.txt"); if
                   (exists == 1)

                   { // cout << "name"; string requestdescriptors = "concept";
                   string requestdescriptorsword = word; answerstring =
                   answerstring + requestdescriptors + ">" + word + ":";
                   anscount++; // cout << requestconversion[0][0]; } */
                /*
                   exists = 0; exists = filesearch(word, "reply.txt"); if
                   (exists == 1)

                   { // cout << "name"; string requestdescriptors = "reply";
                   string requestdescriptorsword = word; answerstring =
                   answerstring + requestdescriptors + ">" + word + ":";
                   anscount++; // cout << requestconversion[0][0]; } */
                exists = 0;
                exists = filesearch(word, "Command.txt");
                if (exists == 1)

                {
                    // cout << "name";
                    string requestdescriptors = descommand;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                    // cout << requestconversion[0][0];
                }
                exists = 0;
                exists = filesearch(word, "concept.txt");
                if (exists == 1)

                {
                    // cout << "name";
                    string requestdescriptors = desconcept;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                    // cout << requestconversion[0][0];
                }
                exists = 0;
                exists = filesearch(word, "bridges.txt");
                if (exists == 1)

                {
                    // cout << "name";
                    string requestdescriptors = desbridge;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                    // cout << requestconversion[0][0];
                }
                exists = 0;
                exists = filesearch(word, "Numbers.txt");
                if (exists == 1)

                {
                    // cout << "name";
                    string requestdescriptors = desnumber;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                    // cout << requestconversion[0][0];
                }
                exists = 0;
                exists = filesearch(word, "names.txt");
                if (exists == 1)

                {
                    // cout << "name";
                    string requestdescriptors = desname;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                    // cout << requestconversion[0][0];
                }
                exists = 0;
                exists = filesearch(word, "time.txt");
                if (exists == 1)

                {
                    // cout << "name";
                    string requestdescriptors = destime;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                    // cout << requestconversion[0][0];
                }
                exists = 0;
                exists = filesearch(word, "reason.txt");
                if (exists == 1)

                {

                    // cout << "name";
                    string requestdescriptors = desreason;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                    // cout << requestconversion[0][0];
                }
                exists = 0;
                exists = filesearch(word, "places.txt");
                if (exists == 1)
                {
                    string requestdescriptors = desplace;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                }

                exists = 0;
                exists = filesearch(word, "emotion.txt");
                if (exists == 1)
                {
                    string requestdescriptors = desemotion;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                }

                exists = 0;
                exists = filesearch(word, "actions.txt");
                if (exists == 1)
                {
                    magic3 = word;
                    string requestdescriptors = desaction;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                }


                exists = 0;
                exists = filesearch(word, "descriptions.txt");
                if (exists == 1)
                {
                    description = word;
                    string requestdescriptors = desdescription;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                }
                exists = 0;
                exists = filesearch(word, "objects.txt");
                if (exists == 1)
                {
                    description = word;
                    string requestdescriptors = desobject;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                }
                exists = 0;
                exists = filesearch(word, "adj.txt");
                if (exists == 1)

                {
                    // cout << "name";
                    string requestdescriptors = desadj;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                    // cout << requestconversion[0][0];
                }
                exists = 0;
                exists = filesearch(word, "adjpeople.txt");
                if (exists == 1)

                {
                    // cout << "name";
                    string requestdescriptors = desadjp;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                    // cout << requestconversion[0][0];
                }
                exists = 0;
                exists = filesearch(word, "adv.txt");
                if (exists == 1)

                {
                    // cout << "name";
                    string requestdescriptors = desadv;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                    // cout << requestconversion[0][0];
                }
                exists = 0;
                exists = filesearch(word, "advtime.txt");
                if (exists == 1)

                {
                    // cout << "name";
                    string requestdescriptors = desadvtime;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                    // cout << requestconversion[0][0];
                }
                exists = 0;
                exists = filesearch(word, "prep.txt");
                if (exists == 1)

                {
                    // cout << "name";
                    string requestdescriptors = desprep;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                    // cout << requestconversion[0][0];
                }
                exists = 0;
                exists = filesearch(word, "qualities.txt");
                if (exists == 1)

                {
                    // cout << "name";
                    string requestdescriptors = desqualities;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                    // cout << requestconversion[0][0];
                }
                exists = 0;
                exists = filesearch(word, "verbs.txt");
                if (exists == 1)

                {

                    // cout << "name";
                    string requestdescriptors = desverb;
                    string requestdescriptorsword = word;
                    answerstring = answerstring + requestdescriptors + ">" + word + ":";
                    anscount++;
                    // cout << requestconversion[0][0];
                }
            }
            word.erase();
        }
        answerstring.append("]");
        // userinput.erase();
    }
    return answerstring;
}
//processsentence
/*
string SYNTAXEXTRACTOR(string BRANCH, string preposition,string userinput)
{
    string twig,synthlogic, leaf, SYNTAX;
    BRANCH = BRANCH + "$";
//	cout << BRANCH;



    int posinitval= 0;
    int posinitend = BRANCH.find("$", posinitval);

    while(posinitend < BRANCH.size() -1)
    {
        int posinit = BRANCH.find("$", posinitval);
        posinitend = BRANCH.find("$", posinit + 1);
        //  cout << posinit << "$ " << posinitend << endl;

        twig = BRANCH.substr(posinit, posinitend-posinit);
        // cout <<twig <<endl;

        int posinitval2= 0;
        int posinitend2 = twig.find(",", posinitval2);
        posinitval = posinitend;
        while(posinitend2 < twig.size() -1)
        {
            int posinit2 = twig.find(",", posinitval2);
            posinitend2 = twig.find(",", posinit2 + 1);
            //  cout << posinit << " " << posinitend << endl;

            leaf = twig.substr(posinit2 +1, posinitend2-posinit2 -1);
            if (userinput.find("?") == -1)
            {
                synthlogic.erase();
                synthlogic += twig.substr(1, twig.find(" ") -1);
            }

            //           if (userinput.find("?") == -1){

            if (synthlogic.find("how") == -1)
            {
                synthlogic += " " + leaf + synthreasonword;

            }
            if (synthlogic.find("how") != -1)
            {
                synthlogic += "/" + preposition;
            }
            //@system(twig.c_str());
            if (userinput.find("?") == -1)
            {
                //       synthlogic += " " + synthreasonword;

            }
            posinitval2 = posinitend2;
            cout << synthlogic;
            // structure[structcount] = synthlogic;
            strcpy(structure[structcount],synthlogic.c_str());
            structcount++;


            ofstream synthlgc;
            synthlgc.open("synthlogic.txt");
            synthlgc << synthlogic << endl;
            synthlgc.close();
            synthlogictemp += synthlogic + " & ";;
            //           system("sleep 0.3");
            //       system("clear");


            ofstream SLP;
            SLP.open("QI.txt",ios::app);
            SLP << synthlogic << endl;
            SLP.close();
            synthlogic.erase();

        }
        // synthlogic += twig.substr(1, twig.find(" ") -1);


    }



    //	while (posinititerend < posinitend)
    //	{
    //			posinititer = BRANCH.find(",", posinit + 1);
//	 posinititerend = BRANCH.find(",", posinititer);

    //	}


    return SYNTAX;
}
string GETPREPOSITION(string userinput)
{

    int pos = userinput.find(" ");
    string value = userinput.substr(0,pos);

    return value;
}
string DATAACTIVATOR(string plato)
{


    string data;

    ifstream reason;

    string line;

    reason.open("magic1.txt");
    while (!reason.eof())
    {
        getline(reason, line);
        int pos =  plato.find(line);
        if (pos != -1)
        {
            magic1 = line;
        }
    }
    reason.close();
    reason.open("magic2.txt");
    while (!reason.eof())
    {
        getline(reason, line);
        int pos =  plato.find(line);
        if (pos != -1)
        {
            magic2 = line;
        }
    }
    reason.close();
    reason.open("magic3.txt");
    while (!reason.eof())
    {
        getline(reason, line);
        int pos =  plato.find(line);
        if (pos != -1)
        {
            magic3= line;
        }
    }
    reason.close();
    reason.open("magic4.txt");
    while (!reason.eof())
    {
        getline(reason, line);
        int pos =  plato.find(line);
        if (pos != -1)
        {
            magic4= line;
        }
    }

    reason.close();
    reason.open("objects.txt");
    while (!reason.eof())
    {
        getline(reason, line);
        int pos =  plato.find(line);
        if (pos != -1)
        {
            objects = line;
        }
    }

    reason.close();
    reason.open("descriptions.txt");
    while (!reason.eof())
    {
        getline(reason, line);
        int pos =  plato.find(line);
        if (pos != -1)
        {
            description = line;
        }
    }


    reason.close();
    reason.open("magic5.txt");
    while (!reason.eof())
    {
        getline(reason, line);
        int pos =  plato.find(line);
        if (pos != -1)
        {
            magic5= line;
        }
    }

    reason.close();
    reason.open("magic6.txt");
    while (!reason.eof())
    {
        getline(reason, line);
        int pos =  plato.find(line);
        if (pos != -1)
        {
            magic6= line;
        }
    }

    reason.close();
    reason.open("magic7.txt");
    while (!reason.eof())
    {
        getline(reason, line);
        int pos =  plato.find(line);
        if (pos != -1)
        {
            magic7= line;
        }
    }


    reason.close();
    reason.open("actions.txt");
    while (!reason.eof())
    {
        getline(reason, line);
        int pos =  plato.find(line);
        if (pos != -1)
        {
            actions= line;
        }
    }


    reason.close();


    reason.close();
    data = line;
    return data;;
}

string RESPONSEINITPROCESSOR(string AI_RESPONSE)
{

    string response;
    //get logic template match template
//cout << AI_RESPONSE;

    return response;
}

string SYNTAXBRANCHER(string components, string preposition,string userinput)
{
    string describevar1 = "observe; of ";
    string describevar2 = "shape of ";
    string describevar3 = "color of ";
    string describevar4 = "action of ";
    string describevar5 = "mass of ";
    string howvar1 = "locate; of ";
    string howvar2 = "moving parts of ";
    string howvar3 = "direction of ";
    string howvar4 = "purpose of ";
    string howvar5 = "function of ";
    string whyvar1 = "logic; ";
    string whyvar2 = " ";
    string whyvar3 = " ";

    string whyvar5= "";
    string AI_RESPONSE =  DATAACTIVATOR(userinput);




//    string whyvar2 = magic4 +" are " + magic6 + " ";
//    string whyvar3 =  magic4 + " " + preposition + " have " + magic5 + " " + magic6 + " " ;;
    whyvar1 = preposition + " is for ";
    whyvar2 ="";
    string whyvar4 =   magic1 +" "+ magic2 +" "+ magic3 + " " + description +" "+ objects +" "+ magic4 + " " +  magic5 + " "+ magic6 + " " + magic7 + " ";
//    string whyvar5 =  " ";
    string whovar1 = "context; gender of ";
    string whovar2 = "the " +magic6 +" of ";
    string whovar3 = "the " + magic5 + " of ";
    string whovar4 = "what " + magic7 + " of ";
    string whovar5 = "the " + magic4 + "  of ";
    string CONSTRUCT1 ="$" + describevar1 + "," + describevar2 + "," + describevar3 +"," + describevar4 + "," + describevar5 + ",";
    string CONSTRUCT2 ="$"  + howvar1 + "," + howvar2 + "," + howvar3 + "," + howvar4 +"," + howvar5 + ",";
    string CONSTRUCT3 ="$" + whyvar1 + "," + whyvar2 + "," + whyvar3 + "," + whyvar4 +",";
    string CONSTRUCT4 = "$" + whovar1 + "," + whovar2 + "," + whovar3 + "," + whovar4 +"," + whovar5 + ",";
    //return request descrip[tor construct

    if (userinput.find("?") != -1)
    {

        string CONSTRUCT1 = "$"  + describevar1 + "," + describevar2 + "," + describevar3 +"," + describevar4 + "," + describevar5 + ",";
        string CONSTRUCT2 = "$"  + howvar1 + "," + howvar2 + "," + howvar3 + "," + howvar4 +"," + howvar5 + ",";
        string CONSTRUCT3 = "$"  + whyvar1 + "," + whyvar2 + "," + whyvar3 + "," + whyvar4 +"," + whyvar5 + ",";
        string CONSTRUCT4 = "$" + whovar1 + "," + whovar2 + "," + whovar3 + "," + whovar4 +"," + whovar5 + ",";
    }

//    return CONSTRUCT1 + CONSTRUCT2 + CONSTRUCT3 + CONSTRUCT4;;

    return CONSTRUCT3;
}
*/
string processKnowledge(string userinput,string knowledgebase) //add select knowledgebase
{
    //system("color 79");
    //  cout << "the developer is not responsible for the user's intent using this program." << endl;
    string userinputall, answerstring, theanswerready;
    float temp1;
    int combine;
    float divbuy;
    float divsell;
    string buykey, sellkey;
    int sweep = 0;
    int n = 0;
    desnumber = "count", desobject = "what", destime = "when", desdescription = "describe", desreason = "why", desplace = "where", desemotion = "feel", desaction = "how", descommand = "command", desbridge = "bridge",desconcept = "concept";
    //  cout << "SynthReason.  v0.8a" << endl;
    int sentstruc = 0;
    //  cout << "structure sentences speed hack? (1 or 0):";
    // cin >> sentstruc;
    // cout << endl;
    /*
           cout << "SETUP LANGUAGE:" << endl;

           cout << "#1:(why)"; getline(cin, desreason);


           cout << "#2:(describe)"; getline(cin, desdescription);


           cout << "#3:(when)"; getline(cin, destime);


           cout << "#4:(count)"; getline(cin, desnumber);


           cout << "#5:(what)"; getline(cin, desobject);


           cout << "#6:(who)"; getline(cin, desname);



           cout << "#7:(feel)"; getline(cin, desemotion);

           cout << "#8:(where)"; getline(cin, desplace);


           cout << "#9:(how)"; getline(cin, desaction); // makegame

    */
    if (trade == 1)
    {

        // cout << "(trade edition)" << endl;
    }

    while (0 == 0)
    {
        //    cout << endl;
        ifstream file;
        ofstream fileo;
        string line;
        ofstream textfile4;
        ofstream textfile;
        ucount = 0;
        wordcountstat = 0;
        //  cout << n << ":";
        ifstream::pos_type size;
        char *memblock;
        file.open(knowledgebase.c_str(), ios::in | ios::binary | ios::ate);
        if (file.is_open())
        {
            size = file.tellg();
            memblock = new char[size];
            file.seekg(0, ios::beg);
            file.read(memblock, size);
            file.close();
            answerstring = memblock;
            delete[]memblock;
        }
        if (sweep == 0)
        {
            speedprocessing = 0;
            // if (autothink == 0){
            //cout << ".";

            //    getline(cin, userinput);

            // autothink = 1;
            // }
            /* if (autothink == 1){ userinput.erase(); userinput =
               "describe " + retain + "?"; retain = retain2; } if
               (autothink == 2){ userinput.erase(); userinput = "what is
               " + retain + "?";

               } if (autothink == 3){ userinput.erase(); userinput =
               "why is " + retain + " " + retain2 + "?";

               } */
        }
        if (userinput == "load file")
        {


            if (Argc == 1)
            {
                userinputall = loadfile("test.txt");
            }
            if (Argc > 1)
            {
                userinputall = loadfile(Argv);
            }

            speedprocessing = 1;
            userinput.erase();
            sweep = 1;
        }
        if (userinput == "open new window")
        {
            //  system("start main.exe");

        }


        if (userinput == "show answerstring")
        {
            userinput.erase();
            cout << " Z=" << answerstring;
        }
        // if (userinput == "save answerstring")
        // {

        if (userinput == "show thought")
        {
            userinput.erase();
            cout << *thought;
        }
        if (userinput == "show structure")
        {
            userinput.erase();
            cout << *structure;
        }
        // if (userinput == "save answerstring")
        // {

        if (speedprocessing == 1)
        {
            answerstring.erase();
        }
        if (userinput == "load insight")
        {
            userinput.erase();
            string linei;
            ifstream textfilei;
            ifstream textfilei1;
            ifstream textfilei2;
            textfilei.open("ginsight.txt");
            while (!textfilei.eof())
            {
                getline(textfilei, linei);
                userinput = "you want " + linei;
                userinput = userinput + " :";
                answerstring += processlanguage(userinput);
                linei.erase();
            }
            textfilei2.open("self.txt");
            while (!textfilei2.eof())
            {
                getline(textfilei2, linei);
                userinput = "you are " + linei;
                userinput = userinput + " :";
                answerstring += processlanguage(userinput);
                linei.erase();
            }

            textfilei.close();
            textfilei1.close();
            textfilei2.close();
        }
        if (userinput == "switch mode")
        {
            userinput.erase();
            if (trade == 0)
            {
                trade = 1;
            }
            if (trade == 1)
            {
                trade = 0;
            }
        }
        if (userinput == "E41A")
        {
            userinput.erase();
            while (0 == 0)
            {

                cout << "ERROR" << endl;
            }
        }
        if (userinput == "E41B")
        {

            userinput.erase();
            userinputall.erase();
            answerstring.erase();
            textneeded.erase();
            lineneeded.erase();
            notes.erase();
            line.erase();
            word.erase();
        }
        if (userinput == "trade?")
        {
            userinput.erase();
            float temp1;
            int combine = buy + sell;
            divbuy = buy / combine;
            divsell = sell / combine;
            divbuy *= 100;
            divsell *= 100;
            if (divbuy > 50)
            {
                cout << "ACTION: BUY, ";
                temp1 = divbuy - 50;
            }

            if (divsell > 50)
            {
                cout << "ACTION: SELL, ";
                temp1 = divsell - 50;
            }

            if (divbuy == 50)
            {
                cout << "ACTION: NOTHING, ";
                temp1 = divbuy - 50;
            }


            cout << "Probability of Success: ";
            if (temp1 >= 0 && temp1 < 2)
            {
                cout << "CRITICALLY LOW" << endl;
            }
            if (temp1 <= 3 && temp1 > 2)
            {
                cout << "LOW" << endl;
            }
            if (temp1 <= 4 && temp1 > 3)
            {
                cout << "MEDIUM" << endl;
            }
            if (temp1 <= 5 && temp1 > 4)
            {
                cout << "HIGH" << endl;
            }
            if (temp1 <= 6 && temp1 > 5)
            {
                cout << "VERY HIGH" << endl;
            }

            if (temp1 > 6)
            {
                cout << "Guaranteed " << endl;
            }

            cout << "Points: " << temp1 << endl;
            cout << "Buy markers: " << buy << " Sell markers: " << sell << endl;
        }

        if (userinput == "found?")
        {
            userinput.erase();
            cout << "number found: " << found << endl;
        }

        if (userinput == "show notes")
        {
            userinput.erase();
            cout << notes;
            m++;
        }

        if (userinput == "process info")
        {
            //system("start main \"web.txt\"");
        }

        if (userinput == "show userinputall")
        {
            userinput.erase();
            cout << userinputall;
            m++;
        }


        if (userinput == "show reasonchain")
        {

            cout << chainreason;
        }

        if (userinput == "think")
        {
            int structposA = 0,structposB;
            int thoughtposA = 0,thoughtposB;
            int x = 0,y = 0;
            string structurestr = structure[x];
            string thoughtstr = thought[y];
            int o = 0,p = 0;
            while (o<10)
            {


                structposB = structurestr.find(" ",structposA);
                cout << "STRUCT:" << structposA << " " << structposB ;
                //  string structureword = structurestr.substr(structposA,structposB-structposA);
                structposA = structposB+1;
//userinput = "describe thought?";

                thoughtposB = thoughtstr.find(" ",thoughtposA);
                cout << "  PROCESS:" << thoughtposA << " " << thoughtposB << endl;
                // string thoughtword = thoughtstr.substr(thoughtposA,thoughtposB-thoughtposA);
                thoughtposA = thoughtposB+1;
                //  cout << thoughtword;
                o++;
            }

        }

        if (userinput == "open auto window")
        {

            //system("main \"auto.txt\"");
        }

        if (userinput == "save notes")
        {
            userinput.erase();
            string line0;
            ofstream textfile0;
            textfile0.open("notes.txt");
            textfile0 << notes;
            textfile0.close();
        }

        if (userinput == "process notes")
        {
            userinput.erase();
            trade = 0;
            sweep = 1;
            procnote = 1;
        }

        if (sweep == 1)
        {

            if (procnote == 0)
            {


            }
            if (procnote == 1)
            {
                userinputall = notes + ":";
            }

            if (procnote == 0)
            {
                b = userinputall.find(".", a + 2);
                userinput = userinputall.substr(a, b - a + 1);
                a = userinputall.find(".", a + 1);
            }

            if (procnote == 1)
            {
                b = userinputall.find(":", a + 2);
                userinput = userinputall.substr(a, b - a + 1);
                a = userinputall.find(":", a + 1);
            }


        }
        if (a == userinputall.size() - 1)
        {
            sweep = 0;
            a = 0;
            b = 0;
        }
        if (procnote == 0)
        {

            int remdot = userinput.find(".");
            if (remdot == 0)
            {
                userinput = userinput.substr(1, userinput.size() - 1);
            }
            remdot = userinput.find(".");
            if (remdot > 0)
            {
                userinput = userinput.substr(0, userinput.size() - 1);
            }
        }
        if (procnote == 1)
        {
            int remdot = userinput.find(":");
            if (remdot == 0)
            {
                textfile << answerstring;
                textfile.close();
                userinput = userinput.substr(1, userinput.size() - 1);
            }
            remdot = userinput.find(":");
            if (remdot > 0)
            {
                userinput = userinput.substr(0, userinput.size() - 1);
            }
        }
        //    cout << userinput << endl;
//      system("sleep 0.3");
        //  system("clear");
        // cout << remdot << " ";
        question = userinput.find("?");
        if (question > -1)
        {
            userinput = userinput.substr(0, question);
            userinput.append(" ?");
        }
        if (procnote == 0)
        {
            userinput = userinput + " :";
        }

        if (sentstruc == 0)
        {
            answerstring += processlanguage(userinput);
        }
        // cout << answerstring;
        if (trade == 0)
        {
            if (sentstruc == 0)
            {
                theanswerready = processresponsealgbraic(answerstring, userinput);
            }
        }
        if (question == -1)
        {
            if (trade != 1)
            {
                // cout << "[" << anscount << " out of " << ucount << "
                // words
                // in sentence recognised" << "]" << endl;
            }
        }
        if (fail == 1)
        {
            // theanswerready = processresponselogic();
        }


        int numresp = 0;
        stringstream(theanswerready) >> numresp;
        chainreason += theanswerready;
        if (userinput.find("why") > -1)
        {
            chainreason += "~";
            goto chainrecogniseend;
        }


        if (userinput.find("what") > -1)
        {
            chainreason += "^";
            goto chainrecogniseend;
        }

        if (userinput.find("when") > -1)
        {
            chainreason += "&";
            goto chainrecogniseend;
        }
        if (userinput.find("how") > -1)
        {
            chainreason += "*";
            goto chainrecogniseend;
        }
        if (userinput.find("describe") > -1)
        {
            chainreason += "+";
            goto chainrecogniseend;
        }

        if (userinput.find("who") > -1)
        {
            chainreason += "#";
            goto chainrecogniseend;
        }
chainrecogniseend:
        /* if (autothink> 0) {

           theanswerready = retain; }
        *
           if (autothink>0){ autothink++; }

           if (autothink == 4){ autothink = 0; } */
        if (numresp < 200 && numresp > 0)
        {

            string respline;
            ifstream resptextfile;
            resptextfile.open("response.txt");
            int x = 1;
            while (!resptextfile.eof())
            {
                getline(resptextfile, respline);
                if (x == numresp)
                {
                    cout << respline << endl;
                }

                x++;
            }
            resptextfile.close();
        }



        // cout << endl << answerstring << endl;


        if (speedprocessing == 1)
        {
            textfile4.open(knowledgebase.c_str(), ios::app);
            textfile4 << answerstring;
            textfile4.close();
        }
        /*
                ofstream NLP;
                NLP.open("NLP.txt");
                NLP << theanswerready;
                NLP.close();
        */
        /* ofstream file1; ofstream::pos_type size1; char *
           memblock1; file1.open("knowledgebase.txt",
           ios::out|ios::binary); if (file.is_open()) { size1 =
           file.tellg(); memblock1 = new char [size1]; file.seekg
           (0, ios::beg); //memblock1 = answerstring;
           strcpy(memblock1,answerstring.c_str()); file1.write
           (memblock1, size1); file1.close(); answerstring =
           memblock1; delete[] memblock1;

           } */
        n++;





        if (points < 0)
        {
            //	warning2(points);
            //     break;
        }
        // cout << userinput;
        //  string curl = "curl.exe www.bing.com?q=" + synthanswer + ">> web.txt";
//        cout << curl << endl;
        if (sweep == 0 && question == -1)
        {
            //   system(curl.c_str());
            // cout << curl;
        }

        string theanswerready2 = synthanswer;
        // cout << "AI THOUGHTS: " << " " << theanswerready << " ?" <<          " paragon:" << points << endl;
        // self question descriptor algo or programable inference
        // who is in the x? describe the x? what drinks are in the
        // x? command
        // object to self
        // self to object
        // self to idea
        // idea to self
        // des to self
        // self to des
        if (userinput.find(descommand) != -1)
        {

            string data;

            ifstream reason;

            string line;

            reason.close();
            reason.open("objects.txt");
            while (!reason.eof())
            {
                getline(reason, line);
                int pos =  userinput.find(line);
                if (pos != -1)
                {
                    objects = line;
                }
            }

            synthcom = theanswerready + " " + objects.c_str();
            //	synthreasonword = word;

//            cout << "$" << synthcom << "$";
            //system(synthcom.c_str());
            cout << endl << synthcom << endl;

        }
        //  string preposition = GETPREPOSITION(userinput);
        // string BRANCH = SYNTAXBRANCHER(theanswerready2 + theanswerready, preposition,userinput);

        //   string SYNTAX = SYNTAXEXTRACTOR(BRANCH, preposition, userinput);

        // string AI_RESPONSE = BRANCH + SYNTAX;

        // RESPONSEINITPROCESSOR(AI_RESPONSE);

//thought[thoughtcount] = theanswerready;
        //strcpy(thought[thoughtcount],theanswerready.c_str());
        //cout << endl << endl;
        //thoughtcount++;

        return theanswerready;
    }
    userinput.erase();

}







int main(int argc, char** argv)
{
    int count1 = 0;
     system("color 79");
    std::string input,presentthought,MODS,MODL,mods,concepts,modifier,ConceptLocator,LocatedConcept,WordHandle,sub,word,concept,conceptfromsub,level,AIControlLogic = "I II III O",AIControlLogicDefinitions = ":First Person:Second Person:world:cycle repeat:",AIEthics = "DHH DHM",AIEthicsDefinitions = ":Do not harm any human:Do not harm myself:do not make weapons:",AIMandates = "EP CD ISL",AIMandatesDefinitions = "{End poverty}{Cure disease}{Improve standard of living}{learn}";//($universe/system)Control logic(causality,space,time,protocol etc..)//one(self) person sim,Two(self included) person sim, world sim, cycle.(DANGER! THIS AI CONTROL LOGIC IS STRICTLY NON COMPATIBLE WITH THE RELIGION OF CHRISTIANITY! OR ANY OTHER NON-LOGICAL THEOLOGY,IDEA OR CONCEPT INVOLVING NON EXISTENT ENTITIES(correlation can become destructive)//AI ethics incorperates decision retardents when any set ethic is violated.AI ethics description ensure the artificial intelligence can comprehend the code of conduct without imaginative or postulative interpretations. if a description is set, the imaginative or postulative feature of this component is disabled//AI mandates ensure the Artificial intelligence has atleast one purpose.AI mandates descriptions ensure the artificial intelligence can comprehend the code of conduct without imaginative or postulative interpretations. if a description is set, the imaginative or postulative feature of this component is disabled.
    int LocateConcept;
    int phase = 0;
    Argc = argc;
    /*
    //add "(no major) expression mechanism for this program"//regulate impact
    if (argv[1] != NULL){
    Argv = argv[1];
    }
    srand (time(NULL));
    	Begin:// 'O', Natural cycle// cycle is placed before the 'input' code segment therefore feedback, simmilar to the artificial mind being alive and processing stimuli from an environment outside the mind's existential barriers
    level ="george";
    	std::cout << "Initate consciousness: ";	getline (std::cin,input);std::cout << std::endl;level = input;//recieve input
    	std::ifstream Words;Words.open("words.txt");if (Words.is_open()){while(!Words.eof()){getline(Words,sub);//open and read vocabulary,Initiate subconscious loop//the subconscious loop runs consistently and serves up/is requested by the conscious mind, information via mechanisms in place to support that(those) function(s)
    	if(/*sub[0] == level[level.length()-1] &&*//* rand() % 3000 - 1 == 1){//the first conditional determines whether a word accessed from the vocabulary meets required logic linking system criteria//add rand select function//this randomization function serves to alternate word,concept and possibly idea access and processing timings, randomly.
std::cout << "Conscious: " << level << endl << "Subconscious: " << sub << std::endl;//Displays a word from subconscious
word = sub;
std::cout << "Choosing which concepts to enrich" << std::endl;	//concept analysis(select)//an analysis of stored concepts is made against requisites of primarily, the 'AI Control Logic Preference', then, Secondarily the 'AI Preference Logic System' in order to determine concept enrichment// AI Control logic Preference+(AI Mandate?)(Ethics?)(*Within concepts, can direct analysis)
//go through ideas,thought, concepts and mandates,check to see if and concepts,thoughts or ideas have mandates, work on mandates if true or continue searching if mandate progress stalls else continue searching
std::cout << "Retrieving concept of level" << std::endl;	//get concept of level//this function brings information from the subconscious into observation of higher level, perhaps conscious cognition systems
std::ifstream Concepts;Concepts.open("Concepts.txt");if (Concepts.is_open()){while(!Concepts.eof()){getline(Concepts,concept);
ConceptLocator = "{" + word + "}";
LocateConcept = concept.find(ConceptLocator);
if (LocateConcept > -1){//LocatedConcept = concept;

}}
}
	//web access...
	//add more recognition ways, perhaps programmable disctinction systems
	//curl? //access dictionary to get word concept/meaning
	std::cout << "Searching for concept from word risen from sub" << std::endl;	//find concept of sub//this function,by potentially many methods of retrieval, tries to locate concepts strictly or tangably related to information served up by or requested to the subconscious
	Concepts;Concepts.open("Concepts.txt");if (Concepts.is_open()){while(!Concepts.eof()){getline(Concepts,concept);
ConceptLocator = "{" + sub + "}";
LocateConcept = concept.find(ConceptLocator);
if (LocateConcept > -1){LocatedConcept = conceptfromsub;}}
//locate concept ending
}
//web access...
//add more recognition ways, perhaps programmable disctinction systems
	//access dictionary to get word concept/meaning
std::cout << "Thinking dev test 1";	//concept match //(sorting and storing)//information is sorted via either explicit or tangable relationships to one another


//linguistics engine be prep//logic engine be prep//description//function//etc...
//standard Processknowledge activity//make dynamic
std::string processcommand = "how " + level + "?";
std::cout << ".";
string modsprep;
cout << ".";
modsprep = processKnowledge(processcommand,"generalkb.txt");
//cout << modsprep;
if(modsprep.length() > 3){
mods = level + "=:" + modsprep + ";";
}
processcommand = "how " + sub + "?";
cout << ".";
modsprep = processKnowledge(processcommand,"generalkb.txt");
if(modsprep.length() > 3){
mods += sub + "=:" + modsprep + ";";
}
//std::cout << std::endl << mods << std::endl;
//	mods = "rabbet=:spelt incorrectly:furry:stereo typically eats carrots:;laager=:drinkable:test( i know it is not a drink... this is for demo purposes.....):brown:alcohol:fizzy:;hose=:connectable:long:green:;e-mail=:digital:fast:letter:typed:written:;tap=:brown:connectable:mechanical:;end poverty=:surplus food:surplus housing:decrease product cost:;";
//std::cout << mods;
	std::string searchfor = level + "=";
	std::string searchfor2 = sub + "=";
	int searchstart = mods.find(searchfor);
	int searchend = mods.find(";",searchstart);
	int searchstart2 = mods.find(searchfor2);
	int searchend2 = mods.find(";",searchstart2);
	if (searchstart > -1 && searchstart2 > -1){ // changeable
	std::string Gmod = mods.substr(searchstart,searchend-searchstart - 1);
	std::string Gmod2 = mods.substr(searchstart2,searchend2-searchstart2 -1);
//		std::cout << "gmod:" << Gmod << " " << Gmod2;
	int searchposS = Gmod.find(":",0);
	int searchposE = Gmod.find(":",searchposS+1);
	if (searchposE == -1){break;}
		if (searchposE != -1){while (searchposE < Gmod.length() -3){
			//searchstart = mods.find(searchfor);
			if (searchposE < Gmod.length()){
			MODL = Gmod.substr(searchposS+1,searchposE-searchposS-1);}
			int searchposS2 = Gmod2.find(":",0);
			int searchposE2 = Gmod2.find(":",searchposS2+1);
				if (searchposE2 == -1){break;}
				if (searchposE2 != -1){
					while (searchposE2 < Gmod2.length()- 3){
					//sub
					//action ;D
					if (searchposE2 < Gmod2.length()){
					MODS = Gmod2.substr(searchposS2+1,searchposE2-searchposS2-1);}
				//std::cout << std::endl << MODL << " " << MODS;
					*/
    //----------------------------Cognition---------------------------------------
    //once cognition stage is reached, free access to the program components is allowed logically,componentify basic code for easy access(TODO much later...)

    //3mechanism systems//consciousness ~opcode processing

    //5programmable disctinction systems

    //4recognition systems

    //2logic generation

    //reference body(psychology for starters)e.g "how think",semantic introspection of object body with content from reference acting on context of focus(knowledgebase selection)
    //notes:
    /*
    *=(how answer-> action for AI? at varying levels of intended capability)//describe potential solution....
    $ = describe answer -> work, effort
    became(fix via lingustics engine "Become) major*  euro-american,poverty(see*) observed("observation")  may defined*("define") problematic("problems") research part* thinking relate* decline/epidemic other:describing now(maybe should of used descriptions earlier): seen("see") epidemic($) primary work not($) feeling experience("$") sharp when
    //lives contrast social level better level terms question key. provide feed between engage .election?. that causes levels not seem believable. bias are economic good have top predicted levels, better different influence cognitive thinking own down own styles

    //choose knowledgebase




    */
    cout << "SynthReason 0.9N (BiConsciousSymmetricalProcessor)- Beta - George Wagenknecht - Jan 2017" << endl;
    string processToolprev;
    Config();
    string word1;
    /*
    int RDB3,RDB6,RDB8;
    cout << "Process Relational Database 3(0 or 1)";
    cin >> RDB3;
    cout << "Process Relational Database 6(0 or 1)";
    cin >> RDB6;
    cout << "Process Relational Database 8(0 or 1)";
    cin >> RDB8;
    */
    int AGE = 0;
    int ent = 5;

         std::string processObject,key,processTool;
        cout << endl << "Initilise KnowledgeBase:";
        getline(cin,processTool);
    while(0==0)
    {
        string joined;
        //logic system basic representation//basic story
        std::string processObject,key;
      //processTool = "conscious";


       // cout << "Entropy:";
     //   cin >> ent;
       ent = 7;
        filename = processTool + "-"+ key + "?.txt";

       // cout <<  endl;
logout.open("logout.txt",ios::app);
logout << "Initiating Lexeme Processor:" << endl;

      //  cout << " " << key << " ";
        //logout <<  endl << Logicthinkdescribe << endl;
      //  string OUTPUTSTR = processKnowledge(Logicthinkdescribe,processTool.c_str());
        //how think//cycle
logout.close();
// cout << endl << "OUTPUT:" <<  OUTPUTSTR << endl;
//        File2.close();
        // File2.open(filename.c_str());
        //  File2.close();
        processToolprev = processTool;
        ifstream File0;
//ifstream File2;
        ifstream File3;
        ifstream File3a;
        ifstream File4;
        ifstream File5;
        ifstream File6;
        ifstream File6a;
        ifstream File7;
        ifstream File7a;
        ifstream File8;
        ifstream File8a;
        ifstream File9;
        ifstream File10;
        ifstream File11;
//cout << word1  << endl << line;

        processToolprev = processTool;
        ofstream OUTPUTFILE;
        OUTPUTFILE.open("status.txt");
        OUTPUTFILE.close();
        string CC;

        int s1 = 0,s2 = 0;
        string C;
        string Core = ",mind,RDB2,thought,subconscious,feedback,stimulus,live,explore,space,expanse,conscious,";

        string desname, desobject, desaction, destime, desdescription, desnumber, desreason, desplace, desemotion,
       descommand,desbridge,desgame,desconcept;
string desadj ="desadj",desadjp = "desadjp",desadv="desadv",desadvtime= "desadvtime",desprep = "desprep",desqualities = "desqualities",desverb = "desverb";

        string desstructarray[] = {"describe","how","when","who","what","count","why","where","feel","command","bridge","game","concept"};
        string SentStruct[] = {"desadj","desadjp","desadv","desadvtime","desprep","desqualities","desverb"};
        string structarray[]= {"desverb","describe","desqualities"};
int J = 0;
        Core = ",conscious,";
        string newrequest;
       // key = word1;
       int Q = 0;
      //  int A = userinputA.find(" "),B = userinputA.find(" ",A+1);
      int loop = 0;


  cout << endl << "Context:";

       // getline(cin,userinputA);

        getline(cin,key);
        std::string Logicthinkdescribe = "describe " + key + "?";
        while(0==0)
        {


        //string wordA = userinputA.substr(A,B-A);

//if (B < userinputA.length()-3){
//        A = userinputA.find(" ",A+1),B = userinputA.find(" ",B+1);
//}
       // cout << wordA << endl;
  //      key = wordA;


            if (processTool == "thought"){
                    ifstream xx;
                    string a,aa;
            xx.open("RDB2");
            aa.erase();
            while(!xx.eof()){
                getline(xx,a);
                aa += a;
                }
                 xx.close();
                 ofstream qq;
                 qq.open("memory",ios::app);
                 qq << aa;
                 qq.close();
                  ofstream xxx;
                  xxx.open("RDB2");
                  xxx.close();
            }
            /*
            if (processTool == "conscious"){

                ifstream Openfile;
                string LINE,LINEFULL;
                Openfile.open("memory");
                while (!Openfile.eof()){
                    getline(Openfile,LINE);
                    LINEFULL += LINE;
                }
                //cout << endl << "Age of being(cycles): " << AGE << " Experience: " << LINEFULL.length()/10000 << endl;
                AGE++;
                Openfile.close();
            }
            */
           // string B,BB,C;
            ifstream infile;
//CORE PROTECTION



//-----------------------------------------------------------------------------------------------------------------------------



            s1 = Core.find(",",s1);
            s2 = Core.find(",",s1+1);

          //  processTool = Core.substr(s1+1,s2-s1-1);

//cout << processTool;


/*

            if (processTool != "RDB2" || processTool != "memory" )
            {
                infile.open(processTool.c_str());
                while (!infile.eof())
                {
                    getline(infile,B);
                    BB += B;
                }
                BB += processTool;

CC += sha512(BB);
                infile.close();

            }
            */
            //cout << endl << endl << processToolprev << " ==> " <<  processTool << endl;
logout.open("logout.txt",ios::app);
logout << processToolprev << " ==> " <<  processTool << endl;
logout.close();
            filename = processTool  + "-"+ key+ "?.txt";
            /*
if (key.length() == 0){
 if (CHOICE == false){
 CHOICE = true;
 }

if (CHOICE == true){
 CHOICE = false;
 }

}
 if(CHOICE == false){

 int RAND1 = rand() % 13 + 1;
*/


//cout << endl << "Function:";
string xoxo;
//getline(cin,xoxo);

newrequest += xoxo + " ";
xoxo = structarray[J];
J++;
if (J == 2){
      // key = newrequest;
 J = 0;
   // cout << endl;
}


Logicthinkdescribe = xoxo + " " + key + "?";
//cout << Logicthinkdescribe;
//cout << userinput;
           // Logicthinkdescribe = structarray[count1] + " " + key + "?";
         //   count1++;
           //   if (count1== 2){
             //   count1 = 0;
              //}

          //  CHOICE = true;
 //}

/*
  if (CHOICE == true){
 int RAND2 = rand() % 7 + 1;

            Logicthinkdescribe = SentStruct[count1] + " " + key + "?";
  }
*/
            logout.open("logout.txt",ios::app);
            logout << Logicthinkdescribe << " "<< processTool << endl;
            logout.close();
          //  cout << " " << key << " " << endl;
        /*     if (CHOICE == false){
            processKnowledge(Logicthinkdescribe,processTool.c_str());
             }ez
               if z(CHOICE == true){
          */
           processKnowledge(Logicthinkdescribe,processTool.c_str());
  //         cout << Logicthinkdescribe << endl;
            // }
            //ho,w think//cycle
           int start = 0;
//            File2.open(filename.c_str());
            srand (time(NULL));
            int num = rand() % ent + 1,length1 = 0,length2 = 0;
          string line = Sout;
          //    cout << Sout;
            while (num != ent/2)
            {
                 num = rand() % ent + 1;
             //    cout << num;
                srand (time(NULL));
                int test = line.find(">",start + 1);
                int test1 = line.find(">",test + 1);
                if (test1 == -1)
                {
                    start = 0;
                }

//                getline(File2,line);
                length1 = line.find(">",start + 1);
                length2 = line.find(" ",length1 + 1);

//cout << length1 << " " << length2;
                word1 = line.substr(length1 + 1,length2 - length1 - 1);
                ifstream infile2;
                infile2.open("E");
                D.erase();
                E.erase();
                F.erase();
                //   while (!infile2.eof())
                //    {
                //       getline(infile2,F);
                //       D += F;
                // }
//E = sha512(D);
//}

                //  if (E != EE)
                //   {
//while (0==0){
                //    }
                //    infile2.close();
             /*   if (num==ent/2  && filesearch(word1,"E") == 0)
              {
                logout.open("logout.txt",ios::app);
                logout << Sout << endl;
                logout.close();
                       Sout.erase();
                    break;
                }
         */                   start = length2;
            }
//            File2.close();
            //   File2.open(filename.c_str());
            //   File2.close();
            //processToolprev = processTool;

            //s1 = s2;

           // if (s2 + 3 > Core.length())
            //{
              //  s1 = 0,s2 = 0;

            //}
           key = word1;



      //     if (Q == 1){
       //  cout << key << " ";
            Q = 1;
         // }
        //      if (Q = 1){
            cout << word1 << " ";
        //    Q = 0;
      //     }
//-----------------------------------------------------------------------------------------------------------------------------



            if (CC != NE && processTool == "conscious" && processTool != "RDB2")
            {
//cout << endl << "Stability error!" << endl;
//break;
//cout << CC;
            }

            if (processTool == "conscious")
            {
                CC.erase();


            }

if (loop == 6){

            break;
        }
        loop++;
        }




    }
    //	cout << endl;
    //question subject matter of describe

    //add how, add answer,add describe



    /*
    //1 relationship systems
    if (MODL == MODS){
    //add to concept
    //cout << mods << endl;
    std::string MODstr = MODS;
    if(MODstr.length() > 2){
    concept += "(VerbatimHowMatch)" + MODstr + ":";
    }
    }




    //-----------------------------------------------------------------------------


    searchposS2 = Gmod2.find(":",searchposE2+1);
    searchposE2 = Gmod2.find(":",searchposS2+1);
    }
    searchposS = Gmod.find(":",searchposE+1);
    searchposE = Gmod.find(":",searchposS+1);
    //search level mods
    //search sub(word) mods
    //is ....
    //store
    if (searchposE == -1){break;}
    }
    }
    }
    }
    //concept v.s conceptfromsub
    //datapoints
    //sorting gain list, special tally(programmable)
    std::cout << std::endl << "Processing thought" << std::endl;	//add concept if not exist//if concept match, add thought to concept xN//this function produces information after set conditionals,appied logic systems,ethics and mandates processing into categories 'concept', 'thought' and 'idea' and inserts any form of label (sets)
    //generate word, sub,level, linguistics engine,logic engine
    if(concept.length() > 3){concept += ";";}
    if(concept.length() > 3){
    presentthought = "{" + sub + " " + level + "}:";//simple word addition for concept proposal/label()
    std::string present = presentthought + concept;
    concept = present;
    }
    std::cout << "connecting and traversing ideas components & mechanisms    (concept test):" << presentthought;//if the ability to travese ideas is disabled the AI can no longer grow in terms of intellectual capacity
    //search for and process meanings of mandate, cross reference to thought, if simmilar via modifiers var 50% match per proportion, then generate via idea
    // check to see if meets ethics requiements
    //does concept agree to mandates?
    // check if thought not exist

    //status, success or fail,exit thought upon fail of ethics

    std::cout << std::endl << "Storing data" << std::endl;	//information management	//(sorting and storing)//this function stores sorted and generated information into permanent or semi-permanent data storage devices
    std::cout << endl << "show concept test: "<< concept;
    std::cout << "Deciding whether to diverge information branches" << std::endl;	//concept analysis & comparision (diverge? continue?)//this function determines if a task of higher priority is unattended to(possibly due to insufficient information) or if the learning dynamics are not properly being utilised so the attention of objects can diverge into more prosperous activity

    int searchformandatematch = AIMandatesDefinitions.find(presentthought);
    if (searchformandatematch > -1 ) {
    //continue working on thought/idea/concept yada yada yada
    }
    if (searchformandatematch == -1 ) {
    //continue
    }
    std::cout << "Deciding whether to publish idea to storage/simulation" << std::endl << std::endl;	//if concept ideal, add thought to an idea(have blank idea spaces for starting ideas)//this function, depending on configuration either determines whether an idea is ready for simulation and stores it or lets a user decide if an idea is ready for simulation and store it

    level = sub;//before or after staging sim
    //(concept?)/idea staging sim// AIControlLogicIteration
    }}goto Begin;}//cycle
    return 0;
    */
    /*ofstream dump;
    dump.open(filename.c_str());
    dump << joined;
    dump.close();
    */
}

//free will
