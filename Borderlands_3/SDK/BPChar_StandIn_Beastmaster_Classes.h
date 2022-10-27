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
	 * BlueprintGeneratedClass BPChar_StandIn_Beastmaster.BPChar_StandIn_Beastmaster_C
	 * Size -> 0x0008 (FullSize[0x2398] - InheritedSize[0x2390])
	 */
	class ABPChar_StandIn_Beastmaster_C : public ABPChar_StandInPlayer_C
	{
	public:
		class UBeastmasterStandInComponent*                        BeastmasterStandIn;                                      // 0x2390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
