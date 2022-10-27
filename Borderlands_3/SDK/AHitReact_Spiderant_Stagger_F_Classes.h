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
	 * BlueprintGeneratedClass AHitReact_Spiderant_Stagger_F.AHitReact_Spiderant_Stagger_F_C
	 * Size -> 0x0018 (FullSize[0x0230] - InheritedSize[0x0218])
	 */
	class UAHitReact_Spiderant_Stagger_F_C : public UOakAction_Anim
	{
	public:
		class AActor*                                              MySelf;                                                  // 0x0218(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              MyTarget;                                                // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDamageCauserComponent*                              MyDamageCausingComponent;                                // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
