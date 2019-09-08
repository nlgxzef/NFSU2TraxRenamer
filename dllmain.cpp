#include "stdafx.h"
#include "stdio.h"
#include <string>
#include <windows.h>
#include "includes\injector\injector.hpp"
#include "includes\IniReader.h"

int Init()
{
	
	CIniReader TraxRenamerIniReader("NFSU2TraxRenamer.ini");

	// Song1
	char* Song1Title = TraxRenamerIniReader.ReadString("Song1", "Title", "\"Riders on the Storm (Fredwreck Remix)\"");
	char* Song1Artist = TraxRenamerIniReader.ReadString("Song1", "Artist", "Snoop Dogg feat. The Doors");
	char* Song1Album = TraxRenamerIniReader.ReadString("Song1", "Album", "Need for Speed Underground 2 Exclusive");
	char* Song1PlayIn = TraxRenamerIniReader.ReadString("Song1", "PlayIn", "FE");
	injector::WriteMemory(0x7ECD80, Song1Title, true);
	injector::WriteMemory(0x7ECD84, Song1Artist, true);
	injector::WriteMemory(0x7ECD88, Song1Album, true);
	injector::WriteMemory(0x7ECD8C, Song1PlayIn, true);
	injector::WriteMemory(0x7ECF30, Song1Artist, true);
	injector::WriteMemory(0x7ECF34, Song1Album, true);
	injector::WriteMemory(0x7ECF38, Song1Artist, true);
	injector::WriteMemory(0x7ECF3C, Song1Album, true);

	// Song2
	char* Song2Title = TraxRenamerIniReader.ReadString("Song2", "Title", "\"I Need Speed\"");
	char* Song2Artist = TraxRenamerIniReader.ReadString("Song2", "Artist", "Capone");
	char* Song2Album = TraxRenamerIniReader.ReadString("Song2", "Album", "Need for Speed Underground 2 Exclusive");
	char* Song2PlayIn = TraxRenamerIniReader.ReadString("Song2", "PlayIn", "FE");
	injector::WriteMemory(0x7ECD90, Song2Title, true);
	injector::WriteMemory(0x7ECD94, Song2Artist, true);
	injector::WriteMemory(0x7ECD98, Song2Album, true);
	injector::WriteMemory(0x7ECD9C, Song2PlayIn, true);

	// Song3
	char* Song3Title = TraxRenamerIniReader.ReadString("Song3", "Title", "\"I Do\"");
	char* Song3Artist = TraxRenamerIniReader.ReadString("Song3", "Artist", "Chingy");
	char* Song3Album = TraxRenamerIniReader.ReadString("Song3", "Album", "PowerBallin");
	char* Song3PlayIn = TraxRenamerIniReader.ReadString("Song3", "PlayIn", "FE");
	injector::WriteMemory(0x7ECDA0, Song3Title, true);
	injector::WriteMemory(0x7ECDA4, Song3Artist, true);
	injector::WriteMemory(0x7ECDA8, Song3Album, true);
	injector::WriteMemory(0x7ECDAC, Song3PlayIn, true);

	// Song4
	char* Song4Title = TraxRenamerIniReader.ReadString("Song4", "Title", "\"That'z My Name\"");
	char* Song4Artist = TraxRenamerIniReader.ReadString("Song4", "Artist", "Sly Boogy");
	char* Song4Album = TraxRenamerIniReader.ReadString("Song4", "Album", "Mistaken Identity");
	char* Song4PlayIn = TraxRenamerIniReader.ReadString("Song4", "PlayIn", "FE");
	injector::WriteMemory(0x7ECDB0, Song4Title, true);
	injector::WriteMemory(0x7ECDB4, Song4Artist, true);
	injector::WriteMemory(0x7ECDB8, Song4Album, true);
	injector::WriteMemory(0x7ECDBC, Song4PlayIn, true);

	// Song5
	char* Song5Title = TraxRenamerIniReader.ReadString("Song5", "Title", "\"LAX\"");
	char* Song5Artist = TraxRenamerIniReader.ReadString("Song5", "Artist", "Xzibit");
	char* Song5Album = TraxRenamerIniReader.ReadString("Song5", "Album", "Weapons of Mass Destruction");
	char* Song5PlayIn = TraxRenamerIniReader.ReadString("Song5", "PlayIn", "FE");
	injector::WriteMemory(0x7ECDC0, Song5Title, true);
	injector::WriteMemory(0x7ECDC4, Song5Artist, true);
	injector::WriteMemory(0x7ECDC8, Song5Album, true);
	injector::WriteMemory(0x7ECDCC, Song5PlayIn, true);

	// Song6
	char* Song6Title = TraxRenamerIniReader.ReadString("Song6", "Title", "\"Lean Back\"");
	char* Song6Artist = TraxRenamerIniReader.ReadString("Song6", "Artist", "Terror Squad");
	char* Song6Album = TraxRenamerIniReader.ReadString("Song6", "Album", "True Story");
	char* Song6PlayIn = TraxRenamerIniReader.ReadString("Song6", "PlayIn", "FE");
	injector::WriteMemory(0x7ECDD0, Song6Title, true);
	injector::WriteMemory(0x7ECDD4, Song6Artist, true);
	injector::WriteMemory(0x7ECDD8, Song6Album, true);
	injector::WriteMemory(0x7ECDDC, Song6PlayIn, true);

	// Song7
	char* Song7Title = TraxRenamerIniReader.ReadString("Song7", "Title", "\"Switch/Twitch\"");
	char* Song7Artist = TraxRenamerIniReader.ReadString("Song7", "Artist", "Fluke");
	char* Song7Album = TraxRenamerIniReader.ReadString("Song7", "Album", "Puppy");
	char* Song7PlayIn = TraxRenamerIniReader.ReadString("Song7", "PlayIn", "IG");
	injector::WriteMemory(0x7ECDE0, Song7Title, true);
	injector::WriteMemory(0x7ECDE4, Song7Artist, true);
	injector::WriteMemory(0x7ECDE8, Song7Album, true);
	injector::WriteMemory(0x7ECDEC, Song7PlayIn, true);

	// Song8
	char* Song8Title = TraxRenamerIniReader.ReadString("Song8", "Title", "\"Rush Hour\"");
	char* Song8Artist = TraxRenamerIniReader.ReadString("Song8", "Artist", "Christopher Lawrence");
	char* Song8Album = TraxRenamerIniReader.ReadString("Song8", "Album", "All or Nothing");
	char* Song8PlayIn = TraxRenamerIniReader.ReadString("Song8", "PlayIn", "IG");
	injector::WriteMemory(0x7ECDF0, Song8Title, true);
	injector::WriteMemory(0x7ECDF4, Song8Artist, true);
	injector::WriteMemory(0x7ECDF8, Song8Album, true);
	injector::WriteMemory(0x7ECDFC, Song8PlayIn, true);

	// Song9
	char* Song9Title = TraxRenamerIniReader.ReadString("Song9", "Title", "\"Rocket Ride (Soulwax Remix)\"");
	char* Song9Artist = TraxRenamerIniReader.ReadString("Song9", "Artist", "Felix Da Housecat");
	char* Song9Album = TraxRenamerIniReader.ReadString("Song9", "Album", "Devin Dazzle & the Neon Fever");
	char* Song9PlayIn = TraxRenamerIniReader.ReadString("Song9", "PlayIn", "IG");
	injector::WriteMemory(0x7ECE00, Song9Title, true);
	injector::WriteMemory(0x7ECE04, Song9Artist, true);
	injector::WriteMemory(0x7ECE08, Song9Album, true);
	injector::WriteMemory(0x7ECE0C, Song9PlayIn, true);

	// Song10
	char* Song10Title = TraxRenamerIniReader.ReadString("Song10", "Title", "\"Hard EBM\"");
	char* Song10Artist = TraxRenamerIniReader.ReadString("Song10", "Artist", "Sin");
	char* Song10Album = TraxRenamerIniReader.ReadString("Song10", "Album", "Errare Digital EST");
	char* Song10PlayIn = TraxRenamerIniReader.ReadString("Song10", "PlayIn", "IG");
	injector::WriteMemory(0x7ECE10, Song10Title, true);
	injector::WriteMemory(0x7ECE14, Song10Artist, true);
	injector::WriteMemory(0x7ECE18, Song10Album, true);
	injector::WriteMemory(0x7ECE1C, Song10PlayIn, true);

	// Song11
	char* Song11Title = TraxRenamerIniReader.ReadString("Song11", "Title", "\"Mind Killer (Jagz Kooner Remix)\"");
	char* Song11Artist = TraxRenamerIniReader.ReadString("Song11", "Artist", "FREELAND");
	char* Song11Album = TraxRenamerIniReader.ReadString("Song11", "Album", "Now & Them");
	char* Song11PlayIn = TraxRenamerIniReader.ReadString("Song11", "PlayIn", "IG");
	injector::WriteMemory(0x7ECE20, Song11Title, true);
	injector::WriteMemory(0x7ECE24, Song11Artist, true);
	injector::WriteMemory(0x7ECE28, Song11Album, true);
	injector::WriteMemory(0x7ECE2C, Song11PlayIn, true);

	// Song12
	char* Song12Title = TraxRenamerIniReader.ReadString("Song12", "Title", "\"Nothing But You (Cirrus Remix)\"");
	char* Song12Artist = TraxRenamerIniReader.ReadString("Song12", "Artist", "Paul Van Dyk");
	char* Song12Album = TraxRenamerIniReader.ReadString("Song12", "Album", "Reflections");
	char* Song12PlayIn = TraxRenamerIniReader.ReadString("Song12", "PlayIn", "IG");
	injector::WriteMemory(0x7ECE30, Song12Title, true);
	injector::WriteMemory(0x7ECE34, Song12Artist, true);
	injector::WriteMemory(0x7ECE38, Song12Album, true);
	injector::WriteMemory(0x7ECE3C, Song12PlayIn, true);

	// Song13
	char* Song13Title = TraxRenamerIniReader.ReadString("Song13", "Title", "\"E-Ville\"");
	char* Song13Artist = TraxRenamerIniReader.ReadString("Song13", "Artist", "Sonic Animation");
	char* Song13Album = TraxRenamerIniReader.ReadString("Song13", "Album", "Reality By Deception");
	char* Song13PlayIn = TraxRenamerIniReader.ReadString("Song13", "PlayIn", "IG");
	injector::WriteMemory(0x7ECE40, Song13Title, true);
	injector::WriteMemory(0x7ECE44, Song13Artist, true);
	injector::WriteMemory(0x7ECE48, Song13Album, true);
	injector::WriteMemory(0x7ECE4C, Song13PlayIn, true);

	// Song14
	char* Song14Title = TraxRenamerIniReader.ReadString("Song14", "Title", "\"The Death & Resurrection Show\"");
	char* Song14Artist = TraxRenamerIniReader.ReadString("Song14", "Artist", "Killing Joke");
	char* Song14Album = TraxRenamerIniReader.ReadString("Song14", "Album", "Killing Joke");
	char* Song14PlayIn = TraxRenamerIniReader.ReadString("Song14", "PlayIn", "IG");
	injector::WriteMemory(0x7ECE50, Song14Title, true);
	injector::WriteMemory(0x7ECE54, Song14Artist, true);
	injector::WriteMemory(0x7ECE58, Song14Album, true);
	injector::WriteMemory(0x7ECE5C, Song14PlayIn, true);

	// Song15
	char* Song15Title = TraxRenamerIniReader.ReadString("Song15", "Title", "\"Give it All\"");
	char* Song15Artist = TraxRenamerIniReader.ReadString("Song15", "Artist", "Rise Against");
	char* Song15Album = TraxRenamerIniReader.ReadString("Song15", "Album", "Siren Song of the Counter Culture");
	char* Song15PlayIn = TraxRenamerIniReader.ReadString("Song15", "PlayIn", "IG");
	injector::WriteMemory(0x7ECE60, Song15Title, true);
	injector::WriteMemory(0x7ECE64, Song15Artist, true);
	injector::WriteMemory(0x7ECE68, Song15Album, true);
	injector::WriteMemory(0x7ECE6C, Song15PlayIn, true);

	// Song16
	char* Song16Title = TraxRenamerIniReader.ReadString("Song16", "Title", "\"Scavenger\"");
	char* Song16Artist = TraxRenamerIniReader.ReadString("Song16", "Artist", "Killradio");
	char* Song16Album = TraxRenamerIniReader.ReadString("Song16", "Album", "Raised on Whipped Cream");
	char* Song16PlayIn = TraxRenamerIniReader.ReadString("Song16", "PlayIn", "IG");
	injector::WriteMemory(0x7ECE70, Song16Title, true);
	injector::WriteMemory(0x7ECE74, Song16Artist, true);
	injector::WriteMemory(0x7ECE78, Song16Album, true);
	injector::WriteMemory(0x7ECE7C, Song16PlayIn, true);

	// Song17
	char* Song17Title = TraxRenamerIniReader.ReadString("Song17", "Title", "\"Notice of Eviction\"");
	char* Song17Artist = TraxRenamerIniReader.ReadString("Song17", "Artist", "The Bronx");
	char* Song17Album = TraxRenamerIniReader.ReadString("Song17", "Album", "The Bronx");
	char* Song17PlayIn = TraxRenamerIniReader.ReadString("Song17", "PlayIn", "IG");
	injector::WriteMemory(0x7ECE80, Song17Title, true);
	injector::WriteMemory(0x7ECE84, Song17Artist, true);
	injector::WriteMemory(0x7ECE88, Song17Album, true);
	injector::WriteMemory(0x7ECE8C, Song17PlayIn, true);

	// Song18
	char* Song18Title = TraxRenamerIniReader.ReadString("Song18", "Title", "\"No W\"");
	char* Song18Artist = TraxRenamerIniReader.ReadString("Song18", "Artist", "Ministry");
	char* Song18Album = TraxRenamerIniReader.ReadString("Song18", "Album", "Houses of the Molé");
	char* Song18PlayIn = TraxRenamerIniReader.ReadString("Song18", "PlayIn", "IG");
	injector::WriteMemory(0x7ECE90, Song18Title, true);
	injector::WriteMemory(0x7ECE94, Song18Artist, true);
	injector::WriteMemory(0x7ECE98, Song18Album, true);
	injector::WriteMemory(0x7ECF40, Song18Album, true);
	injector::WriteMemory(0x7ECF44, Song18Album, true);
	injector::WriteMemory(0x7ECE9C, Song18PlayIn, true);

	// Song19
	char* Song19Title = TraxRenamerIniReader.ReadString("Song19", "Title", "\"In My Head\"");
	char* Song19Artist = TraxRenamerIniReader.ReadString("Song19", "Artist", "Queens of the Stone Age");
	char* Song19Album = TraxRenamerIniReader.ReadString("Song19", "Album", "Lullabies to Paralyze");
	char* Song19PlayIn = TraxRenamerIniReader.ReadString("Song19", "PlayIn", "IG");
	injector::WriteMemory(0x7ECEA0, Song19Title, true);
	injector::WriteMemory(0x7ECEA4, Song19Artist, true);
	injector::WriteMemory(0x7ECEA8, Song19Album, true);
	injector::WriteMemory(0x7ECEAC, Song19PlayIn, true);

	// Song20
	char* Song20Title = TraxRenamerIniReader.ReadString("Song20", "Title", "\"Determined\"");
	char* Song20Artist = TraxRenamerIniReader.ReadString("Song20", "Artist", "Mudvayne");
	char* Song20Album = TraxRenamerIniReader.ReadString("Song20", "Album", "");
	char* Song20PlayIn = TraxRenamerIniReader.ReadString("Song20", "PlayIn", "IG");
	injector::WriteMemory(0x7ECEB0, Song20Title, true);
	injector::WriteMemory(0x7ECEB4, Song20Artist, true);
	injector::WriteMemory(0x7ECEB8, Song20Album, true);
	injector::WriteMemory(0x7ECEBC, Song20PlayIn, true);

	// Song21
	char* Song21Title = TraxRenamerIniReader.ReadString("Song21", "Title", "\"I Am Weightless\"");
	char* Song21Artist = TraxRenamerIniReader.ReadString("Song21", "Artist", "Septembre");
	char* Song21Album = TraxRenamerIniReader.ReadString("Song21", "Album", "Rule 3: Conceal Your Intentions");
	char* Song21PlayIn = TraxRenamerIniReader.ReadString("Song21", "PlayIn", "IG");
	injector::WriteMemory(0x7ECEC0, Song21Title, true);
	injector::WriteMemory(0x7ECEC4, Song21Artist, true);
	injector::WriteMemory(0x7ECEC8, Song21Album, true);
	injector::WriteMemory(0x7ECECC, Song21PlayIn, true);

	// Song22
	char* Song22Title = TraxRenamerIniReader.ReadString("Song22", "Title", "\"Crashing Foreign Cars\"");
	char* Song22Artist = TraxRenamerIniReader.ReadString("Song22", "Artist", "Helmet");
	char* Song22Album = TraxRenamerIniReader.ReadString("Song22", "Album", "Size Matters");
	char* Song22PlayIn = TraxRenamerIniReader.ReadString("Song22", "PlayIn", "IG");
	injector::WriteMemory(0x7ECED0, Song22Title, true);
	injector::WriteMemory(0x7ECED4, Song22Artist, true);
	injector::WriteMemory(0x7ECED8, Song22Album, true);
	injector::WriteMemory(0x7ECEDC, Song22PlayIn, true);

	// Song23
	char* Song23Title = TraxRenamerIniReader.ReadString("Song23", "Title", "\"Back on a Mission\"");
	char* Song23Artist = TraxRenamerIniReader.ReadString("Song23", "Artist", "Cirrus");
	char* Song23Album = TraxRenamerIniReader.ReadString("Song23", "Album", "Back on a Mission");
	char* Song23PlayIn = TraxRenamerIniReader.ReadString("Song23", "PlayIn", "IG");
	injector::WriteMemory(0x7ECEE0, Song23Title, true);
	injector::WriteMemory(0x7ECEE4, Song23Artist, true);
	injector::WriteMemory(0x7ECEE8, Song23Album, true);
	injector::WriteMemory(0x7ECEEC, Song23PlayIn, true);

	// Song24
	char* Song24Title = TraxRenamerIniReader.ReadString("Song24", "Title", "\"Black Betty\"");
	char* Song24Artist = TraxRenamerIniReader.ReadString("Song24", "Artist", "SpiderBait");
	char* Song24Album = TraxRenamerIniReader.ReadString("Song24", "Album", "Tonight Alright");
	char* Song24PlayIn = TraxRenamerIniReader.ReadString("Song24", "PlayIn", "IG");
	injector::WriteMemory(0x7ECEF0, Song24Title, true);
	injector::WriteMemory(0x7ECEF4, Song24Artist, true);
	injector::WriteMemory(0x7ECEF8, Song24Album, true);
	injector::WriteMemory(0x7ECEFC, Song24PlayIn, true);

	// Song25
	char* Song25Title = TraxRenamerIniReader.ReadString("Song25", "Title", "\"Nobody\"");
	char* Song25Artist = TraxRenamerIniReader.ReadString("Song25", "Artist", "Skindred");
	char* Song25Album = TraxRenamerIniReader.ReadString("Song25", "Album", "Babylon");
	char* Song25PlayIn = TraxRenamerIniReader.ReadString("Song25", "PlayIn", "IG");
	injector::WriteMemory(0x7ECF00, Song25Title, true);
	injector::WriteMemory(0x7ECF04, Song25Artist, true);
	injector::WriteMemory(0x7ECF08, Song25Album, true);
	injector::WriteMemory(0x7ECF0C, Song25PlayIn, true);

	// Song26
	char* Song26Title = TraxRenamerIniReader.ReadString("Song26", "Title", "\"Skeptic\"");
	char* Song26Artist = TraxRenamerIniReader.ReadString("Song26", "Artist", "Snapcase");
	char* Song26Album = TraxRenamerIniReader.ReadString("Song26", "Album", "Bright Flashes");
	char* Song26PlayIn = TraxRenamerIniReader.ReadString("Song26", "PlayIn", "IG");
	injector::WriteMemory(0x7ECF10, Song26Title, true);
	injector::WriteMemory(0x7ECF14, Song26Artist, true);
	injector::WriteMemory(0x7ECF18, Song26Album, true);
	injector::WriteMemory(0x7ECF1C, Song26PlayIn, true);

	// Song27
	char* Song27Title = TraxRenamerIniReader.ReadString("Song27", "Title", "\"The Celebration Song\"");
	char* Song27Artist = TraxRenamerIniReader.ReadString("Song27", "Artist", "Unwritten Law");
	char* Song27Album = TraxRenamerIniReader.ReadString("Song27", "Album", "The Way");
	char* Song27PlayIn = TraxRenamerIniReader.ReadString("Song27", "PlayIn", "IG");
	injector::WriteMemory(0x7ECF20, Song27Title, true);
	injector::WriteMemory(0x7ECF24, Song27Artist, true);
	injector::WriteMemory(0x7ECF28, Song27Album, true);
	injector::WriteMemory(0x7ECF2C, Song27PlayIn, true);

	return 0;
}

BOOL APIENTRY DllMain(HMODULE /*hModule*/, DWORD reason, LPVOID /*lpReserved*/)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		uintptr_t base = (uintptr_t)GetModuleHandleA(NULL);
		IMAGE_DOS_HEADER* dos = (IMAGE_DOS_HEADER*)(base);
		IMAGE_NT_HEADERS* nt = (IMAGE_NT_HEADERS*)(base + dos->e_lfanew);

		if ((base + nt->OptionalHeader.AddressOfEntryPoint + (0x400000 - base)) == 0x75BCC7) // Check if .exe file is compatible - Thanks to thelink2012 and MWisBest
			Init();

		else
		{
			MessageBoxA(NULL, "This .exe is not supported.\nPlease use v1.2 NTSC speed2.exe (4,57 MB (4.800.512 bytes)).", "NFSU2 EA Trax Renamer", MB_ICONERROR);
			return FALSE;
		}
	}
	return TRUE;

}
