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
	 * BlueprintGeneratedClass A_CrouchSnipe.A_CrouchSnipe_C
	 * Size -> 0x0017 (FullSize[0x01C0] - InheritedSize[0x01A9])
	 */
	class UA_CrouchSnipe_C : public U00_ActionParent_C
	{
	public:
		unsigned char                                              UnknownData_TE82[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x01B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		int32_t                                                    HowManyTimesToShoot;                                     // 0x01B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    AmountShot;                                              // 0x01BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool checkProceduralPrecondition(class ARaidGOAPController* P);
		void MoveInfo(const struct FVector& atLocation, EMoveRequest Branches);
		void StartAction();
		void LookTowardsTarget();
		void ShootAtPlayer();
		void CleanupAction(class ARaidGOAPController* P);
		void ExecuteUbergraph_A_CrouchSnipe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
