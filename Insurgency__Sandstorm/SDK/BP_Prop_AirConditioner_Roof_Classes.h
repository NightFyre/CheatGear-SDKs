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
	 * DynamicClass BP_Prop_AirConditioner_Roof.BP_Prop_AirConditioner_Roof_C
	 * Size -> 0x0058 (FullSize[0x0490] - InheritedSize[0x0438])
	 */
	class ABP_Prop_AirConditioner_Roof_C : public APropBreakable
	{
	public:
		class UINSAudioComponent*                                  AirConditioner_Audio;                                    // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Aircon_Type;                                             // 0x0440(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Air_Conditioner_Sound;                                   // 0x0444(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G7SQ[0x3];                                   // 0x0445(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable;                                    // 0x0448(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Temp_delegate_Variable;                                  // 0x0458(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FAkExternalSourceInfo>                       Temp_struct_Variable_2;                                  // 0x0468(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      Temp_delegate_Variable_2;                                // 0x0478(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S3SH[0x8];                                   // 0x0488(0x0008) MISSED OFFSET (PADDING)

	public:
		void UserConstructionScript();
		void OnReset();
		void BlueprintOnBreak();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
