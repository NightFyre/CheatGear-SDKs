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
	 * DynamicClass BTTask_SetBoolean.BTTask_SetBoolean_C
	 * Size -> 0x0040 (FullSize[0x00E8] - InheritedSize[0x00A8])
	 */
	class UBTTask_SetBoolean_C : public UBTTask_BlueprintBase
	{
	public:
		bool                                                       Boolean;                                                 // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DLQ7[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              BlackboardKey;                                           // 0x00B0(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class AAIController*                                       K2Node_Event_OwnerController;                            // 0x00D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APawn*                                               K2Node_Event_ControlledPawn;                             // 0x00E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void ReceiveExecuteAI(class AAIController* bpp__OwnerController__pf, class APawn* bpp__ControlledPawn__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
