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
	 * BlueprintGeneratedClass Action_Operative_SummonDigiClone.Action_Operative_SummonDigiClone_C
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class UAction_Operative_SummonDigiClone_C : public UAction_Operative_Digiclone_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) Transient, DuplicateTransient

	public:
		void Failure_264F849F461DE8AE8A8C7B98070E4B60(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor);
		void Success_264F849F461DE8AE8A8C7B98070E4B60(const struct FEnvQueryResult& QueryResult, const struct FVector& Location, class AActor* Actor);
		void OnBegin(class AActor* Actor);
		void AnimNotify_SpawnClones();
		void ExecuteUbergraph_Action_Operative_SummonDigiClone(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
