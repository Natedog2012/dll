#pragma once

#include "MQ2Main.h"


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
			ADDZONE(798,"pohealth","LOL New Zones"),
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