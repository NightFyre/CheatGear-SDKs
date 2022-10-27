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
	 * BlueprintGeneratedClass A_Looting.A_Looting_C
	 * Size -> 0x001B (FullSize[0x01C4] - InheritedSize[0x01A9])
	 */
	class UA_Looting_C : public U00_ActionParent_C
	{
	public:
		unsigned char                                              UnknownData_SDNF[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		struct FVector                                             Loot_Look_At_Location;                                   // 0x01B8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool checkProceduralPrecondition(class ARaidGOAPController* P);
		void StartAction();
		void CleanupAction(class ARaidGOAPController* P);
		void ShuffleAround();
		void LookTowardsTarget();
		void ExecuteUbergraph_A_Looting(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
