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
	 * WidgetBlueprintGeneratedClass BP_DebugStatCollectorMenu.BP_DebugStatCollectorMenu_C
	 * Size -> 0x0050 (FullSize[0x0280] - InheritedSize[0x0230])
	 */
	class UBP_DebugStatCollectorMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0230(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UButton*                                             Button_Exit;                                             // 0x0238(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_MemorySizeStaticMeshes;                           // 0x0240(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_MemorySizeTextures;                               // 0x0248(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_StartAutotest;                                    // 0x0250(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_StartAutotestSingleCam;                           // 0x0258(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_StartCameraSequence;                              // 0x0260(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_StartFPSCounter;                                  // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_StopCameraSequence;                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             Button_StopFPSCounter;                                   // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void VisibilityChanged();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void BndEvt__Button_StartAutotest_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_StartAutotestSingleCam_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_MemorySizeStaticMeshes_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_MemorySizeTextures_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_StartFPSCounter_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_StopFPSCounter_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_StartCameraSequence_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_StopCameraSequence_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_Exit_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_BP_DebugStatCollectorMenu(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
