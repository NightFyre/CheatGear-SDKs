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
	 * WidgetBlueprintGeneratedClass BP_PlayMenu_PlayerLevel.BP_PlayMenu_PlayerLevel_C
	 * Size -> 0x0021 (FullSize[0x0251] - InheritedSize[0x0230])
	 */
	class UBP_PlayMenu_PlayerLevel_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_RankIcon_C*                                      BP_RankIcon;                                             // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PVPCurrentLevel;                                         // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             PVPRankBand;                                             // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bShowExperienceNumbers;                                  // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

	public:
		void OnUpdateXP(int64_t InXP);
		void SetBlankXP();
		void UpdateXP();
		void SetNewXP(int64_t XP);
		void Construct();
		void ExecuteUbergraph_BP_PlayMenu_PlayerLevel(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
