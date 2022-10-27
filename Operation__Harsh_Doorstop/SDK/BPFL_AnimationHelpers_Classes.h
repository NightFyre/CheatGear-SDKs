#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * BlueprintGeneratedClass BPFL_AnimationHelpers.BPFL_AnimationHelpers_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_AnimationHelpers_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_RInterp_To_Smooth(const struct FRotator& A, const struct FRotator& B, float DeltaTime, float InterpSpeed, class UObject* __WorldContext, struct FRotator* Return_Value);
		void STATIC_VInterp_To_Smooth(const struct FVector& A, const struct FVector& B, float DeltaTime, float InterpSpeed, class UObject* __WorldContext, struct FVector* Return_Value);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
