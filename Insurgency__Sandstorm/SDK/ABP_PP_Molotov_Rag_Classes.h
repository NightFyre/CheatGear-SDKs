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
	 * DynamicClass ABP_PP_Molotov_Rag.ABP_PP_Molotov_Rag_C
	 * Size -> 0x06B0 (FullSize[0x2670] - InheritedSize[0x1FC0])
	 */
	class UABP_PP_Molotov_Rag_C : public UFirstPersonAnimInstance
	{
	public:
		unsigned char                                              UnknownData_4773[0x8];                                   // 0x1FC0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x1FC8(0x0030) NativeAccessSpecifierPublic
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_SubInput;                                  // 0x1FF8(0x0078) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x2070(0x0020) NativeAccessSpecifierPublic
		struct FAnimNode_RigidBody                                 AnimGraphNode_RigidBody;                                 // 0x2090(0x0590) NativeAccessSpecifierPublic
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x2620(0x0020) NativeAccessSpecifierPublic
		float                                                      SimulationBlendTimer;                                    // 0x2640(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableBlend;                                            // 0x2644(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_Enable;                                     // 0x2645(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9AU[0x2];                                   // 0x2646(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_State;                                      // 0x2648(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_Event_bEnable;                                    // 0x264C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ODS[0x3];                                   // 0x264D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      K2Node_Event_DeltaTimeX;                                 // 0x2650(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    K2Node_Event_RemainingAmmo;                              // 0x2654(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<ERevolverChamberState>                              K2Node_Event_Chambers;                                   // 0x2658(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQEY[0x8];                                   // 0x2668(0x0008) MISSED OFFSET (PADDING)

	public:
		void UpdateRevolverChamberState(TArray<ERevolverChamberState> bpp__Chambers__pf__const);
		void ToggleOpticState(bool bpp__Enable__pf);
		void StopToggleOpticMontage();
		void InterfaceUpdateSimulationBlend(float bpp__State__pf);
		void ForceToggleOpticState(bool bpp__bEnable__pf);
		void ForceRevolverChamberVisibility(int32_t bpp__RemainingAmmo__pf);
		void BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf);
		void BlueprintInitializeAnimation();
		void AnimGraph(const struct FPoseLink& bpp__InPose__pf, struct FPoseLink* bpp__AnimGraph__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
