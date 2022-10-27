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
	 * BlueprintGeneratedClass BPWeap_DAL_BaseWeapon.BPWeap_DAL_BaseWeapon_C
	 * Size -> 0x000C (FullSize[0x09D8] - InheritedSize[0x09CC])
	 */
	class ABPWeap_DAL_BaseWeapon_C : public ABPWeap_BaseWeapon_C
	{
	public:
		int32_t                                                    BurstSize;                                               // 0x09CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BurstFireRate;                                           // 0x09D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      SemiFireRate;                                            // 0x09D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
