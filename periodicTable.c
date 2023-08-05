#include<stdio.h>
#include<string.h>

int num;
int numm;
int an;
char ele[100];

int periodic()
{
    printf("\n--------------------- PERIODIC TABLE ------------------------------- \n\n\n");
    printf("Enter 1 for searching the element through its atomic number . \n");
    printf("Example for Oxygen  Enter 8\n\n");

    printf("Enter 2 for searching the element through its name  . \n");
    printf("Example for Oxygen  Enter oxygen \n\n\n");

    printf("ENTER : ");
    scanf("%i", &num);
}

int periodicTable(){ 
    
    if(num==1)
    {
        printf("\nEnter the atomic number : \n");
        printf("{Example for Calcium  Enter 20}\n\n");
        printf("ENTER : ");
        scanf("%i", &an);

    }
    else if(num == 2)
    {
        printf("\nEnter the element : \n");
        printf("{Example for Calcium  Enter calcium }\n\n\n");
        printf("ENTER : ");
        gets(ele);
        scanf("%s", ele);
   
    }
    else
    {
        printf("\nInvalid");
    }

       
   char hydrogen[] = "hydrogen"; 
   int value1; 
   value1 = strcmp(ele , hydrogen);  

   char helium[] = "helium"; 
   int value2; 
   value2 = strcmp(ele , helium); 

   char lithium[] = "lithium"; 
   int value3; 
   value3 = strcmp(ele , lithium);

   char beryllium[] = "beryllium"; 
   int value4; 
   value4 = strcmp(ele , beryllium);

   char boron[] = "boron"; 
   int value5; 
   value5 = strcmp(ele , boron);

   char carbon[] = "carbon"; 
   int value6; 
   value6 = strcmp(ele , carbon); 

   char nitrogen[] = "nitrogen"; 
   int value7; 
   value7 = strcmp(ele , nitrogen);

   char oxygen[] = "oxygen"; 
   int value8; 
   value8 = strcmp(ele , oxygen);

   char fluorine[] = "fluorine"; 
   int value9; 
   value9 = strcmp(ele , fluorine);

   char neon[] = "neon"; 
   int value10; 
   value10 = strcmp(ele , neon);

    char sodium[] = "sodium"; 
   int value11; 
   value11 = strcmp(ele , sodium);

    char magnesium[] = "magnesium"; 
   int value12; 
   value12 = strcmp(ele , magnesium);

    char aluminum[] = "aluminum"; 
   int value13; 
   value13 = strcmp(ele , aluminum);

    char silicon[] = "silicon"; 
   int value14; 
   value14 = strcmp(ele , silicon);

   char phosphorous[] = "phosphorous"; 
   int value15; 
   value15 = strcmp(ele , phosphorous);

   char sulphur[] = "sulphur"; 
   int value16; 
   value16 = strcmp(ele , sulphur);

   char chlorine[] = "chlorine"; 
   int value17; 
   value17 = strcmp(ele , chlorine);

   char argon[] = "argon"; 
   int value18; 
   value18 = strcmp(ele , argon);

   char potassium[] = "potassium"; 
   int value19; 
   value19 = strcmp(ele , potassium);

   char calcium[] = "calcium"; 
   int value20; 
   value20 = strcmp(ele , calcium);

   char scandium[] = "scandium"; 
   int value21; 
   value21 = strcmp(ele , scandium);

   char titanium[] = "titanium"; 
   int value22; 
   value22 = strcmp(ele , titanium);

   char vanadium[] = "vanadium"; 
   int value23; 
   value23 = strcmp(ele , vanadium);

   char chromium[] = "chromium"; 
   int value24; 
   value24 = strcmp(ele , chromium);

   char manganese[] = "manganese"; 
   int value25; 
   value25 = strcmp(ele , manganese);

   char iron[] = "iron"; 
   int value26; 
   value26 = strcmp(ele , iron);

   char cobalt[] = "cobalt"; 
   int value27; 
   value27 = strcmp(ele , cobalt);

   char nickle[] = "nickle"; 
   int value28; 
   value28 = strcmp(ele , nickle);

   char copper[] = "copper"; 
   int value29; 
   value29 = strcmp(ele , copper);

   char zinc[] = "zinc"; 
   int value30; 
   value30 = strcmp(ele , zinc);


   char gallium[] = "gallium"; 
   int value31; 
   value31 = strcmp(ele , gallium);

   char germanium[] = "germanium"; 
   int value32; 
   value32 = strcmp(ele , germanium);

   char arsenic[] = "arsenic"; 
   int value33; 
   value33 = strcmp(ele , arsenic);

   char selenium[] = "selenium"; 
   int value34; 
   value34 = strcmp(ele , selenium);

   char bromine[] = "bromine"; 
   int value35; 
   value35 = strcmp(ele , bromine);

   char krypton[] = "krypton"; 
   int value36; 
   value36 = strcmp(ele , krypton);

   char rubidium[] = "rubidium"; 
   int value37; 
   value37 = strcmp(ele , rubidium);

   char strontium[] = "strontium"; 
   int value38; 
   value38 = strcmp(ele , strontium);

   char yttrium[] = "yttrium"; 
   int value39; 
   value39 = strcmp(ele , yttrium);

   char zirconium[] = "zirconium"; 
   int value40; 
   value40 = strcmp(ele , zirconium);

   char niobium[] = "niobium"; 
   int value41; 
   value41 = strcmp(ele , niobium);

   char molybdenum[] = "molybdenum"; 
   int value42; 
   value42 = strcmp(ele , molybdenum);

   char technetium[] = "technetium"; 
   int value43; 
   value43 = strcmp(ele , technetium);

   char ruthenium[] = "ruthenium"; 
   int value44; 
   value44 = strcmp(ele , ruthenium);

   char rhodium[] = "rhodium"; 
   int value45; 
   value45 = strcmp(ele , rhodium);

   char palladium[] = "pallidium"; 
   int value46; 
   value46 = strcmp(ele , palladium);

   char silver[] = "silver"; 
   int value47; 
   value47 = strcmp(ele , silver);

   char cadmium[] = "cadmium"; 
   int value48; 
   value48 = strcmp(ele , cadmium);

   char indium[] = "indium"; 
   int value49; 
   value49 = strcmp(ele , indium);

   char tin[] = "tin"; 
   int value50; 
   value50 = strcmp(ele , tin);


   char antimony[] = "antimony"; 
   int value51; 
   value51 = strcmp(ele , antimony);

   char tellurium[] = "tellurium"; 
   int value52; 
   value52 = strcmp(ele , tellurium);

   char iodine[] = "iodine"; 
   int value53; 
   value53 = strcmp(ele , iodine);

   char xeno[] = "xeno"; 
   int value54; 
   value54 = strcmp(ele , xeno);

   char caesium[] = "caesium"; 
   int value55; 
   value55 = strcmp(ele , caesium);

   char barium[] = "barium"; 
   int value56; 
   value56 = strcmp(ele , barium);

   char lanthanum[] = "lanthanum"; 
   int value57; 
   value57 = strcmp(ele , lanthanum);

   char cerium[] = "cerium"; 
   int value58; 
   value58 = strcmp(ele , cerium);

   char praseodymium[] = "praseodymium"; 
   int value59; 
   value59 = strcmp(ele , praseodymium);

   char neodymium[] = "neodymium"; 
   int value60; 
   value60 = strcmp(ele , neodymium);


   char promethium[] = "promethium"; 
   int value61; 
   value61 = strcmp(ele , promethium);

   char samarium[] = "samarium"; 
   int value62; 
   value62 = strcmp(ele , samarium);

   char europium[] = "europium"; 
   int value63; 
   value63 = strcmp(ele , europium);

   char gadolinium[] = "gadolinium"; 
   int value64; 
   value64 = strcmp(ele , gadolinium);

   char terbium[] = "terbium"; 
   int value65; 
   value65 = strcmp(ele , terbium);

   char dysprosium[] = "dysprosium"; 
   int value66; 
   value66 = strcmp(ele , dysprosium);

   char holmium[] = "holmium"; 
   int value67; 
   value67 = strcmp(ele , holmium);

   char erbium[] = "erbium"; 
   int value68; 
   value68 = strcmp(ele , erbium);

   char thulium[] = "thulium"; 
   int value69; 
   value69 = strcmp(ele , thulium);

   char ytterbium[] = "ytterbium"; 
   int value70; 
   value70 = strcmp(ele , ytterbium);


   char lutetium[] = "lutetium"; 
   int value71; 
   value71 = strcmp(ele , lutetium);

   char hafnium[] = "hafnium"; 
   int value72; 
   value72 = strcmp(ele , hafnium);

   char tantalum[] = "tantalum"; 
   int value73; 
   value73 = strcmp(ele , tantalum);

   char tungsten[] = "tungsten"; 
   int value74; 
   value74 = strcmp(ele , tungsten);

   char rhenium[] = "rhenium"; 
   int value75; 
   value75 = strcmp(ele , rhenium);

   char osmius[] = "osmius"; 
   int value76; 
   value76 = strcmp(ele , osmius);

   char iridium[] = "iridium"; 
   int value77; 
   value77 = strcmp(ele , iridium);

   char platinum[] = "platinum"; 
   int value78; 
   value78 = strcmp(ele , platinum);

   char gold[] = "gold"; 
   int value79; 
   value79 = strcmp(ele , gold);

   char mercury[] = "mercury"; 
   int value80; 
   value80 = strcmp(ele , mercury);


   char thallium[] = "thallium"; 
   int value81; 
   value81 = strcmp(ele , thallium);  

   char lead[] = "lead"; 
   int value82; 
   value82 = strcmp(ele , lead); 

   char bismuth[] = "bismuth"; 
   int value83; 
   value83 = strcmp(ele , bismuth);

   char polonium[] = "polonium"; 
   int value84; 
   value84 = strcmp(ele , polonium);

   char astatine[] = "astatine"; 
   int value85; 
   value85 = strcmp(ele , astatine);

   char radon[] = "radon"; 
   int value86; 
   value86 = strcmp(ele , radon); 

   char francium[] = "francium"; 
   int value87; 
   value87 = strcmp(ele , francium);

   char radium[] = "radium"; 
   int value88; 
   value88 = strcmp(ele , radium);

   char actinium[] = "actinium"; 
   int value89; 
   value89 = strcmp(ele , actinium);

   char thorium[] = "thorium"; 
   int value90; 
   value90 = strcmp(ele , thorium);

    char protactinium[] = "protactinium"; 
   int value91; 
   value91 = strcmp(ele , protactinium);

    char uranium[] = "uranium"; 
   int value92; 
   value92 = strcmp(ele , uranium);

    char neptunium[] = "neptunium"; 
   int value93; 
   value93 = strcmp(ele , neptunium);

    char plutonium[] = "plutonium"; 
   int value94; 
   value94 = strcmp(ele , plutonium);

   char americium[] = "americium"; 
   int value95; 
   value95 = strcmp(ele , americium);

   char curium[] = "curium"; 
   int value96; 
   value96 = strcmp(ele , curium);

   char berkelium[] = "berkelium"; 
   int value97; 
   value97 = strcmp(ele , berkelium);

   char californium[] = "californium"; 
   int value98; 
   value98 = strcmp(ele , californium);

   char einsteinium[] = "einsteinium"; 
   int value99; 
   value99 = strcmp(ele , einsteinium);

   char fermium[] = "fermium"; 
   int value100; 
   value100 = strcmp(ele , fermium);

   char mendelevium[] = "mendelevium"; 
   int value101; 
   value101 = strcmp(ele , mendelevium);  

   char nobelium[] = "nobelium"; 
   int value102; 
   value102 = strcmp(ele , nobelium); 

   char lawrencium[] = "lawrencium"; 
   int value103; 
   value103 = strcmp(ele , lawrencium);

   char rutherfordium[] = "rutherfordium"; 
   int value104; 
   value104 = strcmp(ele , rutherfordium);

   char dubnium[] = "dubnium"; 
   int value105; 
   value105 = strcmp(ele , dubnium);

   char seaborgium[] = "seaborgium"; 
   int value106; 
   value106 = strcmp(ele , seaborgium); 

   char bohrium[] = "bohrium"; 
   int value107; 
   value107 = strcmp(ele , bohrium);

   char hassium[] = "hassium"; 
   int value108; 
   value108 = strcmp(ele , hassium);

   char meitnerium[] = "meitnerium"; 
   int value109; 
   value109 = strcmp(ele , meitnerium);

   char darmstadti[] = "darmstadti"; 
   int value110; 
   value110 = strcmp(ele , darmstadti);

    char reontgeniu[] = "reontgeniu"; 
   int value111; 
   value111 = strcmp(ele , reontgeniu);

    char coperniciu[] = "coperniciu"; 
   int value112; 
   value112 = strcmp(ele , coperniciu);

    char nihonium[] = "nihonium"; 
   int value113; 
   value113 = strcmp(ele , nihonium);

    char flerovium[] = "flerovium"; 
   int value114; 
   value114 = strcmp(ele , flerovium);

   char moscovium[] = "moscovium"; 
   int value115; 
   value115 = strcmp(ele , moscovium);

   char livermoriu[] = "livermoriu"; 
   int value116; 
   value116 = strcmp(ele , livermoriu);

   char tennessine[] = "tennessine"; 
   int value117; 
   value117 = strcmp(ele , tennessine);

   char oganesson[] = "oganesson"; 
   int value118; 
   value118 = strcmp(ele , oganesson);

   



   if(an == 1 || value1 == 0)
    {
        printf("\n\nELEMENT : Hydrogen\n");
        printf("Symbol : H\n");
        printf("Atomic number : 1\n");
        printf("Mass Number : 1.00784\n");
        printf("Discovered By : Henry Cavendish\n");
        printf("Van der Waals radius : 120pm\n");
        printf("Appearence : Colourless gas\n");
        printf("Block : s-block\n\n\n");

   } 
    
    else if(an == 2 || value2 == 0)
    {
        printf("\n\nELEMENT : Helium\n");
        printf("Symbol : He\n");
        printf("Atomic number : 2\n");
        printf("Mass Number : 4.002602\n");
        printf("Discovered By : Pierre Janssen , Norman Locker \n");
        printf("Van der Waals radius : 120pm\n");
        printf("Boiling point :  -452F\n");
        printf("Electroni Configuration : 1s^2\n\n\n");
    }


    else if(an == 3 || value3 == 0)
    {
        printf("\n\nELEMENT : Lithium\n");
        printf("Symbol : Li\n");
        printf("Atomic number : 3\n");
        printf("Mass Number : 6.94\n");
        printf("Discovered By : Johan August Arfwedson \n");
        printf("In Year : 1817\n");
    }

    else if(an == 4 || value4 == 0)
    {
        printf("\n\nELEMENT : Beryllium\n");
        printf("Symbol : Be\n");
        printf("Atomic number : 4\n");
        printf("Mass Number : 9.0122\n");
        printf("Discovered By : Louis Nicolas Vauquelin\n");
        printf("In Year : 1797\n");
    }

     else if(an == 5 || value5 == 0)
    {
        printf("\n\nELEMENT : Boron\n");
        printf("Symbol : B\n");
        printf("Atomic number : 5\n");
        printf("Mass Number : 10.811\n");
        printf("Discovered By :  Louis-Josef Gay-Lussac and Louis-Jacques \n");
        printf("In Year : 1808\n");
    }

    else if(an == 6 || value6 == 0)
    {
        printf("\n\nELEMENT : Carbon\n");
        printf("Symbol : C\n");
        printf("Atomic number : 6\n");
        printf("Mass Number : 12.011\n");
        printf("Discovered By :  Antoine Lavoisier \n");
        printf("In Year : 1789\n");
    }

    else if(an == 7 || value7 == 0)
    {
        printf("\n\nELEMENT : Nitrogen\n");
        printf("Symbol : N\n");
        printf("Atomic number : 7\n");
        printf("Mass Number : 14.007\n");
        printf("Discovered By :  Daniel Rytherford \n");
        printf("In Year : 1772\n");
    }

    else if(an == 8 || value8 == 0)
    {
        printf("\n\nELEMENT : Oxygen\n");
        printf("Symbol : O\n");
        printf("Atomic number : 8\n");
        printf("Mass Number : 16\n");
        printf("Discovered By :   Joseph Priestley, Antoine Lavoisier, Carl Wilhelm Scheele \n");
        printf("In Year : 1774\n");
    }

    else if(an == 9 || value9 == 0)
    {
        printf("\n\nELEMENT : Fluorine\n");
        printf("Symbol : F\n");
        printf("Atomic number : 9\n");
        printf("Mass Number : 18.998\n");
        printf("Discovered By :  French chemist Henri Moissan \n");
        printf("In Year : 1886\n");
    }

    else if(an == 10 || value10 == 0)
    {
        printf("\n\nELEMENT : Neon\n");
        printf("Symbol : Ne\n");
        printf("Atomic number : 10\n");
        printf("Mass Number : 20.18\n");
        printf("Discovered By : Sir William Ramsay and Morris W \n");
        printf("In Year : 1898\n");
    }

    else if(an == 11 || value11 == 0)
    {
        printf("\n\nELEMENT : Sodium\n");
        printf("Symbol : Na\n");
        printf("Atomic number : 11\n");
        printf("Mass Number : 22.98\n");
        printf("Discovered By : Humphry Davy\n");
        printf("In Year : 1807\n");
    }

    else if(an == 12 || value12 == 0)
    {
        printf("\n\nELEMENT : Magnesium\n");
        printf("Symbol : Mg\n");
        printf("Atomic number : 12\n");
        printf("Mass Number : 24.305\n");
        printf("Discovered By :  Joseph Black Humphry Davy\n");
        printf("In Year : 1755\n");
    }

    else if(an == 13 || value13 == 0)
    {
        printf("\n\nELEMENT : Aluminum\n");
        printf("Symbol : Al\n");
        printf("Atomic number : 13\n");
        printf("Mass Number : 26.98\n");
        printf("Discovered By : Hans Christian rsted\n");
        printf("In Year : 1825\n");
    }

    else if(an == 14 || value14 == 0)
    {
        printf("\n\nELEMENT : Silicon\n");
        printf("Symbol : Si\n");
        printf("Atomic number : 14\n");
        printf("Mass Number : 28.085\n");
        printf("Discovered By : Jons Jakob Berzelius\n");
        printf("In Year : 1823\n");
    }

    else if(an == 15 || value15 == 0)
    {
        printf("\n\nELEMENT : Phosphorous\n");
        printf("Symbol : P\n");
        printf("Atomic number : 15\n");
        printf("Mass Number : 30.973\n");
        printf("Discovered By : Hennig Brand\n");
        printf("In Year : 1669\n");
    }

    else if(an == 16 || value16 == 0)
    {
        printf("\n\nELEMENT : Sulphur\n");
        printf("Symbol : S\n");
        printf("Atomic number : 16\n");
        printf("Mass Number : 32.064\n");
        printf("Discovered By : Unknown\n");
        printf("In Year : 2000BC\n");
    }

    else if(an == 17 || value17 == 0)
    {
        printf("\n\nELEMENT : Chlorine\n");
        printf("Symbol : Cl\n");
        printf("Atomic number : 17\n");
        printf("Mass Number : 35.4521\n");
        printf("Discovered By : Carl Wilhelm Scheele\n");
        printf("In Year : 1774\n");
    }

    else if(an == 18 || value18 == 0)
    {
        printf("\n\nELEMENT : Argon\n");
        printf("Symbol : Ar\n");
        printf("Atomic number : 18\n");
        printf("Mass Number : 39.9477\n");
        printf("Discovered By : Sir William Ramsay\n");
        printf("In Year : 1894\n");
    }

    else if(an == 19 || value19 == 0)
    {
        printf("\n\nELEMENT : Potassium\n");
        printf("Symbol : K\n");
        printf("Atomic number : 19\n");
        printf("Mass Number : 39.0983\n");
        printf("Discovered By : Humphry Davy\n");
        printf("In Year : 1807\n");
    }

    else if(an == 20 || value20 == 0)
    {
        printf("\n\nELEMENT : Calcium\n");
        printf("Symbol : Ca\n");
        printf("Atomic number : 20\n");
        printf("Mass Number : 40.078\n");
        printf("Discovered By : Humphry Davy\n");
        printf("In Year : 1808\n");
    }

    else if(an == 21 || value21 == 0)
    {
        printf("\n\nELEMENT : Scandium\n");
        printf("Symbol : Sc\n");
        printf("Atomic number : 21\n");
        printf("Mass Number : 44.9559\n");
        printf("Discovered By : Lars Fredrik Nilson\n");
        printf("In Year : 1879\n");
    }
 
    else if(an == 22 || value22 == 0)
    {
        printf("\n\nELEMENT : Titanium\n");
        printf("Symbol : Ti\n");
        printf("Atomic number : 22\n");
        printf("Mass Number : 47.8667\n");
        printf("Discovered By : William Gregor \n");
        printf("In Year : 1791\n");
    }
 
    else if(an == 23 || value23 == 0)
    {
        printf("\n\nELEMENT : Vanadium\n");
        printf("Symbol : V\n");
        printf("Atomic number : 23\n");
        printf("Mass Number : 50.9414\n");
        printf("Discovered By : Andres Manuel del Rio\n");
        printf("In Year : 1801\n");
    }
    
    else if(an == 24 || value24 == 0)
    {
        printf("\n\nELEMENT : Chromium\n");
        printf("Symbol : Cr\n");
        printf("Atomic number : 24\n");
        printf("Mass Number : 51.9961\n");
        printf("Discovered By : Louis-Nicolas Vauquelin \n");
        printf("In Year : 1794\n");
    }
 
    else if(an == 25 || value25 == 0)
    {
        printf("\n\nELEMENT : Manganese\n");
        printf("Symbol : Mn\n");
        printf("Atomic number : 25\n");
        printf("Mass Number : 54.9380\n");
        printf("Discovered By : Johan Gottlieb Gahn lgnatius Gottfried Kaim \n");
        printf("In Year : 1774\n");
    }
 
    else if(an == 26 || value26 == 0)
    {
        printf("\n\nELEMENT : Iron\n");
        printf("Symbol : fe\n");
        printf("Atomic number : 26\n");
        printf("Mass Number : 55.8451\n");
        printf("Discovered By : Unknown \n");
        printf("In Year : 5000BC\n");
    }
 
    else if(an == 27 || value27 == 0)
    {
        printf("\n\nELEMENT : Cobalt\n");
        printf("Symbol : Co\n");
        printf("Atomic number : 27\n");
        printf("Mass Number : 58.933\n");
        printf("Discovered By : Georg Brandt\n");
        printf("In Year : 1735\n");
    }

    else if(an == 28 || value28 == 0)
    {
        printf("\n\nELEMENT : Nickel\n");
        printf("Symbol : Ni\n");
        printf("Atomic number : 28\n");
        printf("Mass Number : 58.6934\n");
        printf("Discovered By : Axel Frederic von Cronstedt \n");
        printf("In Year : 1751\n");
    }
  
    else if(an == 29 || value29 == 0)
    {
        printf("\n\nELEMENT : Copper\n");
        printf("Symbol : C\n");
        printf("Atomic number : 29\n");
        printf("Mass Number : 63.546\n");
        printf("Discovered By : Unknown \n");
        printf("In Year : 9000BC\n");
    }
    
    else if(an == 30 || value30 == 0)
    {
        printf("\n\nELEMENT : Zinc\n");
        printf("Symbol : Z\n");
        printf("Atomic number : 30\n");
        printf("Mass Number : 65.3778\n");
        printf("Discovered By : Andreas Sigimund Marggraf \n");
        printf("In Year : 1000BC\n");
    }


    else if(an == 31 || value31 == 0)
    {
        printf("\n\nELEMENT : Gallium\n");
        printf("Symbol : Ga\n");
        printf("Atomic number : 31\n");
        printf("Mass Number : 69.7231\n");
        printf("Discovered By : Paul Emile Lecoq de Boisbaudran\n");
        printf("In Year : 1875\n");
    }
 
    else if(an == 32 || value32 == 0)
    {
        printf("\n\nELEMENT : Germanium\n");
        printf("Symbol : Ge\n");
        printf("Atomic number : 32\n");
        printf("Mass Number : 72.6298\n");
        printf("Discovered By : Clemens Alexander Winkle \n");
        printf("In Year : 1886\n");
    }
 
    else if(an == 33 || value33 == 0)
    {
        printf("\n\nELEMENT : Arsenic\n");
        printf("Symbol : As\n");
        printf("Atomic number : 33\n");
        printf("Mass Number : 74.9216\n");
        printf("Discovered By : Albertus Magnus\n");
        printf("In Year : 815AD\n");
    }
    
    else if(an == 34 || value34 == 0)
    {
        printf("\n\nELEMENT : Selenium\n");
        printf("Symbol : Se\n");
        printf("Atomic number : 34\n");
        printf("Mass Number : 78.9711\n");
        printf("Discovered By : Jons Jakob Berzelius \n");
        printf("In Year : 1817\n");
    }
 
    else if(an == 35 || value35 == 0)
    {
        printf("\n\nELEMENT : Bromine\n");
        printf("Symbol : Br\n");
        printf("Atomic number : 35\n");
        printf("Mass Number : 79.9043\n");
        printf("Discovered By : Antoine-jerome Balard Karl Jakob Leuwich\n");
        printf("In Year : 1826/n");
    }
 
    else if(an == 36 || value36 == 0)
    {
        printf("\n\nELEMENT : Krypton\n");
        printf("Symbol : Kr\n");
        printf("Atomic number : 36\n");
        printf("Mass Number : 83.798\n");
        printf("Discovered By : Sir William Ramsay Morris William Travers \n");
        printf("In Year : 1898\n");
    }
 
    else if(an == 37 || value37 == 0)
    {
        printf("\n\nELEMENT : Rubidium\n");
        printf("Symbol : Rb\n");
        printf("Atomic number : 37\n");
        printf("Mass Number : 85.4677\n");
        printf("Discovered By : Robert Wilhelm Bunsen Gustab Robert Kirchhoff\n");
        printf("In Year : 1861\n");
    }

    else if(an == 38 || value38 == 0)
    {
        printf("\n\nELEMENT : Strontium\n");
        printf("Symbol : Sr\n");
        printf("Atomic number : 38\n");
        printf("Mass Number : 87.6166\n");
        printf("Discovered By : Adair Crawford \n");
        printf("In Year : 1787\n");
    }
  
    else if(an == 39 || value39 == 0)
    {
        printf("\n\nELEMENT : Yttrium\n");
        printf("Symbol : Y\n");
        printf("Atomic number : 39\n");
        printf("Mass Number : 88.9058\n");
        printf("Discovered By : Johan Gadolin \n");
        printf("In Year : 1794\n");
    }
    
    else if(an == 40 || value40 == 0)
    {
        printf("\n\nELEMENT : Zirconium\n");
        printf("Symbol : Zr\n");
        printf("Atomic number : 40\n");
        printf("Mass Number : 91.2236\n");
        printf("Discovered By : Martin Heinrich Kalproth \n");
        printf("In Year : 1789\n");
    }
    
    else if(an == 41 || value41 == 0)
    {
        printf("\n\nELEMENT : Niobium\n");
        printf("Symbol : Nb\n");
        printf("Atomic number : 41\n");
        printf("Mass Number : 92.9064\n");
        printf("Discovered By : Charles Hatchett\n");
        printf("In Year : 1801\n");
    }
 
    else if(an == 42 || value42 == 0)
    {
        printf("\n\nELEMENT : Molybdenum\n");
        printf("Symbol : Mo\n");
        printf("Atomic number : 42\n");
        printf("Mass Number : 95.9488\n");
        printf("Discovered By : Carl Wilhelm Scheele \n");
        printf("In Year : 1778\n");
    }
 
    else if(an == 43 || value43 == 0)
    {
        printf("\n\nELEMENT : technetium\n");
        printf("Symbol : Tc\n");
        printf("Atomic number : 43\n");
        printf("Mass Number : 97.4429\n");
        printf("Discovered By : Emilio Gino Segre  Carlo Perrier\n");
        printf("In Year : 1937\n");
    }
    
    else if(an == 44 || value44 == 0)
    {
        printf("\n\nELEMENT : Ruthenium\n");
        printf("Symbol : Ru\n");
        printf("Atomic number : 44\n");
        printf("Mass Number : 101.0649\n");
        printf("Discovered By : Karl Ernst Claus \n");
        printf("In Year : 1844\n");
    }
 
    else if(an == 45 || value45 == 0)
    {
        printf("\n\nELEMENT : Rhodium\n");
        printf("Symbol : Rh\n");
        printf("Atomic number : 45\n");
        printf("Mass Number : 102.9055\n");
        printf("Discovered By : William Hyde Wollaston\n");
        printf("In Year : 1804\n");
    }
 
    else if(an == 46 || value46 == 0)
    {
        printf("\n\nELEMENT : Palladiu\n");
        printf("Symbol : Pd\n");
        printf("Atomic number : 46\n");
        printf("Mass Number : 106.4153\n");
        printf("Discovered By : William Hyde Wollaston \n");
        printf("In Year : 1803\n");
    }
 
    else if(an == 47 || value47 == 0)
    {
        printf("\n\nELEMENT : Silver\n");
        printf("Symbol : Ag\n");
        printf("Atomic number : 47\n");
        printf("Mass Number : 107.8681\n");
        printf("Discovered By : Unknown\n");
        printf("In Year : 5000BC\n");
    }

    else if(an == 48 || value48 == 0)
    {
        printf("\n\nELEMENT : Cadmium\n");
        printf("Symbol : Cd\n");
        printf("Atomic number : 48\n");
        printf("Mass Number : 11204138\n");
        printf("Discovered By : Friedrich Stromeyer \n");
        printf("In Year : 1817\n");
    }
  
    else if(an == 49 || value49 == 0)
    {
        printf("\n\nELEMENT : Indium\n");
        printf("Symbol : In\n");
        printf("Atomic number : 49\n");
        printf("Mass Number : 114.8183\n");
        printf("Discovered By : Ferdinand reich \n");
        printf("In Year : 1863\n");
    }
    
    else if(an == 50 || value50 == 0)
    {
        printf("\n\nELEMENT : Tin\n");
        printf("Symbol : Sn\n");
        printf("Atomic number : 50\n");
        printf("Mass Number : 118.7101\n");
        printf("Discovered By : Unknown\n");
        printf("In Year : 3500BC\n");
    }


    else if(an == 51 || value51 == 0)
    {
        printf("\n\nELEMENT : Antimony\n");
        printf("Symbol : Sb\n");
        printf("Atomic number : 51\n");
        printf("Mass Number : 121.7598\n");
        printf("Discovered By : Basil Valentine\n");
        printf("In Year : 815AD\n");
    }
 
    else if(an == 52 || value52 == 0)
    {
        printf("\n\nELEMENT : Tellurium\n");
        printf("Symbol : Te\n");
        printf("Atomic number : 52\n");
        printf("Mass Number : 127.6031\n");
        printf("Discovered By : Unknown \n");
        printf("In Year : 1782\n");
    }
 
    else if(an == 53 || value53 == 0)
    {
        printf("\n\nELEMENT : Iodine\n");
        printf("Symbol : I\n");
        printf("Atomic number : 53\n");
        printf("Mass Number : 126.9045\n");
        printf("Discovered By : Bernard Courtois \n");
        printf("In Year : 1811\n");
    }
    
    else if(an == 54 || value54 == 0)
    {
        printf("\n\nELEMENT : Xenon\n");
        printf("Symbol : Xe\n");
        printf("Atomic number : 54\n");
        printf("Mass Number : 131.2928\n");
        printf("Discovered By : William Ramsay Morris William Travers \n");
        printf("In Year : 1898\n");
    }
 
    else if(an == 55 || value55 == 0)
    {
        printf("\n\nELEMENT : Caesium\n");
        printf("Symbol : Cs\n");
        printf("Atomic number : 55\n");
        printf("Mass Number : 132.9055\n");
        printf("Discovered By : Robert Wilhelm Bunsen Gustav Robert Kirchhoff\n");
        printf("In Year : 1860/n");
    }
 
    else if(an == 56 || value56 == 0)
    {
        printf("\n\nELEMENT : Barium\n");
        printf("Symbol : Ba\n");
        printf("Atomic number : 56\n");
        printf("Mass Number : 137.3267\n");
        printf("Discovered By : Humphry Davy \n");
        printf("In Year : 1774\n");
    }
 
    else if(an == 57 || value57 == 0)
    {
        printf("\n\nELEMENT : Lanthanum\n");
        printf("Symbol : La\n");
        printf("Atomic number : 57\n");
        printf("Mass Number : 138.9055\n");
        printf("Discovered By : Carl Gustaf Monsander\n");
        printf("In Year : 1839\n");
    }

    else if(an == 58 || value58 == 0)
    {
        printf("\n\nELEMENT : Cerium\n");
        printf("Symbol : Ce\n");
        printf("Atomic number : 58\n");
        printf("Mass Number : 140.1157\n");
        printf("Discovered By : Unknown \n");
        printf("In Year : 1803\n");
    }
  
    else if(an == 59 || value59 == 0)
    {
        printf("\n\nELEMENT : Praseodymium\n");
        printf("Symbol : Pr\n");
        printf("Atomic number : 59\n");
        printf("Mass Number : 140.9077\n");
        printf("Discovered By : Andre-Louis Debirne \n");
        printf("In Year : 1885\n");
    }
    
    else if(an == 60 || value60 == 0)
    {
        printf("\n\nELEMENT : Neodymium\n");
        printf("Symbol : Nd\n");
        printf("Atomic number : 60\n");
        printf("Mass Number : 144.2416\n");
        printf("Discovered By : Carl Auer von Welsbach \n");
        printf("In Year : 1885\n");
    }


    

    else if(an == 61 || value61 == 0)
    {
        printf("\n\nELEMENT : Promethiu\n");
        printf("Symbol : P\n");
        printf("Atomic number : 61\n");
        printf("Mass Number : 145.2295\n");
        printf("Discovered By : Unknown\n");
        printf("In Year : 1942\n");
    }
 
    else if(an == 62 || value62 == 0)
    {
        printf("\n\nELEMENT : Samarium\n");
        printf("Symbol : Sm\n");
        printf("Atomic number : 62\n");
        printf("Mass Number : 150.3647\n");
        printf("Discovered By : Paul Emil Lecoq de Boisbaudran \n");
        printf("In Year : 1879\n");
    }
 
    else if(an == 63 || value63 == 0)
    {
        printf("\n\nELEMENT : Europium\n");
        printf("Symbol : Eu\n");
        printf("Atomic number : 63\n");
        printf("Mass Number : 151.9644\n");
        printf("Discovered By : Eugene-Antole Demarcay\n");
        printf("In Year : 1896\n");
    }
    
    else if(an == 64 || value64 == 0)
    {
        printf("\n\nELEMENT : Gadolinium\n");
        printf("Symbol : Gd\n");
        printf("Atomic number : 64\n");
        printf("Mass Number : 157.2521\n");
        printf("Discovered By : Jean Charles Galisard de Marignac \n");
        printf("In Year : 1886\n");
    }
 
    else if(an == 65 || value65 == 0)
    {
        printf("\n\nELEMENT : Terbium\n");
        printf("Symbol : Tb\n");
        printf("Atomic number : 65\n");
        printf("Mass Number : 158.9254\n");
        printf("Discovered By : Carl Gustaf Mosander \n");
        printf("In Year : 1843\n");
    }
 
    else if(an == 66 || value66 == 0)
    {
        printf("\n\nELEMENT : Dysprosium\n");
        printf("Symbol : Dy\n");
        printf("Atomic number : 66\n");
        printf("Mass Number : 162.4995\n");
        printf("Discovered By : Paul Emil LEcoq de Boisbaudran \n");
        printf("In Year : 1886\n");
    }
 
    else if(an == 67 || value67 == 0)
    {
        printf("\n\nELEMENT : Holmium\n");
        printf("Symbol : Ho\n");
        printf("Atomic number : 67\n");
        printf("Mass Number : 164.9303\n");
        printf("Discovered By : Per teodor Cleve  Auguste Honore Charlois\n");
        printf("In Year : 1878\n");
    }

    else if(an == 68 || value68 == 0)
    {
        printf("\n\nELEMENT : Erbium\n");
        printf("Symbol : Er\n");
        printf("Atomic number : 68\n");
        printf("Mass Number : 167.2591\n");
        printf("Discovered By : Carl Gustaf Mosander \n");
        printf("In Year : 1843\n");
    }
  
    else if(an == 69 || value69 == 0)
    {
        printf("\n\nELEMENT : Thulim\n");
        printf("Symbol : Tm\n");
        printf("Atomic number : 69\n");
        printf("Mass Number : 168.9342\n");
        printf("Discovered By : Unknown \n");
        printf("In Year : 1879\n");
    }
    
    else if(an == 70 || value70 == 0)
    {
        printf("\n\nELEMENT : Ytterbium\n");
        printf("Symbol : Yb\n");
        printf("Atomic number : 70\n");
        printf("Mass Number : 173.0541\n");
        printf("Discovered By : Jean Chares Galissard de Marignac \n");
        printf("In Year : 1878\n");
    }


    else if(an == 71 || value71 == 0)
    {
        printf("\n\nELEMENT : Lutetium\n");
        printf("Symbol : Lu\n");
        printf("Atomic number : 71\n");
        printf("Mass Number : 174.9668\n");
        printf("Discovered By : Unknown\n");
        printf("In Year : 1906\n");
    }
 
    else if(an == 72 || value72 == 0)
    {
        printf("\n\nELEMENT : Hafnium\n");
        printf("Symbol : Hf\n");
        printf("Atomic number : 72\n");
        printf("Mass Number : 178.485\n");
        printf("Discovered By : Unknown \n");
        printf("In Year : 1922\n");
    }
 
    else if(an == 73 || value73 == 0)
    {
        printf("\n\nELEMENT : Tantalum\n");
        printf("Symbol : Ta\n");
        printf("Atomic number : 73\n");
        printf("Mass Number : 180.9479\n");
        printf("Discovered By : Ander Gustaf Ekeberg\n");
        printf("In Year : 1802\n");
    }
    
    else if(an == 74 || value74 == 0)
    {
        printf("\n\nELEMENT : Tungsten\n");
        printf("Symbol : W\n");
        printf("Atomic number : 74\n");
        printf("Mass Number : 183.8418\n");
        printf("Discovered By : Carl Wilhelm Scheele \n");
        printf("In Year : 1781\n");
    }
 
    else if(an == 75 || value75 == 0)
    {
        printf("\n\nELEMENT : Rhenium\n");
        printf("Symbol : Re\n");
        printf("Atomic number : 75\n");
        printf("Mass Number : 186.2067\n");
        printf("Discovered By : Unknown\n");
        printf("In Year : 1908/n");
    }
 
    else if(an == 76 || value76 == 0)
    {
        printf("\n\nELEMENT : Osmium\n");
        printf("Symbol : Os\n");
        printf("Atomic number : 76\n");
        printf("Mass Number : 190.2249\n");
        printf("Discovered By : Smithson Tennant \n");
        printf("In Year : 1803\n");
    }
 
    else if(an == 77 || value77 == 0)
    {
        printf("\n\nELEMENT : Iridium\n");
        printf("Symbol : Ir\n");
        printf("Atomic number : 77\n");
        printf("Mass Number : 192.2161\n");
        printf("Discovered By : Smithson Tennant\n");
        printf("In Year : 1803\n");
    }

    else if(an == 78 || value78 == 0)
    {
        printf("\n\nELEMENT : Platinum\n");
        printf("Symbol : Pt\n");
        printf("Atomic number : 78\n");
        printf("Mass Number : 195.0844\n");
        printf("Discovered By : Antonio de Ulloa \n");
        printf("In Year : 1735\n");
    }
  
    else if(an == 79 || value79 == 0)
    {
        printf("\n\nELEMENT : Gold\n");
        printf("Symbol : Au\n");
        printf("Atomic number : 79\n");
        printf("Mass Number : 196.9666\n");
        printf("Discovered By : Unknown \n");
        printf("In Year : 6000BC\n");
    }
    
    else if(an == 80 || value80 == 0)
    {
        printf("\n\nELEMENT : Mercury\n");
        printf("Symbol : Hg\n");
        printf("Atomic number : 80\n");
        printf("Mass Number : 200.5926\n");
        printf("Discovered By : Unknown \n");
        printf("In Year : 1500BC\n");
    }

    else if(an == 81 || value81 == 0)
    {
        printf("\n\nELEMENT : Thallium\n");
        printf("Symbol : Tl\n");
        printf("Atomic number : 91\n");
        printf("Mass Number : 204.3835\n");
        printf("Discovered By : William Crookes\n");
        printf("In Year : 1861\n");
    }

    else if(an == 82 || value82 == 0)
    {
        printf("\n\nELEMENT : Lead\n");
        printf("Symbol : Pb\n");
        printf("Atomic number : 82\n");
        printf("Mass Number : 207.2169\n");
        printf("Discovered By :  Unknown\n");
        printf("In Year : 7000BC\n");
    }

    else if(an == 83 || value83 == 0)
    {
        printf("\n\nELEMENT : Bismuth\n");
        printf("Symbol : Bi\n");
        printf("Atomic number : 83\n");
        printf("Mass Number : 208.9804\n");
        printf("Discovered By : Claude Francois Geoffrey\n");
        printf("In Year : 1000AD\n");
    }

    else if(an == 84 || value84 == 0)
    {
        printf("\n\nELEMENT : Poloniu\n");
        printf("Symbol : Po\n");
        printf("Atomic number : 84\n");
        printf("Mass Number : 208.962\n");
        printf("Discovered By : Pirre Curie Marie Sklodowska Curie\n");
        printf("In Year : 1898\n");
    }

    else if(an == 85 || value85 == 0)
    {
        printf("\n\nELEMENT : Astatine\n");
        printf("Symbol : At\n");
        printf("Atomic number : 85\n");
        printf("Mass Number : 209.6021\n");
        printf("Discovered By : Paul Emil Lecoq de Boisbaudran\n");
        printf("In Year : 1940\n");
    }

    else if(an == 86 || value86 == 0)
    {
        printf("\n\nELEMENT : Radon\n");
        printf("Symbol : Rn\n");
        printf("Atomic number : 86\n");
        printf("Mass Number : 220.1901\n");
        printf("Discovered By : Friedrich Ernst Dorn\n");
        printf("In Year : 1899\n");
    }

    else if(an == 87 || value87 == 0)
    {
        printf("\n\nELEMENT : Francium\n");
        printf("Symbol : Fr\n");
        printf("Atomic number : 87\n");
        printf("Mass Number : 219.3234\n");
        printf("Discovered By : Marguerite Perey\n");
        printf("In Year : 1939\n");
    }

    else if(an == 88 || value88 == 0)
    {
        printf("\n\nELEMENT : Radium\n");
        printf("Symbol : Ra\n");
        printf("Atomic number : 88\n");
        printf("Mass Number : 226.0325\n");
        printf("Discovered By : Pierre Curie  Marie Sklodowska Curie\n");
        printf("In Year : 1898\n");
    }

    else if(an == 89 || value89 == 0)
    {
        printf("\n\nELEMENT : Actiniu\n");
        printf("Symbol : Ac\n");
        printf("Atomic number : 89\n");
        printf("Mass Number : 227.0251\n");
        printf("Discovered By : Andre-Louis Debierne\n");
        printf("In Year : 1902\n");
    }

    else if(an == 90 || value90 == 0)
    {
        printf("\n\nELEMENT : Thorium\n");
        printf("Symbol : Th\n");
        printf("Atomic number : 90\n");
        printf("Mass Number : 232.038\n");
        printf("Discovered By :  Jons Jakob Berzelius\n");
        printf("In Year : 1829\n");
    }

    else if(an == 91 || value91 == 0)
    {
        printf("\n\nELEMENT : Protacttinium\n");
        printf("Symbol : Pa\n");
        printf("Atomic number : 91\n");
        printf("Mass Number : 231.0359\n");
        printf("Discovered By : Otto Hahn  Lise Meitner  Frederick Soddy\n");
        printf("In Year : 1913\n");
    }
 
    else if(an == 92 || value92 == 0)
    {
        printf("\n\nELEMENT : Uranium\n");
        printf("Symbol : U\n");
        printf("Atomic number : 92\n");
        printf("Mass Number : 238.0289\n");
        printf("Discovered By : Martin Heinrich Klaproth \n");
        printf("In Year : 1789\n");
    }
 
    else if(an == 93 || value93 == 0)
    {
        printf("\n\nELEMENT : Neptunium\n");
        printf("Symbol : Np\n");
        printf("Atomic number : 93\n");
        printf("Mass Number : 236.9815\n");
        printf("Discovered By : Unknown\n");
        printf("In Year : 1940\n");
    }
    
    else if(an == 94 || value94 == 0)
    {
        printf("\n\nELEMENT : Plutonium\n");
        printf("Symbol : Pu\n");
        printf("Atomic number : 94\n");
        printf("Mass Number : 244.0532\n");
        printf("Discovered By : Glenn Theore Seaborg\n");
        printf("In Year : 1940\n");
    }
 
    else if(an == 95 || value95 == 0)
    {
        printf("\n\nELEMENT : Americium\n");
        printf("Symbol : Am\n");
        printf("Atomic number : 95\n");
        printf("Mass Number : 242.9341\n");
        printf("Discovered By : Glenn Theodore Seaborg\n");
        printf("In Year : 1944\n");
    }
 
    else if(an == 96 || value96 == 0)
    {
        printf("\n\nELEMENT : Curium\n");
        printf("Symbol : Cm\n");
        printf("Atomic number : 96\n");
        printf("Mass Number : 247.0924\n");
        printf("Discovered By : Glenn Theodore Seaborg \n");
        printf("In Year : 1944\n");
    }
 
    else if(an == 97 || value97 == 0)
    {
        printf("\n\nELEMENT : Berkelium\n");
        printf("Symbol : Bk\n");
        printf("Atomic number : 97\n");
        printf("Mass Number : 247.0781\n");
        printf("Discovered By : Glenn Theodore Seaborg\n");
        printf("In Year : 1949\n");
    }

    else if(an == 98 || value98 == 0)
    {
        printf("\n\nELEMENT : Californium\n");
        printf("Symbol : Cf\n");
        printf("Atomic number : 98\n");
        printf("Mass Number : 250.5137\n");
        printf("Discovered By : Glenn Theodore Seaborg \n");
        printf("In Year : 1950\n");
    }
  
    else if(an == 99 || value99 == 0)
    {
        printf("\n\nELEMENT : Einsteiniu\n");
        printf("Symbol : E\n");
        printf("Atomic number : 99\n");
        printf("Mass Number : 252.9784\n");
        printf("Discovered By : Albert Ghiorso \n");
        printf("In Year : 1952\n");
    }
    
    else if(an == 100 || value100 == 0)
    {
        printf("\n\nELEMENT : Fermium\n");
        printf("Symbol : Fm\n");
        printf("Atomic number : 100\n");
        printf("Mass Number : 256.8966\n");
        printf("Discovered By : Glenn Theodore Seaborg \n");
        printf("In Year : 1952\n");
    }



    else if(an == 101 || value101 == 0)
    {
        printf("\n\nELEMENT : Mendeleviu\n");
        printf("Symbol : M\n");
        printf("Atomic number : 101\n");
        printf("Mass Number : 258.7885\n");
        printf("Discovered By : Glenn Theodore Seaborg \n");
        printf("In Year : 1955\n");
    }

    else if(an == 102 || value102 == 0)
    {
        printf("\n\nELEMENT : Nobelium\n");
        printf("Symbol : No\n");
        printf("Atomic number : 102\n");
        printf("Mass Number : 260.6703\n");
        printf("Discovered By :  Glenn Theodore Seaborg\n");
        printf("In Year : 1965\n");
    }

    else if(an == 103 || value103 == 0)
    {
        printf("\n\nELEMENT : Lawrencium\n");
        printf("Symbol : Lr\n");
        printf("Atomic number : 103\n");
        printf("Mass Number : 264.862\n");
        printf("Discovered By : Albert Ghiorso\n");
        printf("In Year : 1961\n");
    }

    else if(an == 104 || value104 == 0)
    {
        printf("\n\nELEMENT : Rutherfordium\n");
        printf("Symbol : Rf\n");
        printf("Atomic number : 104\n");
        printf("Mass Number : 266.3234\n");
        printf("Discovered By : Georgiy Flerov\n");
        printf("In Year : 1969\n");
    }

    else if(an == 105 || value105 == 0)
    {
        printf("\n\nELEMENT : Dubnium\n");
        printf("Symbol : P\n");
        printf("Atomic number : 105\n");
        printf("Mass Number : 268.1428\n");
        printf("Discovered By :  Georgiy Flerov\n");
        printf("In Year : 1970\n");
    }

    else if(an == 106 || value106 == 0)
    {
        printf("\n\nELEMENT : Seaborgium\n");
        printf("Symbol : Sg\n");
        printf("Atomic number : 106\n");
        printf("Mass Number : 270.4869\n");
        printf("Discovered By : Georgiy Flerov\n");
        printf("In Year : 1974\n");
    }

    else if(an == 107 || value107 == 0)
    {
        printf("\n\nELEMENT : Bohrium\n");
        printf("Symbol : Bh\n");
        printf("Atomic number : 107\n");
        printf("Mass Number : 270.9292\n");
        printf("Discovered By : Peter Armbruster  Gottfried Munzenber\n");
        printf("In Year : 1981\n");
    }

    else if(an == 108 || value108 == 0)
    {
        printf("\n\nELEMENT : Hassium\n");
        printf("Symbol : Hs\n");
        printf("Atomic number : 108\n");
        printf("Mass Number : 275.3816\n");
        printf("Discovered By : GSI\n");
        printf("In Year : 1984\n");
    }

    else if(an == 109 || value109 == 0)
    {
        printf("\n\nELEMENT : Metnerium\n");
        printf("Symbol : Mt \n");
        printf("Atomic number : 109\n");
        printf("Mass Number : 278.1309\n");
        printf("Discovered By : GSI\n");
        printf("In Year : 1982\n");
    }

    else if(an == 110 || value110 == 0)
    {
        printf("\n\nELEMENT : Darmstadtium\n");
        printf("Symbol : Ds\n");
        printf("Atomic number : 110\n");
        printf("Mass Number : 282.5755\n");
        printf("Discovered By : GSI\n");
        printf("In Year : 1994\n");
    }


    else if(an == 111 || value111 == 0)
    {
        printf("\n\nELEMENT : Roentgenium\n");
        printf("Symbol : Rg\n");
        printf("Atomic number : 111\n");
        printf("Mass Number : 283.0855\n");
        printf("Discovered By :  GSI\n");
        printf("In Year : 1944\n");
    }

    else if(an == 112 || value112 == 0)
    {
        printf("\n\nELEMENT : Copernicium\n");
        printf("Symbol : Cn\n");
        printf("Atomic number : 112\n");
        printf("Mass Number : 286.0936\n");
        printf("Discovered By :  GSI\n");
        printf("In Year : 1996\n");
    }

    else if(an == 113 || value113 == 0)
    {
        printf("\n\nELEMENT : Nihonium\n");
        printf("Symbol : Nh\n");
        printf("Atomic number : 113\n");
        printf("Mass Number : 287.9982\n");
        printf("Discovered By : RIKEN\n");
        printf("In Year : 2003\n");
    }

    else if(an == 114 || value114 == 0)
    {
        printf("\n\nELEMENT : Flervium\n");
        printf("Symbol : Fl\n");
        printf("Atomic number : 114\n");
        printf("Mass Number : 290.2171\n");
        printf("Discovered By : JINR\n");
        printf("In Year : 1998\n");
    }

    else if(an == 115 || value115 == 0)
    {
        printf("\n\nELEMENT : Moscovium\n");
        printf("Symbol : Mc\n");
        printf("Atomic number : 115\n");
        printf("Mass Number : 291.542\n");
        printf("Discovered By : JINR  &  LLNR\n");
        printf("In Year : 2003\n");
    }

    else if(an == 116 || value116 == 0)
    {
        printf("\n\nELEMENT : Livermorium\n");
        printf("Symbol : Lv\n");
        printf("Atomic number : 116\n");
        printf("Mass Number : 292.4708\n");
        printf("Discovered By : JINR   &   LLNR\n");
        printf("In Year : 2000\n");
    }

    else if(an == 117 || value117 == 0)
    {
        printf("\n\nELEMENT : Tennessine\n");
        printf("Symbol : Ts\n");
        printf("Atomic number : 117\n");
        printf("Mass Number : 293.7333\n");
        printf("Discovered By : JINR\n");
        printf("In Year : 2010\n");
    }

    else if(an == 118 || value118 == 0)
    {
        printf("\n\nELEMENT : Ognesson\n");
        printf("Symbol : Og\n");
        printf("Atomic number : 118\n");
        printf("Mass Number : 295.2122\n");
        printf("Discovered By : JINR\n");
        printf("In Year : 2002\n");
    }

    else{
        printf("INVALID DATA ! \n\n");
    }




    printf("\nCONTINUE PRESS 1\n");
    printf("EXIT PRESS 2\n\n");

    printf("\nENTER : ");
    scanf("%i", &numm);

    if(numm == 1)
    {
        periodicTable();
    }
        
    else if(numm == 2){
        printf("\nGood Byy\n\n\n");
        return 0;
    }
    else{
        printf("\nInvalid number \n\n\n");
        return 0;
    }    
}

int main()
{
    printf("\n\n========= INFORMATION RELATED TO ELEMENTS OF PERIODIC TABLE ==========\n\n\n");

    printf("GETTING INFORMATION \n");
    printf("PRESS 1 :\n\n");

    printf("EXIT \n");
    printf("PRESS 2\n\n");

    printf("\nENTER : ");
    scanf("%i", &num);
    if(num == 1){
        periodic();
        periodicTable();
    }
    else if(num == 2){
        printf("\nGood Byyyy");
        return 0;
    }
    else{
        printf("\nInvalid number ");
        return 0;
    }
    
}