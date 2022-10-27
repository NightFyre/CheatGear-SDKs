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
	 * BlueprintGeneratedClass BP_DroppedItem_Handgun.BP_DroppedItem_Handgun_C
	 * Size -> 0x0020 (FullSize[0x02B0] - InheritedSize[0x0290])
	 */
	class ABP_DroppedItem_Handgun_C : public AGBDroppedItem
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0298(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBoxComponent*                                       BoxInteractiveComponent;                                 // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        TimerHandle_PickupFirearm;                               // 0x02A8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void AddBoxInteract();
		void InpActEvt_Interact_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_Interact_K2Node_InputActionEvent_1(const struct FKey& Key);
		void MakeInteractiveEvent();
		void OnBeginCursorOver_Event_1(class UPrimitiveComponent* TouchedComponent);
		void OnEndCursorOver_Event_1(class UPrimitiveComponent* TouchedComponent);
		void PickupFirearm();
		void ExecuteUbergraph_BP_DroppedItem_Handgun(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
