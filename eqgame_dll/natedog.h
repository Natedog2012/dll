#pragma once

#include "MQ2Main.h"

int duel_first;
int duel_second;
inline void set_first(int value) {
	duel_first = value;
}
inline void set_second(int value) {
	duel_second = value;
}

inline int get_first() {
	return duel_first;
}
inline int get_second() {
	return duel_second;
}




char* __fastcall InjectCustomZones_Trampoline(char* pThis, char* pPtr, unsigned __int32 zoneType, unsigned __int32 zoneID, char* zoneShortName, char* zoneLongName, unsigned __int32 eqStrID, __int32 zoneFlags2, __int32 x, __int32 y, __int32 z);
char* __fastcall InjectCustomZones_Detour(char* pThis, char* pPtr, unsigned __int32 zoneType, unsigned __int32 zoneID, char* zoneShortName, char* zoneLongName, unsigned __int32 eqStrID, __int32 zoneFlags2, __int32 x, __int32 y, __int32 z)
{
	struct ADDZONE {
		explicit ADDZONE(int zoneid, char* shortname, char* longname) : zoneid(zoneid), shortname(shortname), longname(longname) {};
		int zoneid;
		char* shortname;
		char* longname;
	};
	if (!strcmp(zoneShortName, "interiorwalltest")) {
		static ADDZONE ZONES[] = {
			ADDZONE(761,"pomischief","LOL New Zones"),
			//ADDZONE(762,"burnedwoods","LOL New Zones"),
			ADDZONE(763,"chelsithreborn","LOL New Zones"),
			ADDZONE(764,"poshadow","LOL New Zones"),
			ADDZONE(765,"heartoffear","LOL New Zones"),
			//ADDZONE(766,"phinteriortree","LOL New Zones"),
			//ADDZONE(767,"interiorwalltest","LOL New Zones"),
			ADDZONE(768,"heartoffearb","LOL New Zones"),
			ADDZONE(769,"heartoffearc","LOL New Zones"),
			ADDZONE(770,"bixiewarfront","LOL New Zones"),
			ADDZONE(771,"deadhills","LOL New Zones"),
			ADDZONE(772,"ethernere","LOL New Zones"),
			ADDZONE(773,"thevoidh","LOL New Zones"),
			ADDZONE(774,"plhbixieint","LOL New Zones"),
			ADDZONE(775,"towerofrot","LOL New Zones"),
			ADDZONE(776,"arginhiz","LOL New Zones"),
			ADDZONE(777,"exalted","LOL New Zones"),
			ADDZONE(778,"arxmentis","LOL New Zones"),
			ADDZONE(779,"brotherisland","LOL New Zones"),
			ADDZONE(780,"kattacastrumb","LOL New Zones"),
			ADDZONE(781,"dredge","LOL New Zones"),
			ADDZONE(782,"endlesscaverns","LOL New Zones"),
			ADDZONE(783,"thuliasaur","LOL New Zones"),
			ADDZONE(784,"degmar","LOL New Zones"),
			ADDZONE(785,"tempesttemple","LOL New Zones"),
			ADDZONE(786,"plhpirateshipint","LOL New Zones"),
			ADDZONE(787,"gnomemtn","LOL New Zones"),
			ADDZONE(788,"drogab","LOL New Zones"),
			ADDZONE(789,"charasisb","LOL New Zones"),
			ADDZONE(790,"scorchedwoods","LOL New Zones"),
			ADDZONE(791,"frontiermtnsb","LOL New Zones"),
			ADDZONE(792,"gorowyn","LOL New Zones"),
			ADDZONE(793,"korshaext","LOL New Zones"),
			ADDZONE(794,"lceanium","LOL New Zones"),
			ADDZONE(795,"cosul","LOL New Zones"),
			ADDZONE(796,"codecayb","LOL New Zones"),
			ADDZONE(797,"exaltedb","LOL New Zones"),
			ADDZONE(798,"pohealth","Plane of Health"),
			ADDZONE(799,"korshaint","LOL New Zones"),
			ADDZONE(800,"chardoktwo","LOL New Zones"),
			ADDZONE(813,"charasistwo","LOL New Zones"),
			ADDZONE(814,"skyfiretwo","LOL New Zones"),
			ADDZONE(815,"overtheretwo","LOL New Zones"),
			ADDZONE(816,"veeshantwo","LOL New Zones"),
			ADDZONE(817,"trialsofsmoke","LOL New Zones"),
			ADDZONE(818,"stratos","LOL New Zones"),
			ADDZONE(819,"aalishai","LOL New Zones"),
			ADDZONE(820,"empyr","LOL New Zones"),
			ADDZONE(821,"esianti","LOL New Zones"),
			ADDZONE(822,"mearatas","LOL New Zones"),
			ADDZONE(823,"chamberoftears","LOL New Zones"),
			ADDZONE(824,"eastwastestwo","LOL New Zones"),
			ADDZONE(825,"frozenshadowtwo","LOL New Zones"),
			ADDZONE(826,"crystaltwoa","LOL New Zones"),
			ADDZONE(827,"greatdividetwo","LOL New Zones"),
			ADDZONE(828,"velketortwo","LOL New Zones"),
			ADDZONE(829,"kaeltwo","LOL New Zones"),
			ADDZONE(830,"crystaltwob","LOL New Zones"),
			ADDZONE(831,"sleepertwo","LOL New Zones"),
			ADDZONE(832,"necropolistwo","LOL New Zones"),
			ADDZONE(833,"cobaltscartwo","LOL New Zones"),
			ADDZONE(834,"westwastestwo","LOL New Zones"),
			ADDZONE(835,"skyshrinetwo","LOL New Zones"),
			ADDZONE(836,"templeveeshantwo","LOL New Zones"),
			//ADDZONE(837,"clz-winter","LOL New Zones"),
			//ADDZONE(838,"clz-anniversary","LOL New Zones"),
			//ADDZONE(839,"clz-spring","LOL New Zones"),
			//ADDZONE(840,"clz-autumn","LOL New Zones"),
			//ADDZONE(841,"clz-frostfell","LOL New Zones"),
			//ADDZONE(842,"clz-af","LOL New Zones"),
			ADDZONE(843,"maidentwo","LOL New Zones"),
			ADDZONE(844,"umbraltwo","LOL New Zones"),
			ADDZONE(845,"akhevatwo","LOL New Zones"),
			ADDZONE(846,"vexthaltwo","LOL New Zones"),
			ADDZONE(847,"shadowvalley","LOL New Zones"),
			ADDZONE(848,"basilica","LOL New Zones"),
			ADDZONE(849,"bloodfalls","LOL New Zones"),
			ADDZONE(850,"maidenhouseint","LOL New Zones")
		};

		for (auto&& zones : ZONES) {
			DebugSpew("injecting ZONE %s", zones.shortname);
			InjectCustomZones_Trampoline(pThis, pPtr, 0, zones.zoneid, zones.shortname, zones.longname, 35154, 4, 0, 0, 0);
		}

		//DebugSpew("injecting zone hollows id 787");
		//InjectCustomZones_Trampoline(pThis, pPtr, 0, 787, "hollows", "Darkened Hollows", 35154, 4, 0, 0, 0);
		//DebugSpew("injecting zone delves id 788");
		//InjectCustomZones_Trampoline(pThis, pPtr, 0, 788, "delves", "Demonic Delves", 35155, 4, 0, 0, 0);
	}
	DebugSpew("loaded zone %s id %d", zoneShortName, zoneID);
	return InjectCustomZones_Trampoline(pThis, pPtr, zoneType, zoneID, zoneShortName, zoneLongName, eqStrID, zoneFlags2, x, y, z);
}
DETOUR_TRAMPOLINE_EMPTY(char* __fastcall InjectCustomZones_Trampoline(char* pThis, char* pPtr, unsigned __int32 zoneType, unsigned __int32 zoneID, char* zoneShortName, char* zoneLongName, unsigned __int32 eqStrID, __int32 zoneFlags2, __int32 x, __int32 y, __int32 z));
void InjectCustomZones() { EzDetour((((DWORD)0x007DC430 - 0x400000) + baseAddress), InjectCustomZones_Detour, InjectCustomZones_Trampoline); };


