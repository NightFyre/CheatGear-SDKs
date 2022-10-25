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
	 * DynamicClass BTTask_Helicopter_PlayResponse.BTTask_Helicopter_PlayResponse_C
	 * Size -> 0x0068 (FullSize[0x0110] - InheritedSize[0x00A8])
	 */
	class UBTTask_Helicopter_PlayResponse_C : public UBTTask_BlueprintBase
	{
	public:
		EHoveringFireSupportDialogue                               Response;                                                // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6IBS[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAIController*                                       K2Node_Event_OwnerController;                            // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APawn*                                               K2Node_Event_ControlledPawn;                             // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AVehicleHoveringBase*                                K2Node_DynamicCast_AsVehicle_Hovering_Base;              // 0x00C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x00C8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_77BE[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AFireSupportHoveringVehicle*                         K2Node_DynamicCast_AsFire_Support_Hovering_Vehicle;      // 0x00D0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_2;                           // 0x00D8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CG41[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AINSMultiplayerMode*                                 K2Node_DynamicCast_AsINSMultiplayer_Mode;                // 0x00E0(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess_3;                           // 0x00E8(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UEQP[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFireSupportResponse                                CallFunc_Map_Find_Value;                                 // 0x00F0(0x0020) Transient, DuplicateTransient, NativeAccessSpecifierPublic

	public:
		void ReceiveExecuteAI(class AAIController* bpp__OwnerController__pf, class APawn* bpp__ControlledPawn__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
