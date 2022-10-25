#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetAnimationBudgetParameters(class UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);
		void STATIC_EnableAnimationBudget(class UObject* WorldContextObject, bool bEnabled);
		static UClass* StaticClass();
	};

	/**
	 * Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
	 * Size -> 0x0024 (FullSize[0x0B00] - InheritedSize[0x0ADC])
	 */
	class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
	{
	public:
		unsigned char                                              UnknownData_S1CT[0x4];                                   // 0x0ADC(0x0004) Fix Super Size
		unsigned char                                              UnknownData_KJBP[0x18];                                  // 0x0AE0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              bAutoRegisterWithBudgetAllocator : 1;                    // 0x0AF8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bAutoCalculateSignificance : 1;                          // 0x0AF8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              bShouldUseActorRenderedFlag : 1;                         // 0x0AF8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A1NZ[0x7];                                   // 0x0AF9(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
