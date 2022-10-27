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
	 * DynamicClass BP_Melee.BP_Melee_C
	 * Size -> 0x0020 (FullSize[0x2350] - InheritedSize[0x2330])
	 */
	class ABP_Melee_C : public AItemMeleeWeapon
	{
	public:
		class FScriptMulticastDelegate                             OnSwingDisp;                                             // 0x2330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHitDisp;                                               // 0x2340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