unsigned char __fastcall HandleWorldMessage_Trampoline(DWORD* con, DWORD edx, unsigned __int32 unk, unsigned __int16 opcode, char* buf, size_t size);
unsigned char __fastcall HandleWorldMessage_Detour(DWORD* con, DWORD edx, unsigned __int32 unk, unsigned __int16 opcode, char* buf, size_t size)
{
	switch (opcode)
	{
#ifdef DPSPLUGIN
	case 0x1337:
		OnRecvEdgeDPSPacket(opcode, buf, size);
		break;
#endif
	case 0x1338:
		OnRecvEdgeStatLabelPacket(opcode, buf, size);
		break;
	default:
		break;
	}
	return HandleWorldMessage_Trampoline(con, edx, unk, opcode, buf, size);
}

struct Duel_Fuck
{
	uint16_t opcode;
	int duel_initiator;
	int duel_target;
};

DETOUR_TRAMPOLINE_EMPTY(unsigned char __fastcall HandleWorldMessage_Trampoline(DWORD* con, DWORD edx, unsigned __int32 unk, unsigned __int16 opcode, char* buf, size_t size));

unsigned char __fastcall SendMessage_Trampoline(DWORD*, unsigned __int32, unsigned __int32, char* buf, size_t, DWORD, DWORD);
unsigned char __fastcall SendMessage_Detour(DWORD* con, unsigned __int32 unk, unsigned __int32 channel, char* buf, size_t size, DWORD a6, DWORD a7)
{
	DWORD retval = 0;
	int16_t opcode = 0;
	memcpy(&opcode, buf, 2);


	//Let's piggyback this bitch


	if (get_first() && get_second()) {

		Duel_Fuck* duel = new Duel_Fuck;
		memset(duel, 0, sizeof(Duel_Fuck));
		duel->opcode = 0x68d3;
		duel->duel_initiator = get_first();
		duel->duel_target = get_second();
		set_first(0);
		set_second(0);
		SendMessage_Trampoline(con, unk, 4, (char*)duel, sizeof(Duel_Fuck), a6, a7);
	}

	/*
	if (opcode == 0xf13 || opcode == 0x578f)
	{
		//if (opcode == 0xf13) //only need to do this once
		//{
		//	g_HWID.Grab();
		//}

		IP_ADAPTER_INFO AdapterInfo[16];
		BYTE macAddress[8];
		memset(macAddress, 0, sizeof(macAddress));
		DWORD dwBufLen = sizeof(AdapterInfo);
		DWORD dwStatus = GetAdaptersInfo(AdapterInfo, &dwBufLen);
		if (dwStatus == ERROR_SUCCESS)
		{

			IP_ADAPTER_INFO AdapterInfo[16];
			DWORD dwBufLen = sizeof(AdapterInfo);
			DWORD dwStatus = GetAdaptersInfo(AdapterInfo, &dwBufLen);

			MacEntry_Struct* me = new MacEntry_Struct;
			memset(me, 0, sizeof(MacEntry_Struct));
			me->opcode = 0xf13;
			memcpy(&me->address, AdapterInfo[0].Address, 8);

			SendMessage_Trampoline(con, unk, channel, (char*)me,
				sizeof(MacEntry_Struct), a6, a7);

			delete me;

		}

		DWORD var = 0;
		auto charToBreak = rand();
		var = (((DWORD)0x009DD250 - 0x400000) + baseAddress);
		PatchA((DWORD*)var, (DWORD*)&charToBreak, 4);

		charToBreak = rand();
		var = (((DWORD)0x009DD254 - 0x400000) + baseAddress);
		PatchA((DWORD*)var, (DWORD*)&charToBreak, 4);

		charToBreak = rand();
		var = (((DWORD)0x009DD258 - 0x400000) + baseAddress);
		PatchA((DWORD*)var, (DWORD*)&charToBreak, 4);

		charToBreak = rand();
		var = (((DWORD)0x009DD25C - 0x400000) + baseAddress);
		PatchA((DWORD*)var, (DWORD*)&charToBreak, 4);

		charToBreak = rand();
		var = (((DWORD)0x009DD260 - 0x400000) + baseAddress);
		PatchA((DWORD*)var, (DWORD*)&charToBreak, 4);

		char bOldUIEnabled = 0;

		HMODULE hMods[1024];
		DWORD cbNeeded;
		unsigned int i;

		if (EnumProcessModules(GetCurrentProcess(), hMods, sizeof(hMods), &cbNeeded))
		{
			for (i = 0; i < (cbNeeded / sizeof(HMODULE)); i++)
			{
				TCHAR szModName[MAX_PATH];

				// Get the full path to the module's file.

				if (GetModuleFileNameEx(GetCurrentProcess(), hMods[i], szModName,
					sizeof(szModName) / sizeof(TCHAR)))
				{
					x86ProcessModuleList.push_back(std::string("D:") + std::string(szModName));
				}
			}
		}


		PROCESSENTRY32 entry;
		entry.dwSize = sizeof(PROCESSENTRY32);

		HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, NULL);
		char buffer[MAX_PATH];
		if (Process32First(snapshot, &entry) == TRUE)
		{
			while (Process32Next(snapshot, &entry) == TRUE)
			{

				HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION, false, entry.th32ProcessID);

				if (hProcess)
				{
					DWORD value = MAX_PATH;
					LARGE_INTEGER valSize;
					if (QueryFullProcessImageName(hProcess, 0, buffer, &value))
					{
						if (strlen(buffer) > 1)
						{
							valSize.QuadPart = FileSize(buffer);
							x86ProcessModuleList.push_back("P:" + std::string(buffer) + "-" + std::to_string(valSize.QuadPart));
						}
					}
					CloseHandle(hProcess);
				}
			}
		}

		Checksum_Struct* cs = (Checksum_Struct*)buf;
		uint64_t checksum = DLL_VERSION_NUMBER;
		int fleCount = 0;
		int bufSize = 0;

		if (simpleFileList.size() > 0)
		{

			int zoneCount = 0;
			FileList_Struct* fl = new FileList_Struct;
			memset(fl, 0, sizeof(FileList_Struct));
			fl->opcode = 0xf13;
			for (auto it : simpleFileList) {

				if (it.first.size() > 0 && it.second != 0)
				{
					strncpy(fl->Keys[zoneCount].zoneName, it.first.c_str(), it.first.size() < 260 ? it.first.size() : 260);
					fl->Values[zoneCount] = it.second;
					zoneCount++;
				}
				else
				{
					continue;
				}

				if (zoneCount >= 200) {
					fl->NumEntries = zoneCount;
					retval = SendMessage_Trampoline(con, unk, channel, (char*)fl,
						sizeof(FileList_Struct), a6, a7);
					delete fl;
					fl = new FileList_Struct;
					memset(fl, 0, sizeof(FileList_Struct));
					fl->opcode = 0xf13;
					zoneCount = 0;
				}
			}
			fl->NumEntries = zoneCount;
			SendMessage_Trampoline(con, unk, channel, (char*)fl,
				sizeof(FileList_Struct), a6, a7);
			delete fl;
		}
		if (x86ProcessModuleList.size() > 0) {

			int processCount = 0;

			ProcessList_Struct* pl = new ProcessList_Struct;
			memset(pl, 0, sizeof(ProcessList_Struct));
			pl->opcode = 0xf13;
			for (auto it : x86ProcessModuleList) {
				if (it.size() > 0)
				{
					strncpy(pl->process[processCount].zoneName, it.c_str(), it.size() < 260 ? it.size() : 260);
					processCount++;
				}
				else
				{
					continue;
				}

				if (processCount >= 200) {
					pl->count = processCount;
					SendMessage_Trampoline(con, unk, channel, (char*)pl,
						sizeof(ProcessList_Struct), a6, a7);
					delete pl;
					pl = new ProcessList_Struct;
					memset(pl, 0, sizeof(ProcessList_Struct));
					pl->opcode = 0xf13;
					processCount = 0;
				}
			}
			pl->count = processCount;
			SendMessage_Trampoline(con, unk, channel, (char*)pl,
				sizeof(ProcessList_Struct), a6, a7);
			delete pl;

			x86ProcessModuleList.clear();
		}

		if (opcode == 0xf13)
		{
			Checksum_Struct* scs = new Checksum_Struct;
			memset(scs, 0, sizeof(Checksum_Struct));
			scs->opcode = 0xf13;
			scs->checksum = cs->checksum;

			retval = SendMessage_Trampoline(con, unk, channel, (char*)scs,
				sizeof(Checksum_Struct), a6, a7);

			delete scs;

			//memset(cs->GPUString, 0, 256);
			//memset(cs->CPUBrandString, 0, 256);
			//memset(cs->HDDSerial, 0, 512);
			//strncpy(cs->CPUBrandString, g_HWID.CPUBrandString, 64);
			//strncpy(cs->GPUString, g_HWID.gfxDescription, 256);
			//strncpy(cs->HDDSerial, std::string(g_HWID.HDDSerial.begin(), g_HWID.HDDSerial.end()).c_str(), 512);
			//memcpy(cs->CRC1, &g_HWID.CPUBrandCRC, 4);
			//memcpy(cs->CRC2, &g_HWID.CPUFeaturesCRC, 4);
			//memcpy(cs->CRC3, &g_HWID.CPUFreqCRC, 4);
			//memcpy(cs->CRC4, &g_HWID.CPUStringCRC, 4);
			//memcpy(cs->CRC5, &g_HWID.MacCRC, 4);
			//memcpy(cs->DisplayW, &g_HWID.DisplayW, 4);
			//memcpy(cs->DisplayH, &g_HWID.DisplayH, 4);
			return retval;
		}
	}

	else if (opcode == 0x298d)
	{
		Checksum_Struct* cs = (Checksum_Struct*)buf;
		Checksum_Struct* scs = new Checksum_Struct;
		memset(scs, 0, sizeof(Checksum_Struct));
		scs->opcode = 0x298d;
		scs->checksum = cs->checksum;

		retval = SendMessage_Trampoline(con, unk, channel, (char*)scs,
			sizeof(Checksum_Struct), a6, a7);

		delete scs;
		return retval;
	}
	*/

	retval = SendMessage_Trampoline(con, unk, channel, buf,
		size, a6, a7);

	return retval;
}

