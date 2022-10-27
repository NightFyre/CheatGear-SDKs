#pragma once

/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * BlueprintGeneratedClass Rifle_M1_Para_Child.Rifle_M1_Para_Child_C
	 * Size -> 0x0008 (FullSize[0x0910] - InheritedSize[0x0908])
	 */
	class ARifle_M1_Para_Child_C : public AWeapon_Master_C
	{
	public:
		class UDecalComponent*                                     Highlighter;                                             // 0x0908(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
