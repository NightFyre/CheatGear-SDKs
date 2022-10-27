#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass Menu_01.Menu_01_C
	 * Size -> 0x0038 (FullSize[0x0260] - InheritedSize[0x0228])
	 */
	class AMenu_01_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMenuPlayAsDroneOverlayWidget_C*                     Drone_Overlay_Widget;                                    // 0x0230(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAkAmbientSound*                                     AkAmbientSound_1_ExecuteUbergraph_Menu_01_RefProperty;   // 0x0238(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              FollowsCursorActor_ExecuteUbergraph_Menu_01_RefProperty; // 0x0240(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_Prisoner_C*                                      BP_Prisoner_4136_ExecuteUbergraph_Menu_01_RefProperty;   // 0x0248(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASceneCapture2D*                                     HeadCapture_ExecuteUbergraph_Menu_01_RefProperty;        // 0x0250(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APostProcessVolume*                                  PostProcessVolume_Drone_EdGraph_0_RefProperty;           // 0x0258(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateDroneVisual();
		void InpActEvt_Ctrl_D_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Menu_01(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
