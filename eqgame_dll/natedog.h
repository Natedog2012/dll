#pragma once

#include "MQ2Main.h"


int spoof_target_id;
int spoof_my_id;

int spoof_third_id;
int spoof_fourth_id;

int spoof_opcode;

inline void set_target_id(int value) {
	spoof_target_id = value;
}
inline int get_target_id() {
	return spoof_target_id;
}

inline void set_third_id(int value) {
	spoof_third_id = value;
}
inline int get_third_id() {
	return spoof_third_id;
}

inline void set_fourth_id(int value) {
	spoof_fourth_id = value;
}
inline int get_fourth_id() {
	return spoof_fourth_id;
}

inline int get_my_id() {
	return spoof_my_id;
}

inline void set_my_id(int value) {
	spoof_my_id = value;
}



inline void set_spoof_opcode(int value) {
	spoof_opcode = value;
}
inline int get_spoof_opcode() {
	return spoof_opcode;
}

struct Duel_Fuck
{
	uint16_t opcode;
	int duel_initiator;
	int duel_target;
};

struct PickPocket_Struct {
	uint16_t opcode;
	int to;
	int from;
	uint16_t myskill;
	uint8_t type; // -1 you are being picked, 0 failed , 1 = plat, 2 = gold, 3 = silver, 4 = copper, 5 = item
	uint8_t unknown1; // 0 for response, unknown for input
	uint32_t coin;
	uint8_t lastsix[2];
};

struct ClientTarget_Struct {
	uint16_t opcode;
	uint32_t new_target;
};

struct SetTitle_Struct {
	uint16_t opcode;
	uint32_t is_suffix;	//guessed: 0 = prefix, 1 = suffix
	uint32_t title_id;
};

struct InventorySlot_Struct
{
	/*000*/	int16_t	Type;		// Worn and Normal inventory = 0, Bank = 1, Shared Bank = 2, Delete Item = -1
	/*002*/	int16_t	Unknown02;
	/*004*/	int16_t	Slot;
	/*006*/	int16_t	SubIndex;
	/*008*/	int16_t	AugIndex;	// Guessing - Seen 0xffff
	/*010*/	int16_t	Unknown01;	// Normally 0 - Seen 13262 when deleting an item, but didn't match item ID
	/*012*/
};

struct AugmentItem_Struct {
			uint16_t opcode;
	/*00*/	uint32_t	dest_inst_id;			// The unique serial number for the item instance that is being augmented
	/*04*/	uint32_t	container_index;				// Seen 0
	/*08*/	InventorySlot_Struct container_slot;	// Slot of the item being augmented
	/*20*/	uint32_t	augment_index;				// Seen 0
	/*24*/	InventorySlot_Struct augment_slot;	// Slot of the distiller to use (if one applies)
	/*36*/	uint32_t	augment_action;			// Guessed - 0 = augment, 1 = remove with distiller, 3 = delete aug
	/*36*/	//int32	augment_slot;
	/*40*/
};

/*
struct AugmentItem_Struct2 {
			uint16_t opcode;
	uint32_t	container_index;
	int32_t	container_slot;
	uint32_t  augment_index;
	int32_t	augment_slot;
	uint32_t	dest_inst_id;
	int32_t	augment_action;	

};
*/






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



DETOUR_TRAMPOLINE_EMPTY(unsigned char __fastcall HandleWorldMessage_Trampoline(DWORD* con, DWORD edx, unsigned __int32 unk, unsigned __int16 opcode, char* buf, size_t size));

