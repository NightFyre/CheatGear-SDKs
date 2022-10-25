#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * WidgetBlueprintGeneratedClass WBP_PlatformCustomisation.WBP_PlatformCustomisation_C
	 * Size -> 0x0060 (FullSize[0x02D0] - InheritedSize[0x0270])
	 */
	class UWBP_PlatformCustomisation_C : public UWBP_ItemCustomisation_Master_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScrollBox*                                          ScrollBox_Items;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AGBPlatform*                                         PlatformRef;                                             // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                Ammunition;                                              // 0x0288(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Grenade;                                                 // 0x02A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Equipment;                                               // 0x02B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AddEntry(const class FText& Text, TArray<struct FPrimaryAssetId>* ItemAssetIdList, bool bDoNotSort);
		void Construct();
		void AddAmmunition();
		void AddGrenades();
		void AddEquipment();
		void ExecuteUbergraph_WBP_PlatformCustomisation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
