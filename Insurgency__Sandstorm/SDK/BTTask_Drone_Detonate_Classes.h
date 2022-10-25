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
	 * DynamicClass BTTask_Drone_Detonate.BTTask_Drone_Detonate_C
	 * Size -> 0x0050 (FullSize[0x00F8] - InheritedSize[0x00A8])
	 */
	class UBTTask_Drone_Detonate_C : public UBTTask_BlueprintBase
	{
	public:
		float                                                      DetonateDelay;                                           // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9F0[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIController*                                       K2Node_Event_OwnerController_2;                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APawn*                                               K2Node_Event_ControlledPawn_2;                           // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AVehicleHoveringBase*                                K2Node_DynamicCast_AsVehicle_Hovering_Base;              // 0x00C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x00C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DETQ[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIController*                                       K2Node_Event_OwnerController;                            // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APawn*                                               K2Node_Event_ControlledPawn;                             // 0x00D8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x00E0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VPH7[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AVehicleHoveringBase*                                K2Node_DynamicCast_AsVehicle_Hovering_Base_2;            // 0x00E8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_2;                           // 0x00F0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLT8[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	public:
		void ReceiveTickAI(class AAIController* bpp__OwnerController__pf, class APawn* bpp__ControlledPawn__pf, float bpp__DeltaSeconds__pf);
		void ReceiveExecuteAI(class AAIController* bpp__OwnerController__pf, class APawn* bpp__ControlledPawn__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
