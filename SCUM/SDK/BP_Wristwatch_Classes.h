#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * BlueprintGeneratedClass BP_Wristwatch.BP_Wristwatch_C
	 * Size -> 0x0008 (FullSize[0x0258] - InheritedSize[0x0250])
	 */
	class ABP_Wristwatch_C : public AWristwatch
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0250(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void SetDisplayBrightness(float Value);
		void ExecuteUbergraph_BP_Wristwatch(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
