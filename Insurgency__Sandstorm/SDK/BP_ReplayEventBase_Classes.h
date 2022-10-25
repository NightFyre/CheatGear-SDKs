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
	 * WidgetBlueprintGeneratedClass BP_ReplayEventBase.BP_ReplayEventBase_C
	 * Size -> 0x0018 (FullSize[0x0248] - InheritedSize[0x0230])
	 */
	class UBP_ReplayEventBase_C : public UUserWidget
	{
	public:
		class UBP_ReplayControls_C*                                Controls_Widget;                                         // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextBlock*                                          Text_Widget;                                             // 0x0238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Valid;                                                   // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TNVG[0x3];                                   // 0x0241(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EventTime;                                               // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Set_Event_Time(float Time);
		void Set_Controls_Widget(class UBP_ReplayControls_C* Widget);
		void Set_Event_Body(const class FText& Body);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
