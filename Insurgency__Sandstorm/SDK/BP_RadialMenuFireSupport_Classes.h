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
	 * WidgetBlueprintGeneratedClass BP_RadialMenuFireSupport.BP_RadialMenuFireSupport_C
	 * Size -> 0x0019 (FullSize[0x0249] - InheritedSize[0x0230])
	 */
	class UBP_RadialMenuFireSupport_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_Widget_HorizontalTimer_C*                        PersonalCooldownTimer;                                   // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBP_RadialMenuBase_C*                                RadialMenu;                                              // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bFireSupportCooldown;                                    // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateFireSupportTimerVisibility(bool bNewOnCooldown);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void SetupFireSupportRadial();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnTeamChanged(unsigned char TeamId, class ATeamInfo* TeamInfo);
		void BndEvt__RadialMenu_K2Node_ComponentBoundEvent_0_OnSendCommand__DelegateSignature(ERadialMenuDirection Direction);
		void UpdatePersonalCooldown();
		void ExecuteUbergraph_BP_RadialMenuFireSupport(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
