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
	 * WidgetBlueprintGeneratedClass BP_WeaponSelectionRow.BP_WeaponSelectionRow_C
	 * Size -> 0x00C8 (FullSize[0x02F8] - InheritedSize[0x0230])
	 */
	class UBP_WeaponSelectionRow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BackgroundImage;                                         // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_KeyActionIcon_C*                                 SelectKeyIcon;                                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              WeaponIcon;                                              // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          WeaponName;                                              // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AItemEquipable*                                      Item;                                                    // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EItemSlot                                                  ItemSlot;                                                // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       Selected;                                                // 0x0261(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_XNGV[0x2];                                   // 0x0262(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        InactiveBgColor;                                         // 0x0264(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ActiveBgColor;                                           // 0x0274(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        ActiveFgColor;                                           // 0x0284(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        InactiveFgColor;                                         // 0x0294(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YLHZ[0x4];                                   // 0x02A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EGrenadeCategory, class FName>                        GrenadeActionMaps;                                       // 0x02A8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void GetActionNames(TArray<class FName>* KeyActions);
		void UpdateItem(class AItemEquipable* NewItem, EItemSlot NewItemSlot);
		void UpdateSelected(bool bNewSelected);
		struct FLinearColor GetBgColor();
		struct FSlateColor GetTextColor();
		void Construct();
		void OnUpdateUI();
		void ExecuteUbergraph_BP_WeaponSelectionRow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