unsigned char __fastcall SendMessage_Trampoline(DWORD*, unsigned __int32, unsigned __int32, char* buf, size_t, DWORD, DWORD);
unsigned char __fastcall SendMessage_Detour(DWORD* con, unsigned __int32 unk, unsigned __int32 channel, char* buf, size_t size, DWORD a6, DWORD a7)
{
	DWORD retval = 0;
	int16_t opcode = 0;
	memcpy(&opcode, buf, 2);

	CHAR szMessage[MAX_STRING] = { 0 };
	//Let's piggyback this bitch
	if (get_spoof_opcode() == 0x39e8 && get_target_id()) { //PickPocket
		PickPocket_Struct* pick = new PickPocket_Struct;
		memset(pick, 0, sizeof(PickPocket_Struct));
		pick->opcode = get_spoof_opcode();
		pick->to = get_target_id();
		pick->from = 0;
		pick->myskill = 200;
		SendMessage_Trampoline(con, unk, 4, (char*)pick, sizeof(PickPocket_Struct), a6, a7);
		sprintf(szMessage, "Pickpocket sent");
		WriteChatColor(szMessage, USERCOLOR_DEFAULT);
		set_spoof_opcode(0);
		set_target_id(0);
		set_my_id(0);
		delete pick;
	} 
	else if (get_spoof_opcode() == 0x2703 && get_target_id()) { //OP_Taunt
		ClientTarget_Struct* target = new ClientTarget_Struct;
		memset(target, 0, sizeof(ClientTarget_Struct));
		target->opcode = get_spoof_opcode();
		target->new_target = get_target_id();
		SendMessage_Trampoline(con, unk, 4, (char*)target, sizeof(ClientTarget_Struct), a6, a7);
		sprintf(szMessage, "Taunt sent");
		WriteChatColor(szMessage, USERCOLOR_DEFAULT);
		set_spoof_opcode(0);
		set_target_id(0);
		set_my_id(0);
		delete target;
	}
	else if (get_spoof_opcode() == 0x68d3 && get_target_id() && get_my_id()) { //Duel
		Duel_Fuck* duel = new Duel_Fuck;
		memset(duel, 0, sizeof(Duel_Fuck));
		duel->opcode = get_spoof_opcode();
		duel->duel_initiator = get_target_id();
		duel->duel_target = get_my_id();
		SendMessage_Trampoline(con, unk, 4, (char*)duel, sizeof(Duel_Fuck), a6, a7);
		sprintf(szMessage, "Duel sent");
		WriteChatColor(szMessage, USERCOLOR_DEFAULT);
		set_spoof_opcode(0);
		set_target_id(0);
		set_my_id(0);
		delete duel;
	}
	else if (get_spoof_opcode() == 0x6527 && get_target_id() && get_my_id() >= 0) { //Titles
		SetTitle_Struct* title = new SetTitle_Struct;
		memset(title, 0, sizeof(SetTitle_Struct));
		title->opcode = get_spoof_opcode();
		title->is_suffix = get_my_id();
		title->title_id = get_target_id();
		SendMessage_Trampoline(con, unk, 4, (char*)title, sizeof(SetTitle_Struct), a6, a7);
		sprintf(szMessage, "Title sent");
		WriteChatColor(szMessage, USERCOLOR_DEFAULT);
		set_spoof_opcode(0);
		set_target_id(0);
		set_my_id(0);
		delete title;
	}
	else if (get_spoof_opcode() == 0x661b) { //Augment
		AugmentItem_Struct* aug_item = new AugmentItem_Struct;
		memset(aug_item, 0, sizeof(AugmentItem_Struct));
		aug_item->opcode = get_spoof_opcode();
		aug_item->augment_action = 0; //Add augment
		aug_item->augment_index = get_target_id();
		aug_item->container_slot.Slot = get_my_id();
		aug_item->container_slot.SubIndex = get_fourth_id();
		aug_item->container_index = get_third_id();
		aug_item->augment_slot.Slot = get_target_id();
		SendMessage_Trampoline(con, unk, 4, (char*)aug_item, sizeof(AugmentItem_Struct), a6, a7);
		sprintf(szMessage, "Aug item sent");
		WriteChatColor(szMessage, USERCOLOR_DEFAULT);
		set_spoof_opcode(0);
		set_target_id(0);
		set_my_id(0);
		delete aug_item;
	}


	//0x661b


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

	set_spoof_opcode(0x68d3); //Duel OP
	set_target_id(first_id);
	set_my_id(second_id);
}


