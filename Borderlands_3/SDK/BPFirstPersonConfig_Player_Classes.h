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
	 * BlueprintGeneratedClass BPFirstPersonConfig_Player.BPFirstPersonConfig_Player_C
	 * Size -> 0x0010 (FullSize[0x0478] - InheritedSize[0x0468])
	 */
	class ABPFirstPersonConfig_Player_C : public AFirstPersonConfigurationData
	{
	public:
		class UOakVoiceOfGodComponent*                             OakVoiceOfGod;                                           // 0x0468(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UGbxSkeletalMeshComponent*                           Legs;                                                    // 0x0470(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
