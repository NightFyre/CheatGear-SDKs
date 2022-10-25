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
	 * BlueprintGeneratedClass BPF_AudioFunctionLibrary.BPF_AudioFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPF_AudioFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetDistanceFromEmitterToListener(class UWwiseAudioComponent* AudioComponent, class UObject* __WorldContext, float* RTPCValue);
		void STATIC_SetRandomVariation(class UWwiseAudioComponent* TargetWwiseComponent, class UObject* __WorldContext);
		void STATIC_GetDistanceBetweenVectors(const struct FVector& Vector, const struct FVector& Vector2, class UObject* __WorldContext, float* Distance);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