//Fixed Pickpocket infinite range
VOID PickPocketNow(PSPAWNINFO pChar, PCHAR szLine)
{
	CHAR szBuffer[MAX_STRING] = { 0 };
	CHAR szArg[MAX_STRING] = { 0 };

	if (!pTarget)
	{
		sprintf(szBuffer, "Command /leethax requires a target");
		WriteChatColor(szBuffer, USERCOLOR_DEFAULT);
		return;
	};

	int spawn_id = ((PSPAWNINFO)pTarget)->SpawnID;

	if (!spawn_id) {
		sprintf(szBuffer, "Command /leethax id missing args");
		WriteChatColor(szBuffer, USERCOLOR_DEFAULT);
		return;
	}

	set_spoof_opcode(0x39e8);
	set_target_id(spawn_id);
}

//Any class can taunt
VOID TauntNow(PSPAWNINFO pChar, PCHAR szLine)
{
	CHAR szBuffer[MAX_STRING] = { 0 };
	CHAR szArg[MAX_STRING] = { 0 };

	if (!pTarget)
	{
		sprintf(szBuffer, "Command /leettaunt requires a target");
		WriteChatColor(szBuffer, USERCOLOR_DEFAULT);
		return;
	};

	int spawn_id = ((PSPAWNINFO)pTarget)->SpawnID;

	if (!spawn_id) {
		sprintf(szBuffer, "Command /leettaunt id missing args");
		WriteChatColor(szBuffer, USERCOLOR_DEFAULT);
		return;
	}

	set_spoof_opcode(0x2703);
	set_target_id(spawn_id);
}

//Use any title...
VOID FreeTitles(PSPAWNINFO pChar, PCHAR szLine)
{
	CHAR szBuffer[MAX_STRING] = { 0 };

	if (!szLine[0]) {
		SyntaxError("Usage: /title type id");
		return;
	}
	
	CHAR Arg1[MAX_STRING] = { 0 };
	CHAR Arg2[MAX_STRING] = { 0 };
	GetArg(Arg1, szLine, 1);
	GetArg(Arg2, szLine, 2);

	if (Arg1[0] && Arg2[0]) {
		int title_type = atoi(Arg1);
		int title_id = atoi(Arg2);

		sprintf(szBuffer, "Command /title type %d id %d", title_type, title_id);
		WriteChatColor(szBuffer, USERCOLOR_DEFAULT);

		set_spoof_opcode(0x6527);
		set_my_id(title_type); //Title type
		set_target_id(title_id); //This will be the title ID
	}
}


VOID AugmentItem(PSPAWNINFO pChar, PCHAR szLine)
{
	CHAR szBuffer[MAX_STRING] = { 0 };

	if (!szLine[0]) {
		SyntaxError("Usage: /augment container id");
		return;
	}
	//Container slot == Slot of item?
	//augment_action == 0 for add aug always use 0
	//augment_index ~~ slot #?

	CHAR Arg1[MAX_STRING] = { 0 };
	CHAR Arg2[MAX_STRING] = { 0 };
	CHAR Arg3[MAX_STRING] = { 0 };
	CHAR Arg4[MAX_STRING] = { 0 };
	GetArg(Arg1, szLine, 1);
	GetArg(Arg2, szLine, 2);
	GetArg(Arg3, szLine, 3);
	GetArg(Arg4, szLine, 3);

	if (Arg1[0] && Arg2[0] && Arg3[0] && Arg4[0]) {
		int container_slot = atoi(Arg1);
		int augment_index = atoi(Arg2);
		int container_index = atoi(Arg3);
		int sub_index = atoi(Arg4);

		sprintf(szBuffer, "Command /augment container %d aug_index %d container_index %d SubIndex %d", container_slot, augment_index, container_index, sub_index);
		WriteChatColor(szBuffer, USERCOLOR_DEFAULT);

		set_spoof_opcode(0x661b);
		set_my_id(container_slot); //Container slot
		set_target_id(augment_index); //augment index
		set_third_id(container_index);
		set_fourth_id(sub_index);
	}
}

PLUGIN_API VOID InitializeNatedog(VOID) {
	AddCommand("/sexbang", SendDuel);
	AddCommand("/leethax", PickPocketNow);
	AddCommand("/taunt", TauntNow);
	AddCommand("/title", FreeTitles);
	AddCommand("/augment", AugmentItem);
}