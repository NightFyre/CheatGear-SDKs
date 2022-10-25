#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * BlueprintGeneratedClass BPFL_Wwise.BPFL_Wwise_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPFL_Wwise_C : public UBlueprintFunctionLibrary
	{
	public:
		void GBPostExplosionEvent(class UAkComponent* AkComponent, class UAkAudioEvent* AkEvent, const class FString& SwitchGroup, const class FString& SwitchState, class ABP_SpatialSound_C* SpatialSoundRef, class UObject* __WorldContext);
		void GBPostBanksUnloaded(class UObject* __WorldContext);
		void GBPostBanksLoaded(class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
