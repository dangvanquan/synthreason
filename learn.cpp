
//[WARNING] - Robust information search & manipulation intelligence.
/* the developer is not responsible for the user's intent using this program
*/

// SynthReason v0.2g //todo give AND
// functionallity
// copyright george wagenknecht may 2015
// property of george wagenknecht
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <stdio.h>
#include <algorithm>

using namespace std;
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
string word;
string textneeded;
string notes;
string fileone = "fileone.txt";
string filetwo = "filetwo.txt";
string chainreason,synthlogictemp;
string magic1 = "",magic2 =   "",magic3= "",magic4 = "", magic5 = "", magic6, magic7, objects, description,actions;
string desname, desobject, desaction, destime, desdescription, desnumber, desreason, desplace, desemotion,
       descommand,desbridge,desgame,desconcept;
// Scan mode 0 = intelligent. 1 = skim mode
string desadj ="desadj",desadjp = "desadjp",desadv="desadv",desadvtime= "desadvtime",desprep = "desprep",desqualities = "desqualities",desverb = "desverb";



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
    ifstream datafile;
    string line;
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
        // if (line.find(segment) != -1)
        if (line == segment)
        {
            pos = 1;
            break;
        }
    }

    datafile.close();
    if (pos == 1)
    {
        exists = 1;
    }
    if (pos == 0)
    {
        exists = 0;
    }
    line.erase();
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
int main(int argc, char *argv[])
{
    system("color 79");
    cout << "the developer is not responsible for the user's intent using this program." << endl;
    string userinputall, userinput, answerstring, theanswerready;
    float temp1;
    int combine;
    float divbuy;
    float divsell;
    string buykey, sellkey;
    int sweep = 0;
    int n = 0;
    desnumber = "count", desobject = "what", destime = "when", desdescription = "describe", desreason = "why", desplace = "where", desemotion = "feel", desaction = "how", descommand = "command", desbridge = "bridge",desconcept = "concept";
    cout << "SynthReason.  v0.8a" << endl;
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
        cout << endl;
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
        file.open("knowledgebase.txt", ios::in | ios::binary | ios::ate);
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
            cout << "USER: ";

            getline(cin, userinput);

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


            if (argc == 1)
            {
                userinputall = loadfile("test.txt");
            }
            if (argc > 1)
            {
                userinputall = loadfile(argv[1]);
            }

            speedprocessing = 1;
            userinput.erase();
            sweep = 1;
        }
        if (userinput == "open new window")
        {
            system("start main.exe");

        }


        if (userinput == "show answerstring")
        {
            userinput.erase();
            cout << answerstring;
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
            system("start main \"web.txt\"");
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

            system("main \"auto.txt\"");
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
            textfile4.open("knowledgebase.txt", ios::app);
            textfile4 << answerstring;
            textfile4.close();
        }
        ofstream NLP;
        NLP.open("NLP.txt");
        NLP << theanswerready;
        NLP.close();
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
          cout << userinput;
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
            system(synthcom.c_str());
            cout << endl << synthcom << endl;

        }
      //  string preposition = GETPREPOSITION(userinput);
       // string BRANCH = SYNTAXBRANCHER(theanswerready2 + theanswerready, preposition,userinput);

     //   string SYNTAX = SYNTAXEXTRACTOR(BRANCH, preposition, userinput);

       // string AI_RESPONSE = BRANCH + SYNTAX;

        // RESPONSEINITPROCESSOR(AI_RESPONSE);
        cout << "[" << theanswerready << "]";
//thought[thoughtcount] = theanswerready;
        //strcpy(thought[thoughtcount],theanswerready.c_str());
        //cout << endl << endl;
        //thoughtcount++;
    }
userinput.erase();
    return 0;
}
