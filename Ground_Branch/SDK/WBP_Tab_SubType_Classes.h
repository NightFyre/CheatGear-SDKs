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
	 * WidgetBlueprintGeneratedClass WBP_Tab_SubType.WBP_Tab_SubType_C
	 * Size -> 0x0067 (FullSize[0x0358] - InheritedSize[0x02F1])
	 */
	class UWBP_Tab_SubType_C : public UWBP_Tab_Master_C
	{
	public:
		unsigned char                                              UnknownData_8U99[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Item;                                             // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_ItemIcon;                                          // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnItemCategorySelected;                                  // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FPrimaryAssetType                                   ItemAssetType;                                           // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FName                                                SubType;                                                 // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              SubTypeIcon[0x28];                                       // 0x0330(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void Construct();
		void BndEvt__Button_Item_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature();
		void IconLoaded(class UObject* LoadedAsset);
		void InternalOnSelected();
		void ExecuteUbergraph_WBP_Tab_SubType(int32_t EntryPoint);
		void OnItemCategorySelected__DelegateSignature(const struct FPrimaryAssetType& ItemAssetType, const class FName& SubType);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
