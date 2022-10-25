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
	 * WidgetBlueprintGeneratedClass BP_OSSStatus.BP_OSSStatus_C
	 * Size -> 0x0062 (FullSize[0x031A] - InheritedSize[0x02B8])
	 */
	class UBP_OSSStatus_C : public UOSSStatusWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    StateNotOk;                                              // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AllStatesNowOk;                                          // 0x02C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UHorizontalBox*                                      HorizNewWorldBox;                                        // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconNewWorld;                                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              IconPlatform;                                            // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_ErrorBackground;                                   // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          NewWorldErrorLabel;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     NewWorldSwitcher;                                        // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlatformErrorLabel;                                      // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PlatformsErrorLabel;                                     // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     PlatformSwitcher;                                        // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bCurrentlyVisible;                                       // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EOSSNetworkState                                           New_WorldState;                                          // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetPlatformIcon(class UTexture2D** Icon);
		void UpdateAnimationFade();
		class UWidget* Get_HorizNewWorldBox_ToolTipWidget();
		class UWidget* Get_HorizPlatformBox_ToolTipWidget();
		class UWidget* GenerateTooltip(bool bPlatform, const class FText& ToolTipText);
		void SetState(bool bPlatformState, EOSSNetworkState NewState);
		void OnNewWorldStateUpdated(EOSSNetworkState OldState, EOSSNetworkState NewState);
		void OnPlatformStateUpdated(EOSSNetworkState OldState, EOSSNetworkState NewState);
		void Construct();
		void CustomNewWorldState(EOSSNetworkState NewState);
		void ExecuteUbergraph_BP_OSSStatus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
