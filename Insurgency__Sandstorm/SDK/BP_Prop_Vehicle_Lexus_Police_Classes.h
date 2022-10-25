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
	 * DynamicClass BP_Prop_Vehicle_Lexus_Police.BP_Prop_Vehicle_Lexus_Police_C
	 * Size -> 0x0090 (FullSize[0x0410] - InheritedSize[0x0380])
	 */
	class ABP_Prop_Vehicle_Lexus_Police_C : public ABP_Prop_Vehicle_Base_C
	{
	public:
		class UPointLightComponent*                                RedLight;                                                // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPointLightComponent*                                BlueLight;                                               // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Strobe_Blue;                                             // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Strobe_Red;                                              // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Strobe;                                                  // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Windows_Merged;                                          // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Mirror_Windshield;                                       // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Mirror_Right;                                            // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Mirror_Left;                                             // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Window_Windshield;                                       // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Window_FrontLeft;                                        // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Window_BackLeft;                                         // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Window_Rear;                                             // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Window_BackRight;                                        // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Window_FrontRight;                                       // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableStrobeLights;                                     // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C6JV[0x3];                                   // 0x03F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Variable;                                       // 0x03FC(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable;                       // 0x0400(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable;                             // 0x0401(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C547[0x6];                                   // 0x0402(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBreakableComponent*                                 CallFunc_Array_Get_Item;                                 // 0x0408(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void BndEvt__Windows_Merged_K2Node_ComponentBoundEvent_0_OnBreakSignature__DelegateSignature();
		void BndEvt__Window_Windshield_K2Node_ComponentBoundEvent_5_OnBreakSignature__DelegateSignature();
		void BndEvt__Window_Rear_K2Node_ComponentBoundEvent_2_OnBreakSignature__DelegateSignature();
		void BndEvt__Window_FrontRight_K2Node_ComponentBoundEvent_0_OnBreakSignature__DelegateSignature();
		void BndEvt__Window_FrontLeft_K2Node_ComponentBoundEvent_4_OnBreakSignature__DelegateSignature();
		void BndEvt__Window_BackRight_K2Node_ComponentBoundEvent_1_OnBreakSignature__DelegateSignature();
		void BndEvt__Window_BackLeft_K2Node_ComponentBoundEvent_3_OnBreakSignature__DelegateSignature();
		void BndEvt__Strobe_Red_K2Node_ComponentBoundEvent_10_OnBreakSignature__DelegateSignature();
		void BndEvt__Strobe_Blue_K2Node_ComponentBoundEvent_11_OnBreakSignature__DelegateSignature();
		void BndEvt__RoundReset_K2Node_ComponentBoundEvent_9_OnRoundResetDelegate__DelegateSignature();
		void BndEvt__Mirror_Windshield_K2Node_ComponentBoundEvent_8_OnBreakSignature__DelegateSignature();
		void BndEvt__Mirror_Right_K2Node_ComponentBoundEvent_7_OnBreakSignature__DelegateSignature();
		void BndEvt__Mirror_Left_K2Node_ComponentBoundEvent_6_OnBreakSignature__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
