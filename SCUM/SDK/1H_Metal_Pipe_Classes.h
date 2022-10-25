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
	 * BlueprintGeneratedClass 1H_Metal_Pipe.1H_Metal_Pipe_C
	 * Size -> 0x0008 (FullSize[0x0938] - InheritedSize[0x0930])
	 */
	class A1H_Metal_Pipe_C : public AWeaponItem
	{
	public:
		class UMeleeAttackCollisionCapsule*                        MeleeAttackCollisionCapsule;                             // 0x0930(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
