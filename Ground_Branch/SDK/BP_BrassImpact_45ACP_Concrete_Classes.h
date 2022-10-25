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
	 * BlueprintGeneratedClass BP_BrassImpact_45ACP_Concrete.BP_BrassImpact_45ACP_Concrete_C
	 * Size -> 0x0014 (FullSize[0x0268] - InheritedSize[0x0254])
	 */
	class ABP_BrassImpact_45ACP_Concrete_C : public ABP_CasingImpact_Master_C
	{
	public:
		unsigned char                                              UnknownData_YTX8[0x4];                                   // 0x0254(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0258(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FName                                                AkSwitchState;                                           // 0x0260(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_BrassImpact_45ACP_Concrete(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
