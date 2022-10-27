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
	 * BlueprintGeneratedClass BP_HYP_Shield_Oldridian.BP_HYP_Shield_Oldridian_C
	 * Size -> 0x0010 (FullSize[0x0368] - InheritedSize[0x0358])
	 */
	class UBP_HYP_Shield_Oldridian_C : public UBP_HYP_Shield_Basic_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) Transient, DuplicateTransient
		class ACharacter*                                          PlayerCharacter;                                         // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void StartShieldEffect();
		void StopShieldEffect();
		void ExecuteUbergraph_BP_HYP_Shield_Oldridian(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
