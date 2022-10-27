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
	 * WidgetBlueprintGeneratedClass WBP_FirearmCustomisation.WBP_FirearmCustomisation_C
	 * Size -> 0x01B8 (FullSize[0x0428] - InheritedSize[0x0270])
	 */
	class UWBP_FirearmCustomisation_C : public UWBP_ItemCustomisation_Master_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBorder*                                             Border_1;                                                // 0x0278(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_307;                                               // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          ScrollBox_Items;                                         // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_2;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_4;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AGBFirearm*                                          FirearmRef;                                              // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ERailFirearmType                                           FirearmType;                                             // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZO3Z[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                MuzzleDevices;                                           // 0x02B8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FName                                                MuzzleDeviceThread;                                      // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPrimaryAssetId>                             MuzzleDeviceIdList;                                      // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Sights;                                                  // 0x02E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        SightMountTypes;                                         // 0x0300(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FPrimaryAssetId>                             SightAssetIdLlist;                                       // 0x0310(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Ammunition;                                              // 0x0320(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                RailAdapaters;                                           // 0x0338(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FPrimaryAssetId>                             RailAdapterIdList;                                       // 0x0350(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIncludeRailAccessories;                                 // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LPZ8[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Accessories;                                             // 0x0368(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FPrimaryAssetId>                             AccessoryAssetIdList;                                    // 0x0380(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bConsiderRiser;                                          // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8O6I[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Risers;                                                  // 0x0398(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FPrimaryAssetId>                             RiserAssetIdList;                                        // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Underbarrel;                                             // 0x03C0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FPrimaryAssetId>                             UnderbarrelAssetIdList;                                  // 0x03D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIncludeRailMountSights;                                 // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XQLV[0x7];                                   // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Magazines;                                               // 0x03F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        MagazineTypes;                                           // 0x0408(0x0010) Edit, BlueprintVisible
		TArray<struct FPrimaryAssetId>                             MagazineAssetIdList;                                     // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void DetermineValidRailAttachments(class AActor* Item);
		ESlateVisibility GetRiserWarningVis();
		void AddEntries(const class FText& Text, TArray<struct FPrimaryAssetId>* ItemAssetIdList);
		void Construct();
		void AddSights();
		void AddRailAdapter();
		void GenerateRailAttachmentLists();
		void AddMuzzleDevices();
		void AddMagazines();
		void ExecuteUbergraph_WBP_FirearmCustomisation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
