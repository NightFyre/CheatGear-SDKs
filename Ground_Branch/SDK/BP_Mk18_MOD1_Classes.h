#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BP_Mk18_MOD1.BP_Mk18_MOD1_C
	 * Size -> 0x0054 (FullSize[0x06B0] - InheritedSize[0x065C])
	 */
	class ABP_Mk18_MOD1_C : public ABP_Firearm_Master_C
	{
	public:
		unsigned char                                              UnknownData_80WI[0x4];                                   // 0x065C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0660(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UGBRailComponent*                                    LeftRail;                                                // 0x0668(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGBRailComponent*                                    RightRail;                                               // 0x0670(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGBRailComponent*                                    BottomRail;                                              // 0x0678(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGBRailComponent*                                    TopRail;                                                 // 0x0680(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGBRailComponent*                                    RearSightRail;                                           // 0x0688(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGBSightComponent*                                   FailSafeSight;                                           // 0x0690(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGBEjectComponent*                                   AR15_Eject;                                              // 0x0698(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGBExternalMagazineComponent*                        MagWell_STANAG556;                                       // 0x06A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UGBBarrelComponent*                                  AR15_Barrel;                                             // 0x06A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void LockOnEmpty(bool* bShouldLock);
		void UpdateSafetyAlpha();
		void ExecuteUbergraph_BP_Mk18_MOD1(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
