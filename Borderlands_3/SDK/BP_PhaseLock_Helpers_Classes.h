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
	 * BlueprintGeneratedClass BP_PhaseLock_Helpers.BP_PhaseLock_Helpers_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_PhaseLock_Helpers_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_IsPhaselocked(class AActor* Target, class UObject* __WorldContext, bool* bRes);
		void STATIC_GetAdjustedPhaseLockSpeed(class AActor* Target, class UObject* __WorldContext, float* NewSpeed);
		void STATIC_ApplyPhaseLockToTarget(class AActor* Target, class UClass* PhaseLockClass, class AActor* Instigator, float Duration, float Speed, const struct FVector& TargetLocation, class UObject* __WorldContext, bool* bRes);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
