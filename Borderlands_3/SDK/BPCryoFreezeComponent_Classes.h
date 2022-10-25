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
	 * BlueprintGeneratedClass BPCryoFreezeComponent.BPCryoFreezeComponent_C
	 * Size -> 0x0008 (FullSize[0x0C98] - InheritedSize[0x0C90])
	 */
	class UBPCryoFreezeComponent_C : public UCryoDestructibleComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0C90(0x0008) Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void OnGbxComponentFracture_Event_1(const struct FVector& FractureCentroid, const struct FVector& HitDirection, float FracturePercent, bool bSilentFracture);
		void ExecuteUbergraph_BPCryoFreezeComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