DETOUR_TRAMPOLINE_EMPTY(unsigned char __fastcall SendMessage_Trampoline(DWORD*, unsigned __int32, unsigned __int32, char* buf, size_t, DWORD, DWORD));
DETOUR_TRAMPOLINE_EMPTY(unsigned char __fastcall SetDeviceGammaRamp_Trampoline(HDC hdc, LPVOID lpRamp));






//Broken /duel exploit fixed
VOID SendDuel(PSPAWNINFO pChar, PCHAR szLine)
{
	CHAR szBuffer[MAX_STRING] = { 0 };
	CHAR szArg[MAX_STRING] = { 0 };

	if (!pTarget)
	{
		sprintf(szBuffer, "Command /sexbang requires a target");
		WriteChatColor(szBuffer, USERCOLOR_DEFAULT);
		return;
	};
	
	int first_id = ((PSPAWNINFO)pTarget)->SpawnID;
	int second_id = pChar->SpawnID;

	if (!first_id || !second_id) {
		sprintf(szBuffer, "Command /sexbang id id missing args");
		WriteChatColor(szBuffer, USERCOLOR_DEFAULT);
		return;
	}

	set_first(first_id);
	set_second(second_id);
}

PLUGIN_API VOID InitializeNatedog(VOID) {
	AddCommand("/sexbang", SendDuel);
}