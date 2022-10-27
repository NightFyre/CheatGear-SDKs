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
	 * DynamicClass BP_Firearm_AntiMaterialBase.BP_Firearm_AntiMaterialBase_C
	 * Size -> 0x0060 (FullSize[0x46C0] - InheritedSize[0x4660])
	 */
	class ABP_Firearm_AntiMaterialBase_C : public ABP_Firearm_DMRBase_C
	{
	public:
		int32_t                                                    NumShotsToTriggerHearingLoss;                            // 0x4660(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShotClearDelay;                                          // 0x4664(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumShotsFired;                                           // 0x4668(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Temp_int_Variable;                                       // 0x466C(0x0004) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      K2Node_CreateDelegate_OutputDelegate;                    // 0x4670(0x0010) ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, NativeAccessSpecifierPublic
		struct FCharacterResponseRequest                           K2Node_MakeStruct_CharacterResponseRequest;              // 0x4680(0x0040) Transient, DuplicateTransient, NativeAccessSpecifierPublic

	public:
		void TriggerHearingLoss();
		void ClearFiredShotsEvent();
		void ClearFiredShots();
		void BlueprintOnFireStart();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
