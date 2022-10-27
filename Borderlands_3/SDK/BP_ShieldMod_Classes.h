#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * BlueprintGeneratedClass BP_ShieldMod.BP_ShieldMod_C
	 * Size -> 0x0018 (FullSize[0x0600] - InheritedSize[0x05E8])
	 */
	class ABP_ShieldMod_C : public AShield
	{
	public:
		float                                                      IgnoreManufacturerName;                                  // 0x05E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGbxAttributeFloat                                  ShieldAttribute_ElementalResistance;                     // 0x05EC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class AActor*                                              ShieldBuddy_MessyBreakup;                                // 0x05F8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
