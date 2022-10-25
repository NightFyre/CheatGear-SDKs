#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass BP_Widget_TacticalMap_SpawnZone.BP_Widget_TacticalMap_SpawnZone_C
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class UBP_Widget_TacticalMap_SpawnZone_C : public UMapSpawnZoneWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UpdateFactionColor();
		void UpdateFactionIcon();
		void Construct();
		void OnRefreshTeams();
		void OnChangeTeam(unsigned char TeamId, class ATeamInfo* TeamInfo);
		void ExecuteUbergraph_BP_Widget_TacticalMap_SpawnZone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
