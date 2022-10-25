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
	 * WidgetBlueprintGeneratedClass BP_ObjectiveSecondaryIcon.BP_ObjectiveSecondaryIcon_C
	 * Size -> 0x0080 (FullSize[0x03A0] - InheritedSize[0x0320])
	 */
	class UBP_ObjectiveSecondaryIcon_C : public UObjectiveIcon
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0320(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TargetIcon;                                              // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TargetIconBg;                                            // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextBlock_107;                                           // 0x0340(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TypeIcon_Left;                                           // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TypeIcon_Right;                                          // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TypeIconBg_Left;                                         // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TypeIconBg_Right;                                        // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      BackgroundAlpha_1;                                       // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Alpha;                                                   // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ActiveObjective;                                         // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_AC1Q[0x3];                                   // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FillAlpha_1;                                             // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AlignLeft;                                               // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_ICFO[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          WeaponCacheTexture;                                      // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          FuelTruckTexture;                                        // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDestroyed;                                             // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShouldShowType;                                          // 0x0391(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_CFRQ[0x2];                                   // 0x0392(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InactiveAlpha;                                           // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDisabled;                                              // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MNO2[0x3];                                   // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InactiveTextAlpha;                                       // 0x039C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FLinearColor GetObjectiveIconFillColorAndOpacity();
		struct FLinearColor GetObjectiveIconColorAndOpacity();
		struct FSlateColor GetMainOpacity();
		struct FSlateColor GetTextColor();
		struct FLinearColor GetBgColor();
		void CheckObjectiveDestroyed();
		struct FSlateBrush GetTypeIcon();
		ESlateVisibility GetCanvasVisibility();
		ESlateVisibility GetRightSecondaryTypeVisibility();
		ESlateVisibility GetLeftSecondaryTypeVisibility();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void ExecuteUbergraph_BP_ObjectiveSecondaryIcon(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
