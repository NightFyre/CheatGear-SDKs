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
	 * WidgetBlueprintGeneratedClass BP_FireModeRow.BP_FireModeRow_C
	 * Size -> 0x004D (FullSize[0x027D] - InheritedSize[0x0230])
	 */
	class UBP_FireModeRow_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USizeBox*                                            FireModeContainer;                                       // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FiremodeImage;                                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             FiremodeSelectedBg;                                      // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EFirearmFiremode                                           Firemode;                                                // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       Selected;                                                // 0x0251(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VSPS[0x2];                                   // 0x0252(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        UnselectedColorAndOpacity;                               // 0x0254(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        SelectedColorAndOpacity;                                 // 0x0264(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DefaultHeight;                                           // 0x0274(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SemiHeight;                                              // 0x0278(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHasTwoRoundBurst;                                       // 0x027C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void UpdateTwoRoundBurst(bool bNewTwoRoundBurst);
		void SetFiremodeSelected(bool bSelected);
		ESlateVisibility GetSelectedFiremodeBgVisibility();
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BP_FireModeRow(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
