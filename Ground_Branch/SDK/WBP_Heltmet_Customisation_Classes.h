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
	 * WidgetBlueprintGeneratedClass WBP_Heltmet_Customisation.WBP_Heltmet_Customisation_C
	 * Size -> 0x0068 (FullSize[0x02D8] - InheritedSize[0x0270])
	 */
	class UWBP_Heltmet_Customisation_C : public UWBP_ItemCustomisation_Master_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0270(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScrollBox*                                          ScrollBox_Items;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FName                                                DragDropOperationType;                                   // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_HeadGear_Master_C*                               HeadGear;                                                // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        Sockets;                                                 // 0x0290(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                Attachments;                                             // 0x02A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FPrimaryAssetId>                             AttachmentAssetIdList;                                   // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        HelmetTags;                                              // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AddEntry(const class FText& Text, TArray<struct FPrimaryAssetId>* ItemAssetIdList);
		void Construct();
		void ExecuteUbergraph_WBP_Heltmet_Customisation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
