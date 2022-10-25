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
	 * WidgetBlueprintGeneratedClass BP_ReplayEventObjectiveDestroyed.BP_ReplayEventObjectiveDestroyed_C
	 * Size -> 0x0028 (FullSize[0x0270] - InheritedSize[0x0248])
	 */
	class UBP_ReplayEventObjectiveDestroyed_C : public UBP_ReplayEventBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0248(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Background;                                              // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      EventBox;                                                // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          EventText;                                               // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             ReplayButton;                                            // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void BndEvt__ReplayButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ReplayButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__ReplayButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void ExecuteUbergraph_BP_ReplayEventObjectiveDestroyed(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
