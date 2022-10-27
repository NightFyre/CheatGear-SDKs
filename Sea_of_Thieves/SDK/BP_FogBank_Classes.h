#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * BlueprintGeneratedClass BP_FogBank.BP_FogBank_C
	 * Size -> 0x0008 (FullSize[0x0578] - InheritedSize[0x0570])
	 */
	class ABP_FogBank_C : public AFogBank
	{
	public:
		class UAthenaPlayerZonePenetrationTrackerComponent*        AthenaPlayerZonePenetrationTracker;                      // 0x0570(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
