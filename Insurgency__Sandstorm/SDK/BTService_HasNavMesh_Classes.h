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
	 * DynamicClass BTService_HasNavMesh.BTService_HasNavMesh_C
	 * Size -> 0x0048 (FullSize[0x00E0] - InheritedSize[0x0098])
	 */
	class UBTService_HasNavMesh_C : public UBTService_BlueprintBase
	{
	public:
		struct FBlackboardKeySelector                              HasNavMesh;                                              // 0x0098(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class AAIController*                                       K2Node_Event_OwnerController;                            // 0x00C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APawn*                                               K2Node_Event_ControlledPawn;                             // 0x00C8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x00D0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CallFunc_K2_ProjectPointToNavigation_ProjectedLocation;  // 0x00D4(0x000C) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ReceiveTickAI(class AAIController* bpp__OwnerController__pf, class APawn* bpp__ControlledPawn__pf, float bpp__DeltaSeconds__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
