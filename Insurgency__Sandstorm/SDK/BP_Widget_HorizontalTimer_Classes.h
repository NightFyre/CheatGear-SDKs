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
	 * WidgetBlueprintGeneratedClass BP_Widget_HorizontalTimer.BP_Widget_HorizontalTimer_C
	 * Size -> 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
	 */
	class UBP_Widget_HorizontalTimer_C : public UUserWidget
	{
	public:
		class UProgressBar*                                        TimerProgress;                                           // 0x0230(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TimerReadoutText;                                        // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		float                                                      TimerMaximum;                                            // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		float                                                      RemainingTime;                                           // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateMaximumTime(float NewMaximum);
		void UpdateRemainingTime(float NewRemainingTime);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
