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
	 * BlueprintGeneratedClass BPWeap_SG_TED_FriendZone.BPWeap_SG_TED_FriendZone_C
	 * Size -> 0x000C (FullSize[0x0A64] - InheritedSize[0x0A58])
	 */
	class ABPWeap_SG_TED_FriendZone_C : public ABPWeap_SG_TED_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A58(0x0008) Transient, DuplicateTransient
		float                                                      DropChance;                                              // 0x0A60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void TedioreThrowWeapon(class AActor** ThrownProjectile);
		void UserConstructionScript();
		void SpawnTurret();
		void ExecuteUbergraph_BPWeap_SG_TED_FriendZone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
