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
	 * DynamicClass BP_Aircraft_A10.BP_Aircraft_A10_C
	 * Size -> 0x0080 (FullSize[0x03A0] - InheritedSize[0x0320])
	 */
	class ABP_Aircraft_A10_C : public AAircraftStrafing
	{
	public:
		class UChildActorComponent*                                SupersonicCrackle;                                       // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            PS_A10Contrail_3;                                        // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            PS_A10Exhaust_3;                                         // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            PS_A10Contrail;                                          // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            PS_A10Exhaust;                                           // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     Minigun;                                                 // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable;                                    // 0x0350(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x0360(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Temp_delegate_Variable;                                  // 0x0370(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		float                                                      K2Node_Event_DeltaSeconds;                               // 0x0380(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BTP5[0x4];                                   // 0x0384(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AAircraftBase*                                       K2Node_CustomEvent_Aircraft;                             // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AA10_Supersonic_Crackle_C*                           K2Node_DynamicCast_AsA10_Supersonic_Crackle;             // 0x0390(0x0008) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       K2Node_DynamicCast_bSuccess;                             // 0x0398(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZ7H[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (PADDING)

	public:
		void UserConstructionScript();
		void ReceiveTick(float bpp__DeltaSeconds__pf);
		void ReceiveBeginPlay();
		void OnStrafeBeginDelegate_Event_1(class AAircraftBase* bpp__Aircraft__pf);
		void ExecuteUbergraph_BP_Aircraft_A10_1(int32_t bpp__EntryPoint__pf);
		void AircraftEventDelegate__DelegateSignature(class AAircraftBase* bpp__Aircraft__pf);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
