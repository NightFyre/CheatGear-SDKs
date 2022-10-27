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
	 * DynamicClass BP_Prop_Vehicle_Ambulance_Open.BP_Prop_Vehicle_Ambulance_Open_C
	 * Size -> 0x0060 (FullSize[0x03E0] - InheritedSize[0x0380])
	 */
	class ABP_Prop_Vehicle_Ambulance_Open_C : public ABP_Prop_Vehicle_Base_C
	{
	public:
		class UBreakableComponent*                                 Windows_Merged;                                          // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Door_Right;                                              // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Door_Left;                                               // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Mirror_Right;                                            // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Mirror_Left;                                             // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Window_Windshield;                                       // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Window_FrontLeft;                                        // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Window_FrontRight;                                       // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Variable;                                       // 0x03C0(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JXR5[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBreakableComponent*                                 CallFunc_Array_Get_Item;                                 // 0x03C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable;                             // 0x03D0(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable;                       // 0x03D1(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1ZSK[0xE];                                   // 0x03D2(0x000E) MISSED OFFSET (PADDING)

	public:
		void BndEvt__Windows_Merged_K2Node_ComponentBoundEvent_2_OnBreakSignature__DelegateSignature();
		void BndEvt__Window_Windshield_K2Node_ComponentBoundEvent_0_OnBreakSignature__DelegateSignature();
		void BndEvt__Window_FrontRight_K2Node_ComponentBoundEvent_0_OnBreakSignature__DelegateSignature();
		void BndEvt__Window_FrontLeft_K2Node_ComponentBoundEvent_4_OnBreakSignature__DelegateSignature();
		void BndEvt__RoundReset_K2Node_ComponentBoundEvent_3_OnRoundResetDelegate__DelegateSignature();
		void BndEvt__Mirror_Right_K2Node_ComponentBoundEvent_7_OnBreakSignature__DelegateSignature();
		void BndEvt__Mirror_Left_K2Node_ComponentBoundEvent_6_OnBreakSignature__DelegateSignature();
		void BndEvt__EnginePart_K2Node_ComponentBoundEvent_4_VehiclePartDestroyedDelegate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
