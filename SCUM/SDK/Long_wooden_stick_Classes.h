#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass Long_wooden_stick.Long_wooden_stick_C
	 * Size -> 0x0008 (FullSize[0x0928] - InheritedSize[0x0920])
	 */
	class ALong_wooden_stick_C : public AEquipmentItem
	{
	public:
		class UMeleeAttackCollisionCapsule*                        MeleeAttackCollisionCapsule;                             // 0x0920(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
