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
	 * DynamicClass BP_Prop_VendingMachine_Parent.BP_Prop_VendingMachine_Parent_C
	 * Size -> 0x00B0 (FullSize[0x04E8] - InheritedSize[0x0438])
	 */
	class ABP_Prop_VendingMachine_Parent_C : public APropBreakable
	{
	public:
		class URoundResetComponent*                                RoundReset;                                              // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 Glass;                                                   // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UBreakableComponent*>                         Breakables;                                              // 0x0448(0x0010) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         CleanMesh;                                               // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Variable;                                       // 0x0470(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Variable_2;                                     // 0x0474(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Variable_3;                                     // 0x0478(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Variable_4;                                     // 0x047C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0480(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_Has_Been_Initd_Variable;                       // 0x0490(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HYQO[0x3];                                   // 0x0491(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Temp_int_Loop_Counter_Variable;                          // 0x0494(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Array_Index_Variable;                           // 0x0498(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Temp_bool_IsClosed_Variable;                             // 0x049C(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1S9T[0x3];                                   // 0x049D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBreakableComponent*                                 CallFunc_Array_Get_Item;                                 // 0x04A0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 CallFunc_Array_Get_Item_2;                               // 0x04A8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 CallFunc_Array_Get_Item_3;                               // 0x04B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UDecalPlaneComponent*>                        CallFunc_K2_GetComponentsByClass_ReturnValue;            // 0x04B8(0x0010) ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UBreakableComponent*>                         CallFunc_K2_GetComponentsByClass_ReturnValue_2;          // 0x04C8(0x0010) ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDecalPlaneComponent*                                CallFunc_Array_Get_Item_4;                               // 0x04D8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBreakableComponent*                                 CallFunc_Array_Get_Item_5;                               // 0x04E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UserConstructionScript();
		void SetColor();
		void ReceiveBeginPlay();
		void OnBreak();
		void K2_OnReset();
		void BndEvt__RoundReset_K2Node_ComponentBoundEvent_5_OnRoundResetDelegate__DelegateSignature();
		void BndEvt__Glass_K2Node_ComponentBoundEvent_0_OnBreakSignature__DelegateSignature();
		void BlueprintOnBreak();
		void OnBreakSignature__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
